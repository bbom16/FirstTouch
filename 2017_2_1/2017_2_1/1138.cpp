#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);

	vector<pair<int,int> >info, temp;
	vector<int> long_h;
	int N;
	cin >> N;
	int a;
	for (int i = 1; i < N+1; i++)
	{
		cin >> a;
		info.push_back(make_pair(a, i));
	}

	sort(info.begin(), info.end());

	long_h.resize(N + 1);
	
	int cnt = 0;
	int w = 0;
	for (int j = 0; j < N; j++)
	{
		for (int i = w; i < N; i++)
		{
			if (info[i].first <= cnt)
			{
				temp.push_back(info[i]);
				w = i+1;
			}
			else
				break;
		}
		cnt++;
		int m_num = N+1;
		int m_index = 0;
		for (int k = 0; k < temp.size(); k++)
		{
			if (m_num > temp[k].second && long_h[temp[k].second] == temp[k].first)
			{
				m_num = temp[k].second;
				m_index = k;
			}
			
		}
		cout << m_num << endl;
		temp.erase(temp.begin() + m_index);
	
		for (int i = 0; i < info.size(); i++)
		{
			if (m_num > info[i].second)
				long_h[info[i].second]++;
		}

	}
	return 0;
}