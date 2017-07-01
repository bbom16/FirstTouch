//시간초과
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int N;
	cin >> N;

	vector<int> arr; int num;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		arr.push_back(num);
	}

	int M;
	cin >> M;

	int a, i, j, v; 
	int min_val; vector<int>::iterator it;
	while (M--)
	{
		cin >> a;
		min_val = 100000;
		switch (a)
		{
		case 1:
			cin >> i >> v;
			arr[i-1] = v;
			break;
		case 2:
			cin >> i >> j;
			/*for (int k = i; k <= j; k++)
			{
				min_val = min(min_val,arr[k-1]);
			}*/
			it = min_element(arr.begin() + i - 1, arr.begin() + j);
			cout << *it << endl;
			break;
		default:
			break;
		}
	}
	return 0;
}