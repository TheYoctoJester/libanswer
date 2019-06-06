cmake_minimum_required(VERSION 2.6)
project(libanswer)

add_library(answer SHARED answer.c)

add_executable(ask ask.cpp)
target_link_libraries(ask answer)

install(TARGETS ask DESTINATION bin)

install(TARGETS answer DESTINATION lib)
install(FILES answer.h DESTINATION include)

