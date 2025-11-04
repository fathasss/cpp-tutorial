#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string name;
    string password;

public:
    void Login(const string& userName, const string& userPassword)
    {
        name = userName;
        password = userPassword;
    }

    // (İsteğe bağlı) debug için göster
    void PrintInfo() const {
        cout << "User: " << name << ", Password: " << password << endl;
    }
};

int main()
{
    User user1;
    user1.Login("admin", "12345");
    user1.PrintInfo(); // isteğe bağlı: doğrulama için ekledim
    return 0;
}
