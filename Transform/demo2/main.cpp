#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec;
	list<int> ilist;

	for(int i=1; i<=9; ++i)
		ivec.push_back(i);

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	transform(ivec.begin(), ivec.end(),
		ivec.begin(),
		ivec.begin(),
		multiplies<int>());

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	transform(ivec.begin(), ivec.end(),
			  ivec.rbegin(),
			  back_inserter(ilist),
			  plus<int>());
	for(list<int>::iterator iter = ilist.begin();
		iter != ilist.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	transform(ivec.begin(), ivec.end(),
			  ilist.begin(),
			  ostream_iterator<int>(cout, " "),
			  minus<int>());
	cout << endl;
	return 0;
}