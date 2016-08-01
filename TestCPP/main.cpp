#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person p1;
    p1.set_age(24);
    p1.set_name("Dave");

    cout << "name: " << p1.get_name() << endl;
    cout << "age: "  << p1.get_age()  << endl;
}
