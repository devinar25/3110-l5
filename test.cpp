#define CATCH_CONFIG_MAIN // tells main to include a main function for compile purposes
#include "functions_to_implement.cpp"
#include "catch.hpp"


TEST_CASE( "Check EvenMask", "[EvenMask]" ) {
    std::vector<int> test1{1,2,3,4,5};
    std::vector<int> test2{10,20,30,40,50};
    std::vector<int> test3{1,3,5,7,11};
    std::vector<bool> res1{0,1,0,1,0};
    std::vector<bool> res2{1,1,1,1,1};
    std::vector<bool> res3{0,0,0,0,0};
    
    REQUIRE( EvenMask(test1) == res1 );
    REQUIRE( EvenMask(test2) == res2 );
    REQUIRE( EvenMask(test3) == res3 );
}