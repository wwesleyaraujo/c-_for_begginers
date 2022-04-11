#ifndef _BASE_H
#define _BASE_H

class Base
{
private:
    int value;
public:
    Base(/* args */);
    Base( int x);
    Base(const Base &b);
    Base &operator=(const Base &rhs);
    ~Base();
};
#endif