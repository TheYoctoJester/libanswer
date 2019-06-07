cmake_minimum_required(VERSION 2.6)
project(libanswer)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
add_library(answer SHARED answer.cpp)
set_target_properties(answer PROPERTIES VERSION 0.0.1 SOVERSION 0.0.1)

add_executable(ask ask.cpp)
target_link_libraries(ask answer)

install(TARGETS ask DESTINATION bin)

install(TARGETS answer DESTINATION lib)
install(FILES answer.h DESTINATION include)

