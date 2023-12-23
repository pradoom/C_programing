#include<iostream>
using namespace std;

class A {
    int *roll;
    char *s;
public:
    A() {
        roll = new int;
        s = new char[10];
    }

    void set_data() {
        cout << "Enter roll:" << endl;
        cin >> *roll;
    }

    A  &operator +(A &t) {
        static A temp;
        *(temp.roll) = *(roll) + *(t.roll);
        return temp;
    }

    void get_data() {
        cout << "Roll: " << *roll << endl;
    }

    ~A() {
        delete roll;
        delete[] s;
    }
    friend A &operator -(A&,A&);
};

A & operator -(A&t1,A&t2)
{
    static A temp;
    *temp.roll = *t1.roll - *t2.roll;
    return temp;
}


int main() {
    A b1, b2, b3;
    b1.set_data();
    b2.set_data();
    b3 = b1 + b2;
    b3.get_data();

    return 0;
}
