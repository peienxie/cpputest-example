#include "CppUTest/TestHarness.h"
extern "C"
{
#include "module_a.h"
}
TEST_GROUP(AwesomeExamples){};

TEST(AwesomeExamples, FirstExample)
{
    int x = test_func();
    CHECK_EQUAL(1, x);
}

TEST(AwesomeExamples, justFail)
{
    CHECK_EQUAL(1, 0);
}
