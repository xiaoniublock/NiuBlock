#include <string.h>
#include <stdio.h>

#include "univalue.h"


int main(int argc, char** argv)
{
    UniValue uval;

    if(uval.isNull()) {
        printf("default is null!\n");
    }

    if(uval.setBool(true)) {
        printf("set bool success!\n");
    } else {
        printf("set bool fail!\n");
    }

    printf("get bool %s\n", uval.getBool() ? "true":"false");

    return 0;
}

