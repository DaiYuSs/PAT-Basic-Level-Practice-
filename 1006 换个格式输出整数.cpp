#include <iostream>
using namespace std;

int main()
{
	int i;
	int n;
	cin >> n;
	for (i = 0; i < n / 100; i++)
	{
		cout << 'B';
	}
	for (i = 0; i < (n/10%10); i++)
	{
		cout << 'S';
	}
	for (i = 1; i <= (n% 10); i++)
	{
		cout <<i;
	}

	return 0;
}
