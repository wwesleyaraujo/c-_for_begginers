#ifndef _MY_STRING
#define _MY_STRING
#include <cstring>
#include <string>

    class MyString
    {
    private:
       char *str;
    public:
        MyString(/* args */);
        MyString( const char *str);
        MyString(const MyString &source);
        ~MyString();
        void display() const;
        int get_length() const;
        const char *get_str() const;
    };
    
   

    
#endif