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

static void set_task_creds_tcnt_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, set_task_creds_tcnt()); */
}


static void set_task_creds_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, set_task_creds()); */
}


static void set_cred_data_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, set_cred_data()); */
}


static void mem_cache_reclaim_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, mem_cache_reclaim()); */
}


static void mem_cache_get_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, mem_cache_get()); */
}


static void mem_cache_alloc_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, mem_cache_alloc()); */
}


static void is_task_creds_ready_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, is_task_creds_ready()); */
}


static void get_task_creds_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_task_creds()); */
}


static void get_cred_ptr_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_cred_ptr()); */
}


static void get_cred_data_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_cred_data()); */
}


static void creds_fast_hash_init_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, creds_fast_hash_init()); */
}


static int defex_ht_test_init(struct test *test)
{
	/*
	 * test->priv = a_struct_pointer;
	 * if (!test->priv)
	 *    return -ENOMEM;
	 */

	return 0;
}

static void defex_ht_test_exit(struct test *test)
{
}

static struct test_case defex_ht_test_cases[] = {
	/* TEST FUNC DEFINES */
	TEST_CASE(set_task_creds_tcnt_test),
	TEST_CASE(set_task_creds_test),
	TEST_CASE(set_cred_data_test),
	TEST_CASE(mem_cache_reclaim_test),
	TEST_CASE(mem_cache_get_test),
	TEST_CASE(mem_cache_alloc_test),
	TEST_CASE(is_task_creds_ready_test),
	TEST_CASE(get_task_creds_test),
	TEST_CASE(get_cred_ptr_test),
	TEST_CASE(get_cred_data_test),
	TEST_CASE(creds_fast_hash_init_test),
	{},
};

static struct test_module defex_ht_test_module = {
	.name = "defex_ht_test",
	.init = defex_ht_test_init,
	.exit = defex_ht_test_exit,
	.test_cases = defex_ht_test_cases,
};
module_test(defex_ht_test_module);

