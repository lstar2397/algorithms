#include <stdio.h>
double Test(int N, int L, int K[]);

int main()
{
	// C - 테스트 케이스
	// N - 공연장을 대여할 수 있는 날들의 수 (1 <= N <= 1000)
	// L - 이미 섭외한 공연 팀의 수 (1 <= L <= 1000, L <= N)
	// K - N개의 숫자로 날짜별 공연장 대여 비용(1 <= K <= 100)
	// R - 테스트 케이스에 대한 결과
	int C, N, L, K[1000];
	double R[100];

	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		scanf("%d %d", &N, &L);
		for (int j = 0; j < N; j++)
			scanf("%d", &K[j]);
		R[i] = Test(N, L, K);
	}

	// 테스트 케이스에 대한 결과 출력
	for (int i = 0; i < C; i++)
		printf("%.11lf\n", R[i]);

	return 0;
}

double Test(int N, int L, int K[])
{
	double result = 0;

	// 최악의 경우
	for (int i = 0; i < N; i++)
		result += K[i];
	result /= N;

	for (int i = L; i < N; i++)
	{
		for (int j = 0; j <= N - i; j++)
		{
			double tempResult = 0;
			for (int k = j; k < j + i; k++)
				tempResult += K[k];
			tempResult /= i;
			if (tempResult < result)
				result = tempResult;
		}
	}
	return result;
}