#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N; 

	vector<int> stair;


	int score;
	stair.push_back(0);
	for (int i = 0; i < N; i++)
	{
		cin >> score;
		stair.push_back(score);
	}
	vector<int> dp_score;

	dp_score.resize(N + 1);

	for (int i = 1; i<= 2 && i <= N; i++)
	{
		dp_score[i] = dp_score[i - 1] + stair[i];
	}
	for (int i = 3; i <= N; i++)
		dp_score[i] = max(stair[i] + dp_score[i - 2], stair[i] + stair[i - 1] + dp_score[i - 3]);

	cout << dp_score[N] << endl;
	return 0;
}