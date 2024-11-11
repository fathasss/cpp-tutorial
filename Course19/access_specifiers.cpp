#include <iostream>

using namespace std;

class MyClass{
    public:
        int x;
    private:
        int y;
};

int main(){

    /*
        public - members are accessible from outside the class
        private - members cannot be accessed (or viewed) from outside the class
        protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
    */
    MyClass myObj;
    myObj.x = 3;
    //myObj.y = 50;

    cout << myObj.x << endl;
    return 0;
}