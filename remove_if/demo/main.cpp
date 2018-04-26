#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main()
{
	list<int> ilist;

	for(int i=1; i<=6; ++i)
	{
		ilist.push_front(i);
		ilist.push_back(i);
	}

	for(list<int>::iterator iter=ilist.begin();
		iter != ilist.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	list<int>::iterator end;
	end = remove(ilist.begin(), ilist.end(),3);

	for(list<int>::iterator iter=ilist.begin();
		iter != end; ++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "一共删除了" << distance(end,ilist.end()) << "个3." << endl;

	//真正的删除
	ilist.erase(end,ilist.end());
	for(list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	vector<int> ivec;
	for(int i=2; i<=6; ++i)
		ivec.push_back(i);
	for(int i=4; i<=9; ++i)
		ivec.push_back(i);
	for(int i=1; i<=7; ++i)
		ivec.push_back(i);

	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	ivec.erase(remove(ivec.begin(),ivec.end(),5),ivec.end());

	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	ivec.erase(remove_if(ivec.begin(),ivec.end(),bind2nd(less<int>(),4)),ivec.end());

	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;
	return 0;
}