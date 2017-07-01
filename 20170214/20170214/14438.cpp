#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int* A = new int[N];

	for (int i = 0; i < N; i++)
	{
		scanf_s("%d",&A[i]);
	}
	int M;
	cin >> M;

	int a, b, c;
	int min;
	for (int i = 0; i < M; i++)
	{
		scanf_s("%d %d %d", &a, &b, &c);
		switch (a)
		{
		case 1:
			A[b-1] = c;
			break;
		case 2:
			min = A[b - 1];
			for (int j = b-1; j < c; j++)
			{
				if (min > A[j])
					min = A[j];
			}
			printf("%d \n", min);

			break;
		}
	}
	return 0;
}