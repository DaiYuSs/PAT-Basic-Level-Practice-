#include <iostream>
using namespace std;


int main()
{
	int i;
	char Ch;
	int N;
	cin >> N;
	int count[10001] = {0};
	int countA[2] = {0};
	int countB;
	int countC;
	for (i = 0; i < N; i++)
	{
		cin >> countB>>Ch>>countC>> countC;
		count[countB] += countC;
		if (count[countB] > countA[1])
		{
			countA[1]= count[countB];
			countA[0]= countB;
		}
	}
	cout << countA[0] << ' ' << countA[1]<<endl;
	return 0;
}