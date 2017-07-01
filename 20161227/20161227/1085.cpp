#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int w = 0;
	int h = 0;
	int min_w = 0;
	int min_h = 0;
	int min = 0;

	cin >> x >> y >> w >> h;

	min_w = w / 2;
	if (min_w < x)
	{
		min_w = w - x;
	}
	else
	{
		min_w = x;
	}
	
	min_h = h / 2;
	if (min_h < y)
	{
		min_h = h - y;
	}
	else
	{
		min_h = y;
	}

	if (min_h > min_w)
	{
		min = min_w;
	}
	else
	{
		min = min_h;
	}

	cout << min << endl;
	return 0;
}