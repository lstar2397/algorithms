#include <string>
#include <cctype>
using namespace std;

string solution(string s) {
	int curIndex = 1;
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) != ' ')
		{
			s.at(i) = (curIndex % 2) ? (toupper(s.at(i))) : (tolower(s.at(i)));
			curIndex++;
		}
		else
		{
			curIndex = 1;
		}
	}
	return s;
}