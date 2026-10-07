#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1; // object creation
    s1.name = "Ashjai";
    s1.age = 20;
    s1.display();

    return 0;
}