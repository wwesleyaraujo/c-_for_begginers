cmake_minimum_required(VERSION 3.16.3)

#set the project name 
project(main)


#add executable
add_executable("${PROJECT_NAME}" main.cpp)

#acessing subdirectories contains sources 
add_subdirectory(src) 

#linking src/<libraries> labeled
target_link_libraries(${PROJECT_NAME} accounter ) 
target_link_libraries(${PROJECT_NAME} derived_baser)
target_link_libraries(${PROJECT_NAME} checker)
target_link_libraries(${PROJECT_NAME} truster)
 

#targe preprocessor
target_compile_definitions("${PROJECT_NAME}" PUBLIC BANK_VERSION=4 )

#add compiliation flags for debuging

set (CMAKE_CXX_FLAGS "-g ")
