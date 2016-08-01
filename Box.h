#include <iostream>
#include <string.h>

#ifndef BOX_H
#define BOX_H

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

#endif // BOX_H
