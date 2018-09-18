#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
	array<string, 7>date{ "MON","TUE","WED","THU","FRI","SAT","SUN" };	//从0开始计数
	array<string, 4>Decrypt;
	char ch;
	bool flag;
	int time;

	for (int i = 0; i < 4; i++) {
		cin >> Decrypt[i];
	}
	flag = false;
	ch = '\0';
	time = (Decrypt[0].size() < Decrypt[1].size()) ? Decrypt[0].size() : Decrypt[1].size();
	for (int i = 0; i < time; i++) {
		if (Decrypt[0].at(i) >= 'A'&&Decrypt[0].at(i) <= 'G'&&Decrypt[1].at(i) == Decrypt[0].at(i) && !flag) {
			ch = Decrypt[0].at(i);
			cout << date.at(ch - 65) << " ";
			flag = true;
		}
		else if (Decrypt[1].at(i) == Decrypt[0].at(i) && flag) {
			ch = Decrypt[0].at(i);
			if (Decrypt[0].at(i) >= '0'&&Decrypt[0].at(i) <= '9') {
				time = ch - 48;
				flag=!flag;
			}
			else if (Decrypt[0].at(i) >= 'A'&&Decrypt[0].at(i) <= 'N') {
				flag = !flag;
				time = ch - 55;
			}
			if(!flag)break;
		}
	}
	printf("%02d:", time);
	time = (Decrypt[2].size() < Decrypt[3].size()) ? Decrypt[2].size() : Decrypt[3].size();
	for (int i = 0; i < time; i++) {
		if ((Decrypt[2].at(i) >= 'a'&&Decrypt[2].at(i) <= 'z' || Decrypt[2].at(i) >= 'A'&&Decrypt[2].at(i) <= 'Z') && Decrypt[2].at(i) == Decrypt[3].at(i)) {
			printf("%02d\n", i);
			break;
		}
	}
}
