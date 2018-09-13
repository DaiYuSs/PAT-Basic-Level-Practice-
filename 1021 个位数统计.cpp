#include <iostream>
#include <string>
using namespace std;

int main()
{
	string N;
	int ID[11] = { 0 };
	cin >> N;
	int i;
	for (i = 0; i < N.size(); i++)
	{
		ID[N[i]-48]++;
	}
	for (i = 0; i < 10; i++)
	{
		if (ID[i] != 0)
		{
			cout << i << ":" << ID[i] << endl;
		}
	}
	return 0;
}
