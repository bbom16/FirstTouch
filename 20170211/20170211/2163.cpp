#include <iostream>
using namespace std;

int main() {

	int N, M;
	cin >> N>>M;

	int min = 0;

	min = N - 1;
	min += (M - 1)*N;

	cout << min << endl;


	return 0;
}