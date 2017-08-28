#include <string.h>
#include <stdio.h>
#include <bitcoin/bitcoin/version.hpp>



int main(int argc, char** argv)
{
    printf("(%s) (%d.%d.%d)\n", LIBBITCOIN_VERSION, LIBBITCOIN_MAJOR_VERSION, \
            LIBBITCOIN_MINOR_VERSION, LIBBITCOIN_PATCH_VERSION);

    return 0;
}
