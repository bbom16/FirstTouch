#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int karr[205] = { 0 };
	int dp[205] = { 0 };

	for (int i = 1; i < N+1; i++)
		cin >> karr[i];

	dp[1] = karr[1];
	for (int i = 2; i < N; i++)
	{

		if (karr[i] > dp[i - 1])
			dp[i] = karr[i];
		else
		{
			if (i == 2)
				continue;
			if (karr[i] < dp[i - 2])
			{
				dp[i - 1] = karr[i];
			}
		}


	}
	int cnt = 0;
	for (int i = 1; i < N; i++)
	{
		if (dp[i] != 0)
			cnt++;
	}
	cout << N - cnt << endl;
	return 0;
}