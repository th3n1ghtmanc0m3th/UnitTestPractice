/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_first_smallest)
{
    Practice obj;
    int first = 5;
    int second = 7;
    int third = 2;
    int* firstvalue = &first;
    int* secondvalue = &second;
    int* thirdvalue = &third;
    //*first = &firstvalue;
    //*second = &secondvalue; 
    //*third = &thirdvalue;
    obj.sortDescending(*firstvalue, *secondvalue, *thirdvalue);
    ASSERT_EQ(first, 7);
    ASSERT_EQ(second, 5);
    ASSERT_EQ(third, 2);
}
