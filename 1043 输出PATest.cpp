#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	int count[6] = {0};
	//memset(count, 0, 6);
	string Str;
	cin >> Str;
	for (i = 0; i<Str.size(); i++)
	{
		if (Str[i] == 'P') count[0]++;
		if (Str[i] == 'A') count[1]++;
		if (Str[i] == 'T') count[2]++;
		if (Str[i] == 'e') count[3]++;
		if (Str[i] == 's') count[4]++;
		if (Str[i] == 't') count[5]++;
	}
	int whilecount=0;
	for (i = 0; i < 6; i++)
	{
		whilecount += count[i];
	}
	while (whilecount!=0)
	{
		if (count[0] != 0)
		{
			count[0]--;
			cout << 'P';
		}
		if (count[1] != 0)
		{
			count[1]--;
			cout << 'A';
		}
		if (count[2] != 0)
		{
			count[2]--;
			cout << 'T';
		}
		if (count[3] != 0)
		{
			count[3]--;
			cout << 'e';
		}
		if (count[4] != 0)
		{
			count[4]--;
			cout << 's';
		}
		if (count[5] != 0)
		{
			count[5]--;
			cout << 't';
		}
		whilecount--;
	}
	return 0;
}
