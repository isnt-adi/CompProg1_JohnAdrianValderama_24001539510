#include <iostream>
using namespace std;

int main() {

string name, birthday, address;
int age;
    cout << "Please Enter Your Name: ";
    cin >> name;
    cout << "Please Enter Your Birthday: ";
    cin >> birthday;
    cout << "Please Enter Your Age: ";
    cin >> age;
    cout << "Please Enter Your Address: ";
    cin >> address;
    cout << "My name is " << name << ", My birthday is on " << birthday << " and currently I am " << age << " years old. I'm from " << address;
    return 0;
}