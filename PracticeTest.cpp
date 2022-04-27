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

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

// int* Practice::allnighter(int sleep[7])
TEST(PracticeTest, allnighter_zero)
{
	Practice TestObject;
	int sleep[7] = {0, 0, 0, 0, 0, 0, 0};
	ASSERT_EQ(TestObject.allnighter(sleep), &sleep[0]);
}
TEST(PracticeTest, allnighter_zeronone)
{
	Practice TestObject;
	int sleep[7] = {8, 8, 8, 8, 8, 8, 8};
	ASSERT_EQ(TestObject.allnighter(sleep), nullptr);
}


TEST(PracticeTest, sort_test)
{
	Practice TestObject;
	int a = 10;
	int b = 22;
	int c = 90;
	TestObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 90);
	ASSERT_EQ(b, 22);
	ASSERT_EQ(c, 10);
}
TEST(PracticeTest, sort_test_zero)
{
	Practice TestObject;
	int a = 0;
	int b = 0;
	int c = 0;
	TestObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 0);
	ASSERT_EQ(c, 0);
	ASSERT_EQ(b, 0);
}
TEST(PracticeTest, sort_test_two)
{
	Practice TestObject;
	int a = 0;
	int b = 2;
	int c = 0;
	TestObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 0);
	ASSERT_EQ(c, 0);
	ASSERT_EQ(b, 0);
}
TEST(PracticeTest, countrepeats_test)
{
	Practice TestObject;
	string word = "";
	ASSERT_EQ(TestObject.count_starting_repeats(word), 0);
}

TEST(PracticeTest, countrepeats_test3)
{
	Practice TestObject;
	string word = "tttt";
	ASSERT_EQ(TestObject.count_starting_repeats(word), 3);
}

TEST(PracticeTest, pal_test)
{
	Practice TestObject;
	string test = "tacocat";
	ASSERT_EQ(TestObject.isPalindrome(test), true);
}

TEST(PracticeTest, pal_fail)
{
	Practice TestObject;
	string test = "nottrue";
	ASSERT_EQ(TestObject.isPalindrome(test), false);
}

