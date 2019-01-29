#include <stdio.h>
int foo(int n)
{
    int f[3] = { 1, 2, };
    for (int i = 2; i < n; i++)
    {
        f[2] = (f[0] + f[1]) % 1000000007;
        for (int j = 0; j < 2; j++)
            f[j] = f[j + 1];
    }
    return f[1];
}

int main()
{
    int c, n, r[50];
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &n);
        r[i] = (n < 3) ? n : foo(n);
    }
    for (int i = 0; i < c; i++)
        printf("%d\n", r[i]);
    return 0;
}