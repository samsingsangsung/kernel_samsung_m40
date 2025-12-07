/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 */

#include <kunit/test.h>
#include <kunit/mock.h>

/* General test functions created by Generate_KUnit.sh */

static void set_user_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, set_user()); */
}


static void set_cred_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, set_cred()); */
}


static void defex_create_debug_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, defex_create_debug()); */
}


static void debug_store_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, debug_store()); */
}


static void debug_show_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, debug_show()); */
}


static void debug_attribute_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, debug_attribute()); */
}


static int defex_debug_test_init(struct test *test)
{
	/*
	 * test->priv = a_struct_pointer;
	 * if (!test->priv)
	 *    return -ENOMEM;
	 */

	return 0;
}

static void defex_debug_test_exit(struct test *test)
{
}

static struct test_case defex_debug_test_cases[] = {
	/* TEST FUNC DEFINES */
	TEST_CASE(set_user_test),
	TEST_CASE(set_cred_test),
	TEST_CASE(defex_create_debug_test),
	TEST_CASE(debug_store_test),
	TEST_CASE(debug_show_test),
	TEST_CASE(debug_attribute_test),
	{},
};

static struct test_module defex_debug_test_module = {
	.name = "defex_debug_test",
	.init = defex_debug_test_init,
	.exit = defex_debug_test_exit,
	.test_cases = defex_debug_test_cases,
};
module_test(defex_debug_test_module);

