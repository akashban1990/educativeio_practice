#include <iostream>
#include <string>
using namespace std;

int main()
{
    string yourName;
    cout << "Enter your full name: ";
    getline(cin, yourName); // Inputting full name
    cout << "Hello " << yourName << endl; // Printing User's name with Hello
    cout << "Welcome to Educative" << endl;
    return 0;
}