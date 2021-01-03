#include "../src/sources/number.h"
#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch/catch.hpp"

TEST_CASE("Game win (true)")
{
	int userNum = 1234;
	int hiddenNum = 1234;
	bool expected = true;
    REQUIRE(compareNumbers(hiddenNum, userNum) == expected);
}

TEST_CASE("Game win (false)")
{
	int userNum = 4321;
	int hiddenNum = 1234;
	bool expected = false;
    REQUIRE(compareNumbers(hiddenNum, userNum) == expected);
}

TEST_CASE("Get symbols vector (true)")
{
	vector<int> expected = {1, 2, 3, 4};
	vector<int> turned = getNumSymbols(1234);
    REQUIRE(turned == expected);
}

TEST_CASE("Get symbols vector (false)")
{
	vector<int> expected = {1, 2, 3, 4};
	vector<int> turned = getNumSymbols(4321);
    REQUIRE(turned != expected);
}

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