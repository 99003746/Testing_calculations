#include "unity.h"
#include"fact_log.h"

//#include<dim.h>
//#include<trignometic.h>


/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
//void trig_choose();
void test1();



//void test_add_testcase2(void);
//void test_subtract(void);
//void test_multiply(void);
///void test_divide(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  //RUN_TEST(trig_choose);
  RUN_TEST(test1);
 

  
  /*RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
*/
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
//void trig_choose(void) {
  //TEST_ASSERT_EQUAL(0.5, sine(30));
//}
void test1(void)
{

  TEST_ASSERT_EQUAL(120, factorial(5));
  
 
}




