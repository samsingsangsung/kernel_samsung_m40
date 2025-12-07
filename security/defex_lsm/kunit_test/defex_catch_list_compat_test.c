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

static void get_local_syscall_compat_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_local_syscall_compat()); */
}


static int defex_catch_list_compat_test_init(struct test *test)
{
	/*
	 * test->priv = a_struct_pointer;
	 * if (!test->priv)
	 *    return -ENOMEM;
	 */

	return 0;
}

static void defex_catch_list_compat_test_exit(struct test *test)
{
}

static struct test_case defex_catch_list_compat_test_cases[] = {
	/* TEST FUNC DEFINES */
	TEST_CASE(get_local_syscall_compat_test),
	{},
};

static struct test_module defex_catch_list_compat_test_module = {
	.name = "defex_catch_list_compat_test",
	.init = defex_catch_list_compat_test_init,
	.exit = defex_catch_list_compat_test_exit,
	.test_cases = defex_catch_list_compat_test_cases,
};
module_test(defex_catch_list_compat_test_module);

