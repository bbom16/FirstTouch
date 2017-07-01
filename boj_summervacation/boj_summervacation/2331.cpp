#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int A, P;
	cin >> A >> P;

	vector<int> sequence;

	sequence.push_back(A);

	int c = A;
	int sum = 0;
	bool chk = false;
	while (chk == false)
	{
		sum = 0;
		while (c != 0)
		{
			sum += pow(c % 10, P);
			c /= 10;
		}
		c = sum;
		vector<int>::iterator it;
		it = find(sequence.begin(), sequence.end(), sum);
		if (it != sequence.end())
		{
			sequence.erase(it, sequence.end());
			chk = true;
			break;
		}
		else
			sequence.push_back(sum);
	}
	cout << sequence.size() << endl;
	return 0;
}