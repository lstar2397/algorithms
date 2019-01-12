#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int index;
int compare(const string a, const string b) {
	if (a.at(index) != b.at(index))
		return a.at(index) < b.at(index);
	for (int i = 0; i < a.length(); i++)
		if (a.at(i) != b.at(i))
			return a.at(i) < b.at(i);
	return 0;
}

vector<string> solution(vector<string> strings, int n) {
	index = n;
	sort(strings.begin(), strings.end(), compare);
	return strings;
}