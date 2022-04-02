cmake_minimum_required(VERSION 3.16.3)

#set the project name 
project(Bank VERSION 1.0)

#add libray 
add_library(
    #library label
    say_hello_account  
    src/Account.h
    src/Account.cpp
)

 
#acessing subdirectories 
target_include_directories(say_hello_account PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

#link static libraries 
target_link_libraries(Bank PUBLIC say_hello_account)

#targe preprocessor
target_compile_definitions(Bank PUBLIC BANK_VERSION=4)
