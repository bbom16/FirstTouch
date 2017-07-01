#include <iostream>
using namespace std;

int main()
{
	int clk_h = 0;	//시
	int clk_m = 0;	//분
	int clk_s = 0;	//초
	int time = 0;	//소요시간

	cin >> clk_h >> clk_m >> clk_s;
	cin >> time;

	clk_s += time;
	
	if (clk_s > 59)
	{
		clk_m += clk_s / 60;
		clk_s = clk_s % 60;
	}
	if (clk_m > 59)
	{
		clk_h += clk_m / 60;
		clk_m = clk_m % 60;
	}
	if (clk_h > 23)
	{
		clk_h = clk_h % 24;
	}
	cout << clk_h << " " << clk_m << " "
		<< clk_s << endl;

	return 0;
}