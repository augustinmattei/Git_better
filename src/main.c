#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "bin.h"

int main(int ac, char *argv[])
{
    if (ac > 1 && argv[0] != NULL) {
        printf(" No Arguments asked\n");
        return 84;
    }
    return 0;
}
