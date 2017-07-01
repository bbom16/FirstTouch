#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count = 0;
	char chess[8][8];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> chess[i][j];
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0 && chess[i][j] == 'F') {
					count++;
				}
			}
			else if (i % 2 == 1)
			{
				if (j % 2 == 1 && chess[i][j] == 'F') {
					count++;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}