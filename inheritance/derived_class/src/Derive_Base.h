#ifndef _DERIVED_H
#define _DERIVED_H 

#include "Base.h"

class Derive_Base : public Base
{
private:
    int double_value;
public:

    Derive_Base (/* args */);
    Derive_Base ( int x);
    Derive_Base ( const Derive_Base &b);
    Derive_Base  &operator=(const Derive_Base &other);
};

#endif