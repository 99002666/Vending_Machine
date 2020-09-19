#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <vending_machine.h>
#define PROJECT_NAME    "Vending_Machine"

#define INSUFFICIENT_CASH -1
#define SUFFICIENT_CASH 1
#define VALID_CARD 2
#define INVALID_PIN 3

/* Prototypes for all the test functions */
void test_SufficientCash(void);
void test_InufficientCash(void);
void test_ValidCard(void);
void test_InvalidPin(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "PayByCash", test_SufficientCash);
  CU_add_test(suite, "PayByCash", test_InufficientCash);
  CU_add_test(suite, "PayByCard", test_ValidCard);
  CU_add_test(suite, "PayByCard", test_InvalidPin);


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
void test_SufficientCash(void) {
  CU_ASSERT(SUFFICIENT_CASH ==  PayByCash(30, 20));
}

void test_InufficientCash(void) {
  CU_ASSERT(INSUFFICIENT_CASH  == PayByCash(20, 50));
}

void test_ValidCard(void) {
  CU_ASSERT(VALID_CARD  == PayByCard("1234"));
}

void test_InvalidPin(void) {
  CU_ASSERT(INVALID_PIN  == PayByCard("25461"));
}


