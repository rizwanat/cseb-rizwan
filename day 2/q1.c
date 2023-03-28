#include <stdio.h>
#include <stdlib.h>

int sample(int n)
{
    int r, p, i = 0, s = 0;
    while (n > 0)
    {
        r = n % 10;
        p = 8 ^ i;
        s = s + p * r;
        i = i + 1;
        n = n / 10;
    }
    return s;
}

void main()
{
    int res;
    res = sample(5);
    printf("%d", res);
    //printf("%c",printf("Rinu Jauhar\n"));
    // return 0;
}
