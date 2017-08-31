#include <string.h>
#include <stdio.h>

#include "utiltime.h"


int main(int argc, char** argv)
{
    printf("GetTime: %ld\n", GetTime());
    printf("GetTimeMillis: %ld\n", GetTimeMillis());
    printf("GetTimeMicros: %ld\n", GetTimeMicros());
    printf("GetSystemTimeInSeconds: %ld\n", GetSystemTimeInSeconds()); // Like GetTime(), but not mockable
    // void SetMockTime(int64_t nMockTimeIn);
    printf("GetMockTime: %ld\n", GetMockTime());
    // void MilliSleep(int64_t n);
    
    // std::string DateTimeStrFormat(const char* pszFormat, int64_t nTime);

    return 0;
}