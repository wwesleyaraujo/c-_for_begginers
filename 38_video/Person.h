#include <string>
#ifndef _PERSON_H
#define _PERSON_H 
class Person{
    private:
    std::string name;
    int age;
    public:
    Person();
    Person(int age, std::string name);
    ~Person();
    void setName(std::string name);
    std::string getName();
    void setAge(int age);
    int getAge();
};

#endif