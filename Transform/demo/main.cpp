#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec;
	list<int> ilist;

	for(int i=1; i<=9; i++)
		ivec.push_back(i);

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	transform(ivec.begin(), ivec.end(),
		ivec.begin(), negate<int>());

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	transform(ivec.begin(),ivec.end(),back_inserter(ilist),
		bind2nd(multiplies<int>(),10));

	for(list<int>::iterator iter = ilist.begin();
		iter != ilist.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	transform(ilist.begin(), ilist.end(),ostream_iterator<int>(cout, " "), negate<int>());
	return 0;
}