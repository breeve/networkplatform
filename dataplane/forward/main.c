#include <stdio.h>
#include <stdlib.h>

#include "rte_eal.h"

int main(int argc, char **argv) {
    int i = 0;
    for (; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    rte_eal_init(argc, argv);
    return 0;
}