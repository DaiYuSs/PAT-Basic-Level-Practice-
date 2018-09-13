#include <iostream>
#include <string>
#include <sstream>
#include <array>
#include <queue>
using namespace std;
int main()
{
	string s;
	int B;
	queue<int>q;
	int ssize;
	int C = 0;
	int D;

	cin >> s >> B;
	ssize = s.size();
	for (int i = 0; i < ssize; i++ ) {
		C = C * 10 + (s[i] - 48);
		D = C;
		C /= B;
		q.push(C);
		C = D % B;
	}
	if (q.front() == 0&&q.size()!=1)q.pop();
	while (!q.empty()) {
		cout << q.front();
		q.pop();
	}
	cout <<" "<< C << endl;
	return 0;
}