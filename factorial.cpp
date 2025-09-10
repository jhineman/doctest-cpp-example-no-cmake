#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

// Function to compute factorial of a positive integer
int factorial(int n) {
    if (n < 0) throw std::invalid_argument("Negative input not allowed");
    int result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

// Doctest unit tests
TEST_CASE("Factorial function tests") {
    CHECK(factorial(0) == 0);
    CHECK(factorial(1) == 1);
    CHECK(factorial(5) == 120);
    CHECK(factorial(7) == 5040);
    CHECK_THROWS_AS(factorial(-3), std::invalid_argument);
}