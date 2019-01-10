#include <vector>
using namespace std;

vector<int> solution(vector<int> arr)
{
	int prevElement = -1;
	vector<int> answer;
	for (size_t i = 0; i < arr.size(); i++)
	{
		int curElement = arr.at(i);
		if (prevElement != curElement)
		{
			answer.push_back(arr.at(i));
			prevElement = curElement;
		}
	}
	return answer;
}