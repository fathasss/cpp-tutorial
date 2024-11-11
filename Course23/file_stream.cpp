#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream MyWriteFile("filename.txt"); //file create

    MyWriteFile << "Files can tricky, but it is fun enough!";

    MyWriteFile.close(); //close the file

    string myText; //create a text string

    ifstream MyReadFile("filename.txt"); //read file
    
    while (getline (MyReadFile,myText)){
        cout << myText; //output the text from the file
    }
    
    MyReadFile.close();
    return 0;
}