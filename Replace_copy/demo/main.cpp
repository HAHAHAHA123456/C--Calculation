#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	list<int> ilist;
	for(int i=2; i<=7; ++i)
		ilist.push_back(i);
	for(int i=4; i<=9; ++i)
		ilist.push_back(i);

	for(list<int>::iterator iter = ilist.begin();
		iter != ilist.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	replace(ilist.begin(), ilist.end(), 6, 42);

	for(list<int>::iterator iter = ilist.begin();
		iter != ilist.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	replace_if(ilist.begin(), ilist.end(),bind2nd(less<int>(),5),0);

	for(list<int>::iterator iter = ilist.begin();
		iter != ilist.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	list<int> ilist2;
	for(int i=2; i<=6; ++i)
		ilist2.push_back(i);
	for(int i=4; i<=9; ++i)
		ilist2.push_back(i);
	for(list<int>::iterator iter = ilist2.begin(); iter != ilist2.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	replace_copy(ilist2.begin(),ilist2.end(),ostream_iterator<int>(cout, " "),5,55);
	cout << endl;

	replace_copy_if(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout," "),
		bind2nd(less<int>(),5),42);
	cout << endl;

	replace_copy_if(ilist2.begin(), ilist2.end(), ostream_iterator<int>(cout, " "),
		bind2nd(modulus<int>(),2),0);
	cout << endl;

	return 0;
}