#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue <int> card;
	int Ccnt; // 카드 개수

	cin >> Ccnt;

	for (int i = 1; i < Ccnt+1; i++)
	{
		card.push(i);
	}

	for (int i = 0; i < 2*Ccnt; i++)
	{
		if (card.empty())
			break;

		if (i % 2 == 0)
		{
			cout << card.front() << endl;
			card.pop();
		}
		else if (i % 2 == 1)
		{
			card.push(card.front());
			card.pop();
		}
	}
	return 0;
}