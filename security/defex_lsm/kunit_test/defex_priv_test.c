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

static void task_defex_privesc_store_status_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_privesc_store_status()); */
}


static void task_defex_privesc_show_status_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_privesc_show_status()); */
}


static void task_defex_privesc_release_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_privesc_release()); */
}


static void task_defex_privesc_attr_store_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_privesc_attr_store()); */
}


static void task_defex_privesc_attr_show_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_privesc_attr_show()); */
}


static void task_defex_destroy_privesc_obj_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_destroy_privesc_obj()); */
}


static void task_defex_create_privesc_obj_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_create_privesc_obj()); */
}


static int defex_priv_test_init(struct test *test)
{
	/*
	 * test->priv = a_struct_pointer;
	 * if (!test->priv)
	 *    return -ENOMEM;
	 */

	return 0;
}

static void defex_priv_test_exit(struct test *test)
{
}

static struct test_case defex_priv_test_cases[] = {
	/* TEST FUNC DEFINES */
	TEST_CASE(task_defex_privesc_store_status_test),
	TEST_CASE(task_defex_privesc_show_status_test),
	TEST_CASE(task_defex_privesc_release_test),
	TEST_CASE(task_defex_privesc_attr_store_test),
	TEST_CASE(task_defex_privesc_attr_show_test),
	TEST_CASE(task_defex_destroy_privesc_obj_test),
	TEST_CASE(task_defex_create_privesc_obj_test),
	{},
};

static struct test_module defex_priv_test_module = {
	.name = "defex_priv_test",
	.init = defex_priv_test_init,
	.exit = defex_priv_test_exit,
	.test_cases = defex_priv_test_cases,
};
module_test(defex_priv_test_module);

