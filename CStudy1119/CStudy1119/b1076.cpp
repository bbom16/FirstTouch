#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	string color[10] = {"black","brown","red", "orange","yellow","green","blue","violet", "grey", "white" };
	string input1 = " "; 
	string input2 = " ";
	string input3 = " "; 
	long long value = 0; //Ãâ·Â°ª

	cin >> input1;
	cin >> input2;
	cin >> input3;

	for (int i = 0; i < 10; i++)
	{
		if (color[i] == input1)
		{
			value += i * 10;
		}
		if (color[i] == input2)
		{
			value += i;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (color[i] == input3)
		{
			value *= pow(10, i);
		}
	}
	cout << value << endl;
	return 0;
}