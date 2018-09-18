#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#define MAX 200
#define NowDayYear 2014
#define NowDayYearMonth 9
#define NowDayDay 6
using namespace std;
long long a;
long long Max;
long long Min;
vector<int>YYD{ NowDayYear,NowDayYearMonth ,NowDayDay };
struct population {
	string Name;
	int yyyy;
	int mm;
	int dd;
	population() {}
	population(string s, int y, int m, int d) {
		this->Name = s;
		this->yyyy = y;
		this->mm = m;
		this->dd = d;
	}
};

int main()
{
	population pp;
	int N;
	string s;
	vector<int>Date(3);
	vector<population>P{ population("",2014,9,6), population("",1814,9,6) };
	int count = 0;
	Max = 18140906;
	Min = 20140906;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		for (int j = 0; j < 3; j++) {
			scanf("%d", &Date[j]);
			getchar();
		}
		a = Date.at(0) * 10000 + Date.at(1) * 100 + Date.at(2);
		if (a >= 18140906 && a <= 20140906) {
			if (a<Min) {
				P.at(0).Name = s; P.at(0).yyyy = Date.at(0); P.at(0).mm = Date.at(1); P.at(0).dd = Date.at(2);
				Min = a;
			}
			if (a>Max) {
				P.at(1).Name = s; P.at(1).yyyy = Date.at(0); P.at(1).mm = Date.at(1); P.at(1).dd = Date.at(2);
				Max = a;
			}
			count++;
		}
	}
	cout << count;
	if (count != 0) {
		printf(" %s %s\n", P.at(0).Name.c_str(), P.at(1).Name.c_str());
	}
	return 0;
}