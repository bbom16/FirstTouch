#include <iostream>
#include <string>
#include <string.h>
using namespace std;
//�ð��ʰ�
int main() {

	string a, b;
	cin >> a >> b;

	while (a.find(b) != -1)
		a.erase(a.find(b), b.length());
	
	if (a == "")
		cout << "FRULA" << endl;
	else
		cout << a << endl;

	return 0;
}