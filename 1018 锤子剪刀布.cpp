#include <iostream>
#include <string>
#include <array>
#include <list>
using namespace std;
int main()
{
	array<char, 27>gestureJ;
	gestureJ.at(2) = 'B';
	gestureJ.at(3) = 'C';
	gestureJ.at(10) = 'J';

	array<int, 7>WAL{ 0,0,0,0,0,0,0 };	//Winning and losing
	int n;
	char a, b;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a == b) {
			WAL.at(6)++;
		}
		else if (a < b) {
			if (a == 'B'&&b == 'J') {
				WAL.at(5)++;
			}
			else
			{
				if (a == 'B')WAL.at(0)++;
				if (a == 'C')WAL.at(1)++;
			}
		}
		else if (a > b) {
			if (a == 'J'&&b == 'B') {
				WAL.at(2)++;
			}
			else
			{
				if (b == 'B')WAL.at(3)++;
				if (b == 'C')WAL.at(4)++;
			}
		}
	}
	cout << WAL.at(0) + WAL.at(1) + WAL.at(2) << " " << WAL.at(6) << " " << WAL.at(3) + WAL.at(4) + WAL.at(5) << endl;
	cout << WAL.at(3) + WAL.at(4) + WAL.at(5) << " " << WAL.at(6) << " " << WAL.at(0) + WAL.at(1) + WAL.at(2) << endl;
	int max1, max2;
	max1 = 0; max2 = 3;
	for (int i = 1; i < 6; i++) {
		if (i < 3) {
			if (WAL.at(i) > WAL.at(max1)) {
				max1 = i;
			}
		}else {
			if (WAL.at(i) > WAL.at(max2)) {
				max2 = i;
			}
		}
	}
	if (max1 == 2) {
		max1 = 10;
	}
	else {
		max1 = 2 +max1;
	}
	if (max2 == 5) {
		max2 = 10;
	}
	else {
		max2--;
	}
	cout << gestureJ.at(max1) << " " << gestureJ.at(max2) << endl;
	return 0;
}