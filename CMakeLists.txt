cmake_minimum_required(VERSION 3.0)
project(libanswer)

option(WITH_VERBOSE "with verbose output" OFF)

if (WITH_VERBOSE)
add_compile_definitions(VERBOSEOUTPUT)
endif()

add_library(answer SHARED answer.cpp)
set_target_properties(answer PROPERTIES VERSION 0.0.1 SOVERSION 0.0.1)

add_executable(ask ask.cpp)
target_link_libraries(ask answer)

install(TARGETS ask DESTINATION bin)

install(TARGETS answer DESTINATION lib)
install(FILES answer.h DESTINATION include)

enable_testing()
add_subdirectory(test)