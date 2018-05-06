#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool lessLength(const string& s1, const string& s2)
{
	return s1.length() < s2.length();
}

int main()
{
	vector<string> svec;
	vector<string> svec2;

	svec.push_back("1xxx");
	svec.push_back("2x");
	svec.push_back("3x");
	svec.push_back("4x");
	svec.push_back("5xx");
	svec.push_back("6xxxx");
	svec.push_back("7xx");
	svec.push_back("8xxx");
	svec.push_back("9xx");
	svec.push_back("10xxx");
	svec.push_back("11");
	svec.push_back("17");
	svec.push_back("12");
	svec.push_back("13");
	svec.push_back("14xx");
	svec.push_back("15");
	svec.push_back("16");
	

	svec2 = svec;

	for(vector<string>::iterator iter = svec.begin();
		iter != svec.end();++iter)
		cout << *iter << ' ';
	cout << endl;

	sort(svec.begin(),svec.end(),lessLength);
	for(vector<string>::iterator iter = svec.begin();
		iter != svec.end();++iter)
		cout << *iter << ' ';
	cout << endl;

	stable_sort(svec2.begin(), svec2.end(),lessLength);

	for(vector<string>::iterator iter = svec2.begin();
		iter != svec2.end();++iter)
		cout << *iter << ' ';
	cout << endl;		

	return 0;
}