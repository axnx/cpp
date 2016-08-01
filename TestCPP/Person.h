#include <iostream>

using namespace std;

class Person
{
private:
   string m_name;
   int m_age;

public:
   void set_name(string);
   string get_name();
   void set_age(int);
   int get_age();
};
