#include <vector>
#include <algorithm>
using namespace std;

void dfs(vector<int> graph[], int v, int e, bool visited[], int arr[][101])
{
	visited[e] = true;
	if (v != e)
	{
		arr[v][e] = 1;
		arr[e][v] = 0;
	}
	for (size_t i = 0; i < graph[e].size(); i++)
	{
		int next = graph[e][i];
		if (!visited[next])
			dfs(graph, v, next, visited, arr);
	}
}

int solution(int n, vector<vector<int>> results) {
	int arr[101][101];
	vector<int> graph[101];

	fill(&arr[0][0], &arr[0][0] + (sizeof(arr) / sizeof(int)), -1);
	for (int i = 1; i <= n; i++)
		arr[i][i] = 0;

	for (size_t i = 0; i < results.size(); i++)
		graph[results[i][0]].push_back(results[i][1]);

	for (int i = 1; i <= n; i++)
	{
		bool visited[101] = { false, };
		dfs(graph, i, i, visited, arr);
	}

	int answer = n;
	for (int i = 1; i <= n; i++)
	{
		bool flag = false;
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == -1)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			answer--;
	}

	return answer;
}