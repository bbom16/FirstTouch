#include<iostream>
using namespace std;

//int fibonacci(int n) {
//	if (n == 0)
//	{
//		printf("0");
//		return 0;
//	}
//	else if (n == 1) {
//		printf("1");
//		return 1;
//	}
//	else
//		return fibonacci(n - 1) + fibonacci(n - 2);
//}
int main()
{
	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;

	int N;
	int adp[41] = { 1 };
	int bdp[41] = { 0,1 };
	for (int i = 0; i < T; i++)
	{
		cin >> N;

		for (int j = 2; j < N + 1; j++)
		{
			adp[j] = adp[j - 1] + adp[j - 2];
			bdp[j] = bdp[j - 1] + bdp[j - 2];
		}

		cout << adp[N] << " " << bdp[N] << endl;
		adp[0] = 1;
		adp[1] = 0;
		bdp[0] = 0;
		bdp[1] = 1;
	}
	return 0;
}