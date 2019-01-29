#include <stdio.h>
#include <stdlib.h>
int main()
{
    int T, N, D, *R;
    scanf("%d", &T);
    R = (int*)malloc(sizeof(int) * T);
    for(int i = 0; i < T; i++)
    {
        int cnt = 0;
        scanf("%d", &N);
        for(int i = 0; i < N; i++)
        {
            scanf("%d", &D);
            if(D == i + 1) cnt++;
        }
        R[i] = cnt;
    }
    for(int i = 0; i < T; i++)
        printf("%d\n", R[i]);
}