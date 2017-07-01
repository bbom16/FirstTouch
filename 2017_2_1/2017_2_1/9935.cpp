#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string sentence, expl_sen,tmp;
	cin >> sentence >> expl_sen;

	//vector<char> complete;
	string complete;
	for(int i = 0; sentence[i] != 0;i++)
	{
		if (sentence[i] != expl_sen[0])
		{
			complete.push_back(sentence[i]);
			if (i >= expl_sen.size())
			{
				tmp = complete.substr(complete.size()- expl_sen.size(), expl_sen.size());
				if (tmp == expl_sen)
					complete.erase(complete.size() - expl_sen.size(), expl_sen.size());
			}
		}
		else
		{
			tmp = sentence.substr(i, expl_sen.size());
			if (tmp == expl_sen)
				i += expl_sen.size()-1;
			else
				complete.push_back(sentence[i]);
		}
	}
	/*int index = sentence.find(expl_sen);
	while (index != -1)
	{
		sentence.erase(index, expl_sen.size());
		index = sentence.find(expl_sen);
	}*/
	if (complete.empty())
		cout << "FRULA" << endl;
	else
	{
		for(int i = 0; i< complete.size(); i++)
			cout << complete[i];
		
		cout << endl;
	}
	return 0;
}