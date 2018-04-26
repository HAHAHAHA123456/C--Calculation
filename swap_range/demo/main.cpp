#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

int main()
{
	vector<int> ivec1;
	vector<int> ivec2;

	ivec1.push_back(1);
	ivec1.push_back(2);
	ivec1.push_back(3);

	ivec2.push_back(10);
	ivec2.push_back(20);
	ivec2.push_back(30);

	ivec1.swap(ivec2);
	//ivec1 = ivec2;

	cout << ivec1.at(0) << ' ' << ivec1.at(1) << ' ' << ivec1.at(2) << endl;


	vector<int> ivec;
	deque<int> ideq;

	for(int i=1; i<=9; ++i)
		ivec.push_back(i);
	for(int i=11; i<=23; ++i)
		ideq.push_back(i);

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	for(deque<int>::iterator iter = ideq.begin();
		iter != ideq.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	deque<int>::iterator pos;

	pos = swap_ranges(ivec.begin(), ivec.end(), ideq.begin());

	for(vector<int>::iterator iter = ivec.begin();
		iter != ivec.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	for(deque<int>::iterator iter = ideq.begin();
		iter != ideq.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	if(pos != ideq.end())
	{
		cout << "第一个没有交换的数: " << *pos << endl;
	}

	swap_ranges(ideq.begin(), ideq.begin()+3,ideq.rbegin());
	for(deque<int>::iterator iter = ideq.begin();
		iter != ideq.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	return 0;
}