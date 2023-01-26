#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("returns a vector with true for even numbers and false for odd numbers") {
    REQUIRE(EvenMask({1,2,3}) == {false,true,false});
    REQUIRE(EvenMask({1,2,3}) == {false,true,false});
    REQUIRE(EvenMask({1,2,3}) == {false,true,false});
}


TEST_CASE ("Takes the factorial of the input") {
    REQUIRE(Factorial(4) == {24});
    REQUIRE(Factorial(3) == {6});
    REQUIRE(Factorial(2) == {2});
}
RemoveTwos
TEST_CASE ("Divides the input by two until less than 2") {
    REQUIRE(Removetwos(6) == {24});
    REQUIRE(Removetwos(8) == {6});
    REQUIRE(Removetwos(10) == {2});
}

