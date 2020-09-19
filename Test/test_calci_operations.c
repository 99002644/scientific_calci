#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"
#copied from https://github.com/stepin654321/MiniProject_Template and modified accordingly
/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_squareroot(void);
void test_sine(void);
void test_cosine(void);
void test_tangent(void);
void test_inverse(void);
void test_power(void);
void test_log(void);
void test_square(void);






/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "squareroot", test_squareroot);
  CU_add_test(suite, "sine", test_sine);
  CU_add_test(suite, "cosine", test_cosine);
  CU_add_test(suite, "tangent", test_tangent);
  CU_add_test(suite, "inverse", test_inverse);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "log", test_log);
 CU_add_test(suite, "square", test_square);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(20== add(10, 10));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == sub(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == sub(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == mul(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == mul(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == div(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == div(2, 2));
}
void test_squareroot(void) {
  CU_ASSERT(4 == squareroot(16));
  
  /* Dummy fail*/
  CU_ASSERT(5== squareroot(16));
}
void test_sine(void) {
  CU_ASSERT(1 == sine(90));
  
  /* Dummy fail*/
  CU_ASSERT(0== sine(90));
}
void test_cosine(void) {
  CU_ASSERT(1 == cosine((0));
  
  /* Dummy fail*/
  CU_ASSERT(0== cos(0));
}
void test_tangent(void) {
  CU_ASSERT(0 == tangent((0));
  
  /* Dummy fail*/
  CU_ASSERT(0!= tangent(0));
}
void test_inverse(void) {
  CU_ASSERT(0.2== inv((5));
  
  /* Dummy fail*/
  CU_ASSERT(0== inv(0));
}
void test_power(void) {
  CU_ASSERT(4 == power((2,2));
  
  /* Dummy fail*/
  CU_ASSERT(1== power(2,0));
}
void test_log(void) {
  CU_ASSERT(0 ==logarithm((1));
  
  /* Dummy fail*/
  CU_ASSERT(2==logaritmh(100));
}
void test_square(void) {
  CU_ASSERT(16== square((4));
  
  /* Dummy fail*/
  CU_ASSERT(0== square(0));
}
