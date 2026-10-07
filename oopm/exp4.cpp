#include <iostream>
using namespace std;

class Demo {
private:
    int privateVar; // accessible only inside class

protected:
    int protectedVar; // accessible inside class + derived class

public:
    int publicVar; // accessible everywhere

    Demo() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }

    void show() {
        cout << "Private: " << privateVar << endl;
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << publicVar << endl;
    }
};

class Derived : public Demo {
public:
    void showDerived() {
        // cout << privateVar; ❌ Not accessible
        cout << "Protected (from derived): " << protectedVar << endl;
        cout << "Public (from derived): " << publicVar << endl;
    }
};

int main() {
    Demo d;
    d.show();
    cout << "Public (from main): " << d.publicVar << endl;
    // cout << d.privateVar; ❌ Not accessible
    // cout << d.protectedVar; ❌ Not accessible

    Derived obj;
    obj.showDerived();

    return 0;
}