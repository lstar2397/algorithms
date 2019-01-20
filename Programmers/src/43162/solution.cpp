#include <vector>
using namespace std;

void dfs(int v, vector<vector<int>> computers, bool visited[])
{
	visited[v] = true;
	for (size_t i = 0; i < computers[v].size(); i++)
		if (computers[v][i] && !visited[i])
			dfs(i, computers, visited);
}

int solution(int n, vector<vector<int>> computers) {
	int answer = 0;
	bool visited[200] = { false, };
	for (size_t i = 0; i < n; i++)
	{
		if (!visited[i])
		{
			dfs(i, computers, visited);
			answer++;
		}
	}
	return answer;
}