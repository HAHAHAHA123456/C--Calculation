#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void square(int& elem)
{
	elem = elem * elem;
}

int square2(int elem)
{
	return elem * elem;
}

int main()
{
	vector<int> a;
	vector<int> b;

	for(int i=1; i<=9; ++i)
	{
		a.push_back(i);
		b.push_back(i);
	}

	cout << "向量a: " << endl;
	for(vector<int>::iterator iter = a.begin();
		iter != a.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	for_each(a.begin(), a.end(), square);

	for(vector<int>::iterator iter = a.begin();
		iter != a.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	cout << "向量b: " << endl;
	for(vector<int>::iterator iter = b.begin();
		iter != b.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	transform(b.begin(), b.end(),
				b.begin(),
				square2);

	for(vector<int>::iterator iter = b.begin();
		iter != b.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;
	return 0;
}