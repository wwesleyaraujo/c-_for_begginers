cmake_minimum_required(VERSION 3.16.3)

#set the project name 
project(OLAS)


#add executable
add_executable("${PROJECT_NAME}" main.cpp)

#acessing subdirectories contains sources 
add_subdirectory(src) 

#linking src/<libraries> labeled
 target_link_libraries(${PROJECT_NAME} accounter) 

#targe preprocessor
target_compile_definitions("${PROJECT_NAME}" PUBLIC BANK_VERSION=4)
