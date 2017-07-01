#include <iostream>
using namespace std;

//long long fibo(int n)
//{
//	if (n == 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	return fibo(n - 1) + fibo(n - 2);
//} 재귀함수 이용
int main()
{
	long long  fibo[91] = { 0,1};
	int n;
	cin >> n;
	
	for (int i = 2; i < n+1; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	cout << fibo[n] << endl;

	return 0;
