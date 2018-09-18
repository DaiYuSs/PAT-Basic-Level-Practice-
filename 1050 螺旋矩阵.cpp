#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int N, n = 0, m = 0, k, Min = 9999, fx = 0;
	priority_queue<int>prq;

	cin >> N;
	if (N == 0)return 0;
	for (int i = 0; i < N; i++) {
		cin >> k;
		prq.push(k);
	}
	for (int i = 1; i <= sqrt(N); i++) {
		if (N%i == 0 && (N / i) >= i && (N / i) - i < Min) {
			m = (N / i);
			n = i;
		}
	}
	int **arr = new int*[4];
	for (int i = 0; i < 4; i++) {
		arr[i] = new int[n];
	}
	arr[0][0] = 0; arr[0][1] = 1; arr[1][0] = 1;  arr[1][1] = 0; arr[2][0] = 0; arr[2][1] = -1; arr[3][0] = -1; arr[3][1] = 0;
	vector<vector<int>>v(m);
	for (int i = 0; i < m; i++) {
		v[i].resize(n);
	}
	for (int i = 0, j = 0;; i += arr[fx][0], j += arr[fx][1]) {
		if (i == m || j == n || j == -1 || v[i][j] != 0) {
			if (i == m || j == n || j == -1) { i = (i == m) ? m - 1 : i; j = (j == n) ? n - 1 : j; j = (j == -1) ? 0 : j; }
			else { i -= arr[fx][0]; j -= arr[fx][1]; }
			fx = (fx + 1) % 4;
			continue;
		}
		v[i][j] = prq.top();
		prq.pop();
		if (prq.empty())break;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j != 0)cout << " ";
			cout << v[i][j];
		}
		cout << endl;
	}
	return 0;
}