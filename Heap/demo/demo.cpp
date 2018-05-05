#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;

	for(int i=3; i<=7; ++i)
		ivec.push_back(i);
	for(int i=5; i<=9; ++i)
		ivec.push_back(i);
	for(int i=1; i<=4; ++i)
		ivec.push_back(i);

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	make_heap(ivec.begin(),ivec.end());

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	pop_heap(ivec.begin(),ivec.end());

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	ivec.pop_back();

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	ivec.push_back(17);
	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	push_heap(ivec.begin(),ivec.end());

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	sort_heap(ivec.begin(),ivec.end());

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	system("pause");
	return 0;
}