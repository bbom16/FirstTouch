#include <iostream>
using namespace std;

int main()
{
	int color[101][101] = { 0 }; //������ ����
	int num = 0; // �����̰���
	int col = 0; //��
	int row = 0; //��
	int height = 0; //����
	int width = 0; //�ʺ�

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