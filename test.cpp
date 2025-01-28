#define CATCH_CONFIG_MAIN // tells main to include a main function for compile purposes
#include "functions_to_implement.cpp"
#include "catch.hpp"

std::vector<int> test1{1,2,3,4,5};
std::vector<int> test2{10,20,30,40,50};
std::vector<int> test3{1,3,5,7,11};

TEST_CASE( "Check EvenMask", "[EvenMask]" ) {
    std::vector<bool> res1{0,1,0,1,0};
    std::vector<bool> res2{1,1,1,1,1};
    std::vector<bool> res3{0,0,0,0,0};
    
    REQUIRE( EvenMask(test1) == res1 );
    REQUIRE( EvenMask(test2) == res2 );
    REQUIRE( EvenMask(test3) == res3 );
}
TEST_CASE( "Check Sum", "[Sum]" ) {
    REQUIRE( Sum(test1) == 15 );
    REQUIRE( Sum(test2) == 150 );
    REQUIRE( Sum(test3) == 27 );
}
TEST_CASE( "Check Product", "[Product]" ) {
    REQUIRE( Product(test1) == 120 );
    REQUIRE( Product(test2) == 12000000 );
    REQUIRE( Product(test3) == 1155 );
}