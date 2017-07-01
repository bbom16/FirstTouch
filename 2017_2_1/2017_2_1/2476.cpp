#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> dice;

	int N;
	cin >> N;
	dice.resize(N);

	int a, b, c;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b >> c;
		if (a == b && b == c)
		{
			dice[i] = 10000 + a * 1000;
		}
		else if ((a == b && b != c) || 
			(b == c && c!= a )|| (c == a&& a!=b))
		{
			if (a == b || a == c)
				dice[i] = 1000 + a * 100;
			else if (b == c)
				dice[i] = 1000 + b * 100;
		}
		else
		{
			dice[i] = max(max(a, b), c) * 100;
		}
	}
	int max_money = 0;
	for (int i = 0; i < dice.size(); i++)
	{
		max_money = max(max_money, dice[i]);
	}
	
	cout << max_money << endl;
	return 0;
}
