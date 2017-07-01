#include <iostream>
using namespace std;

void printTime(int clk1, int clk2, int clk3)
{
	if (clk1 > 59)
	{
		clk2 += clk1 / 60;
		clk1 = clk1 % 60;
	}
	if (clk2 > 59)
	{
		clk3 += clk2 / 60;
		clk2 = clk2 % 60;
	}
	if (clk3 > 23)
	{
		clk3 = clk3 % 24;
	}
	cout << clk3 << " " << clk2 << " "
		<< clk1 << endl;
}

int main()
{
	int clk_h = 0;	//시
	int clk_m = 0;	//분
	int clk_s = 0;	//초
	int time = 0;	//소요시간

	cin >> clk_h >> clk_m >> clk_s;
	cin >> time;

	if (time >= 0 && time < 60)
	{
		clk_s += time;
	}
	else if (time >= 60 && time < 3600)
	{
		clk_s += time % 60;
		clk_m += time / 60;
	}
	else if (time >= 3600)
	{
		clk_s += time % 3600;
		clk_m += time % 60;
		clk_h += time / 3600;
	}
	
	printTime(clk_s, clk_m, clk_h);

	return 0;
}