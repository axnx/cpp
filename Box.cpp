#include "Box.h"

//Constuctor
Box::Box()
{
    //ctor
}

//Destructor
Box::~Box()
{
    //dtor
}

void Box::set_age(int val)
{
    m_age = val;
}

int Box::get_age()
{
    return m_age;
}

void Box::set_name(string val)
{
    m_name = val;
}

string Box::get_name()
{
    return m_name;
}

