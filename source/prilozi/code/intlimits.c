#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    printf("         Tip        | B |                 Opseg\n");
    printf(" -------------------+---+------------------------------------------\n");
    printf(" short              | %llu | %hd..%hd\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf(" unsigned short     | %llu | 0..%hu\n", sizeof(unsigned short), USHRT_MAX);
    printf(" int                | %llu | %d..%d\n", sizeof(int), INT_MIN, INT_MAX);
    printf(" unsigned int       | %llu | 0..%u\n", sizeof(unsigned int), UINT_MAX);
    printf(" long               | %llu | %ld..%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf(" unsigned long      | %llu | 0..%lu\n", sizeof(unsigned long), ULONG_MAX);
    printf(" long long          | %llu | %lld..%lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf(" unsigned long long | %llu | 0..%llu\n", sizeof(unsigned long long), ULLONG_MAX);
    return 0;
}