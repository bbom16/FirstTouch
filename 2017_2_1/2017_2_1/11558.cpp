#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> next_p;
vector<bool> visit;
int cnt; bool chk; //주경이 걸렸는지 확인

int dfs(int s, int n)
{
	visit[s] = true;
	if (s == n)
	{
		chk = true;
		return cnt;
	}
	if (visit[next_p[s]] == false)
	{
		dfs(next_p[s], n);
		cnt++;
	}
	
	return cnt;
}

int main()
{
	int T;
	cin >> T;

	int N;
	while (T--)
	{
		next_p.push_back(0);
		cin >> N;
		int p; //내가 가리키는 사람
		for (int i = 0; i < N; i++)
		{
			cin >> p;
			next_p.push_back(p);
		}

		visit.resize(N+1);

		int min_num = dfs(1, N);

		if (chk == true)
			cout << min_num << endl;
		else
			cout << 0 << endl;
		next_p.clear(); visit.clear(); cnt = 0; chk = 0;
	}

	return 0;
}