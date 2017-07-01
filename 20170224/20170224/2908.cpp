#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string A, B;

	cin >> A >> B;

	char a;

	a = A[2];
	A[2] = A[0];
	A[0] = a;

	a = B[2];
	B[2] = B[0];
	B[0] = a;

	if (atoi(A.c_str()) > atoi(B.c_str()))
		cout << A << endl;
	else
		cout << B << endl;
	return 0;
}