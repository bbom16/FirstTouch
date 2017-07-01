#include <iostream>
using namespace std;

int main()
{
	int color[101][101] = { 0 }; //색종이 영역
	int num = 0; // 색종이개수
	int col = 0; //행
	int row = 0; //열
	int height = 0; //높이
	int width = 0; //너비

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> col >> row >> width >> height;
		for (int j = col; j < width + col; j++)
		{
			for (int k = row; k < height + row; k++)
			{
				color[j][k] = i + 1;
			}
		}
	}
	for (int k = 0; k < num; k++)
	{
		int cnt = 0;
		for (int i = 0; i < 101; i++)
		{
			for (int j = 0; j < 101; j++)
			{
				if (color[i][j] == k+1)
				{
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}