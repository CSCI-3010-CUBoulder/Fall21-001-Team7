#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE( "Split has been done", "[split]" ) {
    std::vector<std::string> case1{"Hello","There","Hi"};
    std::vector<std::string> case2{"Wh","is","th","pl","eau"};
    std::vector<std::string> case3{"Wow","that","is","a","cool","town"};
    std::vector<std::string> case4;
    REQUIRE( Split("Hello,There,Hi",",") == case1);
    REQUIRE( Split("Whatisatthatplateau","at") == case2);
    REQUIRE( Split("Wow that is a cool town"," ") == case3);
    REQUIRE( Split("","") == case4);
}