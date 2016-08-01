#include <iostream>
#include <string.h>

using namespace std;

class Box
{
  private:
    int m_age;
    string m_name;
  public:
    int get_age();
    void set_age(int val);

    string get_name();
    void set_name(string val);
};
