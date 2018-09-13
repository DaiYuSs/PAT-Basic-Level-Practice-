#include <iostream>
using namespace std;

int main()
{
	int T;
	long A, B, C;

	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> A >> B >> C;
		cout << "Case #" << i << ": ";
		if (A + B > C) {
			cout << "true";
		}else{
			cout << "false";
		}
		cout << endl;
	}
	return 0;
}