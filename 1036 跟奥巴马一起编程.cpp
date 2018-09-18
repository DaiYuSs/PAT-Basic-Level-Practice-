#include <iostream>
using namespace std;

int main()
{
	int n;
	int h;
	char c;
	cin >> n >> c;
	h = n / 2.0 + 0.5;
	for (int i = 0; i < h; i++) {
		if (i == 0 || i == h - 1) {
			for (int j = 0; j < n; j++) {
				cout << c;
			}
		}
		else{
			for (int j = 0; j < n; j++) {
				if (j == 0 || j == n - 1)
					cout << c;
				else
					cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}