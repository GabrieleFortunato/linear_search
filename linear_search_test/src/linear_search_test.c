/*
 ============================================================================
 Name        : linear_search_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <CUnit/basic.h>
#include "linear_search.h"

int init_suite_default(){
	return ZERO;
}

int clear_suite_default(){
	return ZERO;
}

void test_length(){
}

void test_linear_search(){
}

int main(void) {
	CU_initialize_registry();
	CU_pSuite pSuite_A = CU_add_suite("SUITE LENGTH",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_A,"test of get_length()",test_length);
	CU_pSuite pSuite_B = CU_add_suite("SUITE BUBBLE_SORT",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_B,"test of linear_search()",test_linear_search);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
