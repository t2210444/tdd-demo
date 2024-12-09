#include "unity.h"
#include "example.h"

// テストのセットアップ
void setUp(void) {}
void tearDown(void) {}

// テストケース
void test_add_should_return_sum(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_EQUAL(0, add(0, 0));
    TEST_ASSERT_EQUAL(-1, add(-2, 1));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_should_return_sum);
    return UNITY_END();
}
