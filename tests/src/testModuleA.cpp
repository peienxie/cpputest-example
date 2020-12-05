#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
extern "C"
{
#include <math.h>
#include "module_a.h"
}

TEST_GROUP(AwesomeExamples)
{
    void setup()
    {
        mock().strictOrder();
    };
    void teardown()
    {
        mock().checkExpectations();
        mock().clear();
    };
};

TEST(AwesomeExamples, FirstExample)
{
    int x = test_func();
    CHECK_EQUAL(1, x);
}

TEST(AwesomeExamples, testMockFunctions)
{
    const int LEN_NUMS = 2;
    int nums[LEN_NUMS] = {2, 3};
    mock()
        .expectOneCall("my_pow")
        .withParameter("base", nums[0])
        .withParameter("exp", 2)
        .andReturnValue(nums[0] * nums[0]);
    mock()
        .expectOneCall("my_pow")
        .withParameter("base", nums[1])
        .withParameter("exp", 2)
        .andReturnValue(nums[1] * nums[1]);
    double t = 0;
    for (int i = 0; i < LEN_NUMS; ++i)
        t += nums[i] * nums[i];
    t /= LEN_NUMS;
    mock()
        .expectOneCall("my_sqrt")
        .withDoubleParameter("number", t)
        .andReturnValue(sqrt(t));
    double ret = root_mean_square(nums, LEN_NUMS);
    CHECK_EQUAL(ret, sqrt(t));
}