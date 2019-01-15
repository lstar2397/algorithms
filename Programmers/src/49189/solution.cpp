#include <vector>
#include <queue>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
	vector<int> graph[20001];
	bool visited[20001] = { false, };

	for (size_t i = 0; i < edge.size(); i++) {
		int v = edge[i][0], e = edge[i][1];
		graph[v].push_back(e);
		graph[e].push_back(v);
	}

	int count;
	size_t answer;
	queue<int> queue;
	queue.push(1);

	count = 0;
	visited[1] = true;
	while (!queue.empty()) {
		int front = queue.front();
		queue.pop();

		for (size_t i = 0; i < graph[front].size(); i++) {
			int next = graph[front][i];
			if (!visited[next]) {
				queue.push(next);
				visited[next] = true;
			}
		}

		if (!queue.empty()) {
			if (count-- == 0) {
				answer = queue.size();
				count = answer - 1;
			}
		}
	}

	return answer;
}