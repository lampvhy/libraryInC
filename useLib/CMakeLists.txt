cmake_minimum_required(VERSION 2.8.9)
project(useLib)

#khai bao thu vien
set (PROJECT_LINK_LIBS libtestLib.a)
link_directories(lib)

#khai bao cac file header
include_directories(include)


add_executable(useLib main.c)
target_link_libraries(useLib ${PROJECT_LINK_LIBS} )
