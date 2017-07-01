#include <iostream>
using namespace std;

int main()
{
	int w, h;
	int x, y;
	long long t;

	cin >> w >> h;
	cin >> x >> y;
	cin >> t;

	int a = 1;
	int b = 1;

	for (int i = 0; i < t; i++)
	{
		if (x >= w || x <= 0)
			a *= -1;
		if (y >= h || y <= 0)
			b *= -1;
	
		x += a;
		y += b;
	}
	cout << x << " " << y << endl;

	return 0;
}