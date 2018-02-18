/*
Minunit testing framework homework by Lucy Wilcox
Tests Allen Downey's util file in trout
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "util.h"
#include "minunit.h"

int tests_run = 0;

static char *test1(){
    char* res = icmpcode_v4(4);
    printf("%s\n", res);
    char* message = "test1 failed: icmpcode_v4(4) should return \"fragmentation required but DF bit set\"";
    mu_assert(message, 0 == strcmp(res, "fragmentation required but DF bit set"));
    return NULL;
}

static char *test2(){
    char* res = icmpcode_v4(23);
    char* message = "test2 failed: icmpcode_v4(23) should return \"[unknown code]\"";
    mu_assert(message, 0 == strcmp(res, "[unknown code]"));
    return NULL;
}

static char *test3(){
    char* res = icmpcode_v4("ththe");
    char* message = "test2 failed: icmpcode_v4(23) should return \"[unknown code]\"";
    mu_assert(message, 0 == strcmp(res, "[unknown code]"));
    return NULL;
}

static char * all_tests() {
    mu_run_test(test1);
    mu_run_test(test2);
    mu_run_test(test2);
    return NULL;
}

int main(int argc, char **argv) {
    char *result = all_tests();
    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}