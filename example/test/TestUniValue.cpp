#include <string.h>
#include <stdio.h>

#include "univalue.h"


int main(int argc, char** argv)
{
    UniValue uval;

    if(uval.isNull()) {
        printf("default is null!\n");
    }

    return 0;
}

