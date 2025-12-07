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

static void verifiedboot_state_setup_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, verifiedboot_state_setup()); */
}


static void task_defex_zero_creds_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_zero_creds()); */
}


static void task_defex_user_exec_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_user_exec()); */
}


static void task_defex_src_exception_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_src_exception()); */
}


static void task_defex_safeplace_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_safeplace()); */
}


static void task_defex_is_secured_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_is_secured()); */
}


static void task_defex_immutable_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_immutable()); */
}


static void task_defex_enforce_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_enforce()); */
}


static void task_defex_check_creds_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, task_defex_check_creds()); */
}


static void lower_adb_permission_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, lower_adb_permission()); */
}


static void kill_process_group_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, kill_process_group()); */
}


static void kill_process_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, kill_process()); */
}


static void get_warranty_bit_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_warranty_bit()); */
}


static void get_parent_task_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_parent_task()); */
}


static void defex_report_violation_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, defex_report_violation()); */
}


static void at_same_group_gid_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, at_same_group_gid()); */
}


static void at_same_group_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, at_same_group()); */
}


static int defex_main_test_init(struct test *test)
{
	/*
	 * test->priv = a_struct_pointer;
	 * if (!test->priv)
	 *    return -ENOMEM;
	 */

	return 0;
}

static void defex_main_test_exit(struct test *test)
{
}

static struct test_case defex_main_test_cases[] = {
	/* TEST FUNC DEFINES */
	TEST_CASE(verifiedboot_state_setup_test),
	TEST_CASE(task_defex_zero_creds_test),
	TEST_CASE(task_defex_user_exec_test),
	TEST_CASE(task_defex_src_exception_test),
	TEST_CASE(task_defex_safeplace_test),
	TEST_CASE(task_defex_is_secured_test),
	TEST_CASE(task_defex_immutable_test),
	TEST_CASE(task_defex_enforce_test),
	TEST_CASE(task_defex_check_creds_test),
	TEST_CASE(lower_adb_permission_test),
	TEST_CASE(kill_process_group_test),
	TEST_CASE(kill_process_test),
	TEST_CASE(get_warranty_bit_test),
	TEST_CASE(get_parent_task_test),
	TEST_CASE(defex_report_violation_test),
	TEST_CASE(at_same_group_gid_test),
	TEST_CASE(at_same_group_test),
	{},
};

static struct test_module defex_main_test_module = {
	.name = "defex_main_test",
	.init = defex_main_test_init,
	.exit = defex_main_test_exit,
	.test_cases = defex_main_test_cases,
};
module_test(defex_main_test_module);

