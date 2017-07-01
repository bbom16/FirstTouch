#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;


int main()
{
	int N;
	cin >> N;
	vector<int> dp;
	dp.resize(N+1);
	
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j*j <= i; j++)
		{
			if (dp[i] != 0)
				dp[i] = min(dp[i - j*j] + 1, dp[i]);
			else
				dp[i] = dp[i - j*j] + 1;
		}

	}
		cout << dp[N] << endl;
	
	return 0;
}