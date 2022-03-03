#include "cal.h"
#include "unity.h"

void setUp(){

}
void tearDown(){

}
void test_add(void)
{
    TEST_ASSERT_EQUAL_FLOAT(50.00,50.00);
}
int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_add);

    return UNITY_END();
}