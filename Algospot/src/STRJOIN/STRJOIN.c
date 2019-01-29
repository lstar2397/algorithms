#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int c, n, *r, *s;
    scanf("%d", &c);
    r = (int*)malloc(sizeof(int) * c);
    for(int i = 0; i < c; i++)
    {
        int cost = 0;
        scanf("%d", &n);
        s = (int*)malloc(sizeof(int) * n);
        for(int j = 0; j < n; j++)
            scanf("%d", &s[j]);
        for(int j = 0; j < n - 1; j++)
        {
            for(int k = 0; k < n - j - 1; k++)
                for(int l = j; l < n - k - 1; l++)
                    if(s[l] > s[l + 1]) swap(&s[l], &s[l + 1]);
            s[j + 1] = s[j] + s[j + 1];
            cost += s[j + 1];
        }
        r[i] = cost;
    }
    for(int i = 0; i < c; i++)
        printf("%d\n", r[i]);
    return 0;
}