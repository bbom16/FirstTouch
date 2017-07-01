#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A + B == C)
	{
		cout << A << "+" << B
			<< "=" << C << endl;
		return 0;
	}
	if (A - B == C)
	{
		cout << A << "-" << B
			<< "=" << C << endl;
		return 0;
	}
	if (A * B == C)
	{
		cout << A << "*" << B
			<< "=" << C << endl;
		return 0;
	}
	if (A / B == C)
	{
		cout << A << "/" << B
			<< "=" << C << endl;
		return 0;
	}
	if (A == B + C)
	{
		cout << A << "=" << B << "+" << C << endl;
		return 0;
	}
	if (A == B - C)
	{
		cout << A << "=" << B << "-" << C << endl;
		return 0;
	}
	if (A == B * C)
	{
		cout << A << "=" << B << "*" << C << endl;
		return 0;
	}
	if (A == B / C)
	{
		cout << A << "=" << B << "/" << C << endl;
		return 0;
	}
	return 0;
}