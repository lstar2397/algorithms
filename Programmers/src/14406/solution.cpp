using namespace std;

long long solution(int N) {
	bool *arr = new bool[N + 1];

	for (int i = 2; i <= N; i++)
		arr[i] = true;

	for (int i = 2; i * i <= N; i++) {
		if (!arr[i]) continue;
		for (int j = i * 2; j <= N; j += i)
			arr[j] = false;
	}

	long long answer = 0;
	for (int i = 2; i <= N; i++)
		if (arr[i])
			answer += i;

	delete[] arr;
	return answer;
}