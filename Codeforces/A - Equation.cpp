#include<stdio.h>

int main()
{
    long long n;

    scanf("%lld",&n);

    if(n == 1)  printf("15 14\n");
    else    printf("%lld %lld\n", 3*n, 2*n);

    return 0;
}


