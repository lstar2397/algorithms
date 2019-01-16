#include <queue>
#include <vector>
using namespace std;

int dfs(queue<int> numbers, int target, int sum)
{
	if (numbers.size() == 0)
		return (target == sum);

	int front = numbers.front();
	numbers.pop();

	return dfs(numbers, target, sum + front) + dfs(numbers, target, sum - front);
}

int solution(vector<int> numbers, int target) {
	queue<int> queue;
	for (size_t i = 0; i < numbers.size(); i++)
		queue.push(numbers.at(i));

	return dfs(queue, target, 0);
}