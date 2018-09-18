#include <iostream>
#include <array>
#include <cmath>
#define MAX 23
using namespace std;
array<int, MAX>arr = {1};
char ch;
int N;
int sx;
int mark;

void init();
void BIN();
void print();
int main()
{
	init();
	cin >> N >> ch;
	BIN();
	print();
	return 0;
}
void init()
{
	for (int i = 1; i < MAX; i++) {
		arr.at(i) = arr.at(i - 1) + (i * 2+1) * 2;
	}
}

void BIN()
{
	int MID;
	int Left=0;
	int Rit=MAX;
	MID = (Left + Rit) / 2;
	while (Left<=Rit) {
		if (arr.at(MID) <= N&&arr.at(MID+1)>N) {
			sx = N - arr.at(MID);
			N = arr.at(MID);
			mark = MID;
			break;
		}
		else if (arr.at(MID) < N) {
			Left = MID+1;
		}
		else if (arr.at(MID)>N) {
			Rit = MID-1;
		}
		MID = (Left + Rit) / 2;
	}
	return;
}

void print()
{
	for (int i = -mark; i <= mark; i++) {
		for (int j = 0; j < mark - abs(i); j++) {
			cout << " ";
		}
		for (int j = 0; j < abs(i) * 2 + 1; j++) {
			cout << ch;
		}
		cout << endl;
	}
	cout <<sx << endl;
}