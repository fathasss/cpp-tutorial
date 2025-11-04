#include <iostream>
#include <vector>
#include <string>
#include <chrono>

using namespace std;
using steady_clock = chrono::steady_clock;

long long attempts = 0;
steady_clock::time_point start_time;

bool try_generate(const string &target, string &current, const vector<char> &keys, int pos) {
    if (pos == (int)target.size()) {
        attempts++;
        if (current == target) {
            auto elapsed = chrono::duration_cast<chrono::milliseconds>(steady_clock::now() - start_time).count();
            cout << "Found! password = \"" << current << "\"\n";
            cout << "Attempts: " << attempts << ", elapsed (ms): " << elapsed << "\n";
            return true;
        }
        return false;
    }

    // iterate through charset
    for (char c : keys) {
        current[pos] = c;
        if (try_generate(target, current, keys, pos + 1)) return true;
    }
    return false;
}

int main() {
    string pass;
    cout << "Enter password to test (for demo only): ";
    if (!(cin >> pass)) {
        cerr << "Input error\n";
        return 1;
    }

    // Safety limit: avoid huge runs by default
    const int MAX_LEN_ALLOWED = 8;
    if ((int)pass.length() > MAX_LEN_ALLOWED) {
        cerr << "Password length > " << MAX_LEN_ALLOWED << ". For safety this demo refuses to brute-force such long passwords.\n";
        cerr << "Use a shorter test password or adjust the limit in source if you understand the consequences.\n";
        return 1;
    }

    // Character set (you can customize). Keep small for demo.
    vector<char> keys = {
        '1','2','3','4','5','6','7','8','9','0',
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
        'r','s','t','u','v','w','x','y','z'
    };

    string current(pass.size(), ' '); // buffer for generated string
    attempts = 0;
    start_time = steady_clock::now();

    cout << "Starting brute-force (length = " << pass.length() << ", charset size = " << keys.size() << ")...\n";

    bool found = try_generate(pass, current, keys, 0);
    if (!found) {
        auto elapsed = chrono::duration_cast<chrono::milliseconds>(steady_clock::now() - start_time).count();
        cout << "Not found after " << attempts << " attempts. Elapsed (ms): " << elapsed << "\n";
    }

    return 0;
}
