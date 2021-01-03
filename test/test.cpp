#include "../src/sources/number.h"
#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch/catch.hpp"

TEST_CASE("Get random number (more)")
{
	int min = 1000;
	int max = 9999;
    REQUIRE(getRandNum(min, max) <= max);
    REQUIRE(getRandNum(min, max) <= max);
    REQUIRE(getRandNum(min, max) <= max);
    REQUIRE(getRandNum(min, max) <= max);
    REQUIRE(getRandNum(min, max) <= max);
}

TEST_CASE("Get random number (less)")
{
	int min = 1000;
	int max = 9999;
    REQUIRE(getRandNum(min, max) >= min);
    REQUIRE(getRandNum(min, max) >= min);
    REQUIRE(getRandNum(min, max) >= min);
    REQUIRE(getRandNum(min, max) >= min);
    REQUIRE(getRandNum(min, max) >= min);
}