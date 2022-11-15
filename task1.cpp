#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <array>
using namespace std;
int main()
{
	array<int, 10> arr;
	for (int i = 0; i < 10; i++)
		arr[i] = 2 * i;
	set<int> s;
	for (int i = 0; i < 10; i++)
		s.insert(2 * i + 1);
	vector<int> v(20);
	merge(arr.begin(), arr.end(), s.begin(), s.end(), v.begin());
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}