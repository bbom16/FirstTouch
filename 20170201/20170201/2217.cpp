#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int rope[100000] = { 0 };
	int max = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> rope[i];
	}
	
	sort(rope, rope + N);

	for (int i = 0; i < N; i++)
	{
		if (max < rope[i] * (N - i))
			max = rope[i] * (N - i);
	}

	cout << max << endl;
	return 0;
}