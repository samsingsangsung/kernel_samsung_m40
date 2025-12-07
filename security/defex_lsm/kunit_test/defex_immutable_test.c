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

static void task_defex_immutable_release_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_immutable_release()); */
}


static void task_defex_immutable_attr_store_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_immutable_attr_store()); */
}


static void task_defex_immutable_attr_show_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_immutable_attr_show()); */
}


static void task_defex_destroy_immutable_obj_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_destroy_immutable_obj()); */
}


static void task_defex_create_immutable_obj_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_create_immutable_obj()); */
}


static void immutable_status_store_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, immutable_status_store()); */
}


static void immutable_status_show_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, immutable_status_show()); */
}


static int defex_immutable_test_init(struct test *test)
{
	/*
	 * test->priv = a_struct_pointer;
	 * if (!test->priv)
	 *    return -ENOMEM;
	 */

	return 0;
}

static void defex_immutable_test_exit(struct test *test)
{
}

static struct test_case defex_immutable_test_cases[] = {
	/* TEST FUNC DEFINES */
	TEST_CASE(task_defex_immutable_release_test),
	TEST_CASE(task_defex_immutable_attr_store_test),
	TEST_CASE(task_defex_immutable_attr_show_test),
	TEST_CASE(task_defex_destroy_immutable_obj_test),
	TEST_CASE(task_defex_create_immutable_obj_test),
	TEST_CASE(immutable_status_store_test),
	TEST_CASE(immutable_status_show_test),
	{},
};

static struct test_module defex_immutable_test_module = {
	.name = "defex_immutable_test",
	.init = defex_immutable_test_init,
	.exit = defex_immutable_test_exit,
	.test_cases = defex_immutable_test_cases,
};
module_test(defex_immutable_test_module);

