#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1; // default
    Student s2("Ashjai", 20); // parameterized
    Student s3(s2); // copy

    s1.display();
    s2.display();
    s3.display();

    return 0;
}