#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "answer.h"

TEST_CASE("is the answer correct") {
    CHECK(answer() == 42);
}