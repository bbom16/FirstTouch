#include<iostream>
#include<algorithm>
using namespace std;

int barr[1010], dp[1010];
int main()
{
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 1; i < N+1; i++)
		cin >> barr[i];

	dp[1] = barr[1];
	
	int mval;
	for (int i = 2; i < N + 1; i++) {
		mval = barr[i];
		for (int j = 1; j < i; j++)
		{
			mval =  max(mval, dp[i - j] + barr[j]);
		}
		dp[i] = mval;
	}
	cout << dp[N] << endl;
	return 0;
}