#include "Person.h"
#include <string.h>

Person::Person()
{
}
Person::Person(int age, std::string name) : name(name), age(age){}

Person::~Person()
{

}

void Person::setName(std::string name)
{
    this->name = name;
}

std::string Person::getName()
{
    return this->name;
}



void Person::setAge(int age)
{
    this->age = age;
}

int Person::getAge()
{
    return this->age;
}