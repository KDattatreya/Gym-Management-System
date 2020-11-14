#include "unity.h"
	#include "gym.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_gym(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}
	void test_gym1(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_gym);
	  	RUN_TEST(test_gym1);

  		return UNITY_END();
	}
