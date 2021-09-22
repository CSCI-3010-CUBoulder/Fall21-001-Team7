#define CATCH_CONFIG_MAIN
#include <vector>

#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("RemoveTwos are computed", "[RemoveTwos]") {
    REQUIRE(RemoveTwos(0) == 0);
    REQUIRE(RemoveTwos(2) == 1);
    REQUIRE(RemoveTwos(9) == 9);
    REQUIRE(RemoveTwos(54) == 27);
}