#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int T, N, M; //¼öÃ¸1, ¼öÃ¸2
	cin >> T;
	while (T--)
	{
		cin >> N;

		vector<int> note1, note2;

		int a;
		for (int i = 0; i < N; i++)
		{
			cin >> a;
			note1.push_back(a);
		}
		
		sort(note1.begin(), note1.end());
		
		cin >> M;
		
		for (int i = 0; i < M; i++)
		{
			cin >> a;
			cout << binary_search(note1.begin(), note1.end(), a) << endl;
		}
	}
	return 0;
}