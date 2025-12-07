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

static void release_defex_context_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, release_defex_context()); */
}


static void local_fread_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, local_fread()); */
}


static void local_fopen_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, local_fopen()); */
}


static void init_defex_context_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, init_defex_context()); */
}


static void get_dc_target_name_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_dc_target_name()); */
}


static void get_dc_target_dpath_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_dc_target_dpath()); */
}


static void get_dc_process_name_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_dc_process_name()); */
}


static void get_dc_process_file_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_dc_process_file()); */
}


static void get_dc_process_dpath_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, get_dc_process_dpath()); */
}


static void defex_resolve_filename_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, defex_resolve_filename()); */
}


static void defex_get_source_file_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, defex_get_source_file()); */
}


static void defex_get_filename_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, defex_get_filename()); */
}


static void defex_files_identical_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, defex_files_identical()); */
}


static void __vfs_read_test(struct test *test)
{
    /* EXPECT_EQ(test, 1, __vfs_read()); */
}


static int defex_common_test_init(struct test *test)
{
	/*
	 * test->priv = a_struct_pointer;
	 * if (!test->priv)
	 *    return -ENOMEM;
	 */

	return 0;
}

static void defex_common_test_exit(struct test *test)
{
}

static struct test_case defex_common_test_cases[] = {
	/* TEST FUNC DEFINES */
	TEST_CASE(release_defex_context_test),
	TEST_CASE(local_fread_test),
	TEST_CASE(local_fopen_test),
	TEST_CASE(init_defex_context_test),
	TEST_CASE(get_dc_target_name_test),
	TEST_CASE(get_dc_target_dpath_test),
	TEST_CASE(get_dc_process_name_test),
	TEST_CASE(get_dc_process_file_test),
	TEST_CASE(get_dc_process_dpath_test),
	TEST_CASE(defex_resolve_filename_test),
	TEST_CASE(defex_get_source_file_test),
	TEST_CASE(defex_get_filename_test),
	TEST_CASE(defex_files_identical_test),
	TEST_CASE(__vfs_read_test),
	{},
};

static struct test_module defex_common_test_module = {
	.name = "defex_common_test",
	.init = defex_common_test_init,
	.exit = defex_common_test_exit,
	.test_cases = defex_common_test_cases,
};
module_test(defex_common_test_module);

