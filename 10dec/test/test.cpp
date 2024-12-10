#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "calc.h"
TEST_SUITE("math"){
    TEST_CASE("Testing addition") {
        CHECK(add(1, 1)==2);
        CHECK(add(-1, 1)==0);
        CHECK(add(-1, -1)==-2);
        //CHECK_THROWS(add("abc"));
        //CHECK_THROWS_AS(add(a), std::exception);
        //CHECK_THROWS_WITH(add(a), "wrong argument"); doctest::Contains("wrong")
        //CHECK_THROWS_WITH_AS(add(a), "wrong argument", std::exception);
        //REQUIRE(22.0/7==doctest::Approx(3.141).epsilon(0.01));
        //CHECK_NOTHROW(add(a));

    }
    TEST_CASE("Testing subtraction") {
        CHECK(sub(2, 1)==1);
        CHECK(sub(2, 2)==0);
        WARN(sub(2, 2)==15);
        CHECK(sub(2, 3)==-1);
    }
    TEST_CASE("Testing division") {
        CHECK(dif(5, 2)==2.5);
        WARN(dif(22, 7) == doctest::Approx(3.2).epsilon(0.01));
    }
}