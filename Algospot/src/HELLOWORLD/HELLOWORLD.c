#include <stdio.h>
int main()
{
    int c;
    char name[50][51];
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
        scanf("%s", &name[i]);
    for (int i = 0; i < c; i++)
        printf("Hello, %s!\n", name[i]);
    return 0;
}