#include <iostream>
#include <sstream>
#include <string>
#include <queue>
using namespace std;

struct YB
{
	double stock, Totalprice;
	double Value;
	friend bool operator <(const YB a, const  YB b) {
		return a.Value > b.Value;
	}
};

int main()
{
	YB yb;
	priority_queue<YB>q;
	string s, t;
	int N, D;
	double Money = 0;

	cin >> N >> D;
	getchar();
	getline(cin, s);
	getline(cin, t);
	stringstream sss(s);
	stringstream sst(t);
	while (sss >> yb.stock) {
		sst >> yb.Totalprice;
		yb.Value = yb.stock / yb.Totalprice;
		q.push(yb);
	}
	while (D != 0) {
		if (!q.empty()) {
			yb = q.top();
			q.pop();
		}
		else {
			break;
		}
		if (D >= yb.stock) {
			Money += yb.Totalprice;
			D -= yb.stock;
		}
		else {
			Money += (D*(yb.Totalprice/yb.stock));
			D = 0;
		}
	}
	printf("%.2f\n",Money);
}