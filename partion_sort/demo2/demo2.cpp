#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <functional>
#include <iterator>

using namespace std;

int main()
{
	deque<int> ideq;
	vector<int> ivec6(6);
	vector<int> ivec30(30);

	for(int i=3; i<=7; ++i)
		ideq.push_back(i);
	for(int i=2; i<=6; ++i)
		ideq.push_back(i);
	for(int i=1; i<=5; ++i)
		ideq.push_back(i);

	for(deque<int>::iterator iter = ideq.begin();
		iter != ideq.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	vector<int>::iterator pos6;
	pos6 = partial_sort_copy(ideq.begin(),ideq.end(),
		ivec6.begin(),ivec6.end());

	copy(ivec6.begin(),pos6,ostream_iterator<int>(cout," "));
	cout << endl;

	vector<int>::iterator pos;
	pos = partial_sort_copy(ideq.begin(),ideq.end(),
		ivec30.begin(),ivec30.end(),greater<int>());

	copy(ivec30.begin(),ivec30.end(),ostream_iterator<int>(cout," "));
	cout << endl;

	copy(ivec30.begin(),pos,ostream_iterator<int>(cout," "));
	cout << endl;

	system("pause");
	return 0;
}