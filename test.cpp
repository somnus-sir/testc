#include "cpptest.h"

class MyTest:public Test::Suite{
public:
      MyTest(){
            TEST_ADD(MyTest::test_case1);
            TEST_ADD(MyTest::test_case2);
      }
private:
      void test_case1(){
            TEST_FAIL ("This always fails!\n");
      }
      void test_case2(){
            TEST_FAIL ("This always fails!\n");
      }
};
int main ( ) {
  MyTest test;  
  Test::HtmlOutput output;
  test.run(output,true);
  output.generate(std::cout, true, "MyTest");
  return 0;
}