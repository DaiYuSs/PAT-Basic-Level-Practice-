#include <iostream>
#include <array>
#define MAX 10
using namespace std;

int main()
{
	array<int, MAX>amount;
	int t = 0; bool flag = true;

	cin >> amount.at(0);
	for (int i = 1; i < MAX; i++) {
		cin >> amount.at(i);
		if (flag&&amount.at(i) != 0) {
			flag = false;
			t = i;
			amount.at(i)--;
		}
	}
	cout << t;
	for (int i = 0; i < MAX; i++) {
		if (amount.at(i) != 0) {
			for (int j = 0; j < amount.at(i); j++) {
				cout << i;
			}
		}
	}
	cout << endl;
	return 0;
}