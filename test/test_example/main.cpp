#ifdef PIO_FRAMEWORK_MBED_RTOS_PRESENT
#include "mbed.h"
#include "../unittest_transport.h"
#else
#include "gtest/gtest.h"
#endif

#include "unity.h"

void test_function_calculator_addition(void) {
  TEST_ASSERT_EQUAL(32, 32);
}

void test_function_calculator_subtraction(void) {
  TEST_ASSERT_EQUAL(20, 20);
}

void test_function_calculator_multiplication(void) {
  TEST_ASSERT_EQUAL(50, 50);
}

void test_function_calculator_division(void) {
  TEST_ASSERT_EQUAL(32, 32);
}

int main(int argc, char **argv) {
  #ifdef PIO_FRAMEWORK_MBED_RTOS_PRESENT
  wait(5);     // for ARM mbed framework
  #endif
  UNITY_BEGIN();
  RUN_TEST(test_function_calculator_addition);
  RUN_TEST(test_function_calculator_subtraction);
  RUN_TEST(test_function_calculator_multiplication);
  RUN_TEST(test_function_calculator_division);
  UNITY_END();
}