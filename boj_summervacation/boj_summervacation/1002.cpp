#include <iostream>
#include <cmath>
using namespace std;

struct user
{
	int x, y, r;
};

int main()
{
	int T;
	cin >> T;

	int x, y, r;
	double d;
	while (T--)
	{
		cin >> x >> y >> r;
		user user1 = { x,y,r };
		cin >> x >> y >> r;
		user user2 = { x,y,r };

		d = sqrt(pow(user2.x - user1.x,2) + pow(user2.y - user1.y, 2));

		if (user1.r == user2.r && d == 0)
			cout << -1 << endl;
		else if (abs(user1.r - user2.r) < d && d < user1.r+user2.r)
			cout << 2 << endl;
		else if (abs(user1.r - user2.r) == d || d == user1.r + user2.r)
			cout << 1 << endl;
		else if (abs(user1.r - user2.r) > d || d > user1.r + user2.r)
			cout << 0 << endl;
	}
	return 0;
}