#include<iostream>
using namespace std;

int cnt[10], a, b, c;
int main() {
	cin >> a>>b>>c;
	for (int i = a*b*c; i; i /= 10) {
		cnt[i % 10]++;
	}
	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << endl;
	}

	return 0;
}