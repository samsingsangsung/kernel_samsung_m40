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

static void defex_get_features_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, defex_get_features()); */
}


static int defex_get_mode_test_init(struct test *test)
{
	/*
	 * test->priv = a_struct_pointer;
	 * if (!test->priv)
	 *    return -ENOMEM;
	 */

	return 0;
}

static void defex_get_mode_test_exit(struct test *test)
{
}

static struct test_case defex_get_mode_test_cases[] = {
	/* TEST FUNC DEFINES */
	TEST_CASE(defex_get_features_test),
	{},
};

static struct test_module defex_get_mode_test_module = {
	.name = "defex_get_mode_test",
	.init = defex_get_mode_test_init,
	.exit = defex_get_mode_test_exit,
	.test_cases = defex_get_mode_test_cases,
};
module_test(defex_get_mode_test_module);

