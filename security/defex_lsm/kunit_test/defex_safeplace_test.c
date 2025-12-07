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

static void task_defex_safeplace_release_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_safeplace_release()); */
}


static void task_defex_safeplace_attr_store_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_safeplace_attr_store()); */
}


static void task_defex_safeplace_attr_show_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_safeplace_attr_show()); */
}


static void task_defex_destroy_safeplace_obj_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_destroy_safeplace_obj()); */
}


static void task_defex_create_safeplace_obj_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_create_safeplace_obj()); */
}


static void safeplace_status_store_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, safeplace_status_store()); */
}


static void safeplace_status_show_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, safeplace_status_show()); */
}


static int defex_safeplace_test_init(struct test *test)
{
	/*
	 * test->priv = a_struct_pointer;
	 * if (!test->priv)
	 *    return -ENOMEM;
	 */

	return 0;
}

static void defex_safeplace_test_exit(struct test *test)
{
}

static struct test_case defex_safeplace_test_cases[] = {
	/* TEST FUNC DEFINES */
	TEST_CASE(task_defex_safeplace_release_test),
	TEST_CASE(task_defex_safeplace_attr_store_test),
	TEST_CASE(task_defex_safeplace_attr_show_test),
	TEST_CASE(task_defex_destroy_safeplace_obj_test),
	TEST_CASE(task_defex_create_safeplace_obj_test),
	TEST_CASE(safeplace_status_store_test),
	TEST_CASE(safeplace_status_show_test),
	{},
};

static struct test_module defex_safeplace_test_module = {
	.name = "defex_safeplace_test",
	.init = defex_safeplace_test_init,
	.exit = defex_safeplace_test_exit,
	.test_cases = defex_safeplace_test_cases,
};
module_test(defex_safeplace_test_module);

