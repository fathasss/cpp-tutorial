#include <iostream>
#include <map>

using namespace std;

int main(){

    // map<key,value> index.

    map<string,int> people = {{"John", 29}, {"Adele", 45}, {"Bob", 39}};

    cout << "People map is element: " << people["Adele"] << endl;
    cout << "People map is at element: " << people.at("John") << endl;

    //People add element.

    people["Jerry"] = 18;
    people.insert({"Kelly", 22});

    cout << "People last element: " << people["Jerry"] << endl;
    cout << "People last element: " << people["Kelly"] << endl;

    //People remove element.
    people.erase("John");
    for(auto person : people){
        cout << person.first << " is: " << person.second << endl;
    }

    //People size
    people.size();
    //Remove all element
    people.clear();

    return 0;
}