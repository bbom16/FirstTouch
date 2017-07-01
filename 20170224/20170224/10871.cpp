#include <iostream>
using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;
	int b;
	
	for (int i = 0; i < N; i++)
	{
		cin >> b;
		if (X > b)
			cout << b << " ";
		else
			continue;
	}
	cout << endl;
	return 0;
}