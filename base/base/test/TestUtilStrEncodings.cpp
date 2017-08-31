#include <string.h>
#include <stdio.h>
#include <string>

#include "utilstrencodings.h"


int main(int argc, char** argv)
{
    std::string str = "test12#&/':";

    printf("%s\n", SanitizeString(str).c_str());

    return 0;
}