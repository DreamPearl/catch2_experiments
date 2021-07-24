#define CATCH_CONFIG_MAIN
#include "../includes/calc.hpp"
#include <catch2/catch_all.hpp>

TEST_CASE("Calc test", "[calculator]") {
    REQUIRE(calc(2, '+', 3) == 5);
    REQUIRE(calc(12, '-', 4) == 8);
    REQUIRE(calc(0, '+', 3) == 3);
    REQUIRE(calc(20, '*', 3) == 60);
    REQUIRE(calc(24, '/', 3) == 8);
}