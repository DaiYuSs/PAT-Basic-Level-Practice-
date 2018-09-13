#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
queue<int>q;
int M, N;
int i, count;
void init() {
	bool flag;
	for (int i = 2; q.size() <N; i++) {
		flag = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			q.push(i);
		}
	}
}

int main()
{
	cin >> M >> N;
	init();
	for (int i = 1; i < M; i++) {
		q.pop();
	}
	i = 0;
	while (!q.empty()) {
		if (i % 10 != 0)cout << " ";
		cout <<q.front();
		q.pop();
		i++;
		if (i % 10 == 0)cout << endl;
	}
	if (i % 10 != 0)cout << endl;
	return 0;
}
