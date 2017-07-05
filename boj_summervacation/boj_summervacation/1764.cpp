#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	string name;
	vector<string> nolisten, nosee;
	for (int i = 0; i<N; i++)
	{
		cin >> name;
		nosee.push_back(name);

	}

	for (int j = 0; j<M; j++)
	{
		cin >> name;
		nolisten.push_back(name);
	}

//	sort(nosee.begin(), nosee.end());
	sort(nolisten.begin(), nolisten.end());

	vector<string> same;

	bool chk;
	for (int i = 0; i<N; i++)
	{
		chk = binary_search(nolisten.begin(), nolisten.end(), nosee[i]);
		if (chk == true)
			same.push_back(nosee[i]);
	}

	sort(same.begin(), same.end());
	cout << same.size() << endl;
	for (int i = 0; i<same.size(); i++)
	{
		cout << same[i] << endl;
	}
	return 0;
}