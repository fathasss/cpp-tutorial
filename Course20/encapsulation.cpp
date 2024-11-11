#include <iostream>

using namespace std;

class Employee{
    private:
        int salary;
    
    public:
        void setsalary(int s){
            salary = s;
        }

        int getsalary(){
            return salary;
        }
};

int main(){
    Employee employeObj;
    employeObj.setsalary(40);
    cout << employeObj.getsalary();
    return 0;
}