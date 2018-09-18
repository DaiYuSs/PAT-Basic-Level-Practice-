#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k,Max;
	vector<int>v;
	vector<int>::iterator it;

	cin >> n;
	Max = -1;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &k);
		if (k > Max) {
			v.push_back(k);
			Max = k;
		}
		else {
			for (it = v.begin(); it != v.end();) {
				if (*it > k)*it = -1;
				else it++;
			}
		}
	}
	it = v.begin();
	while (it != v.end()) {
		if (*it == -1)it = v.erase(it);
		else it++;
	}
	it = v.begin();
	printf("%d\n", v.size());
	while (it != v.end()) {
		if (it != v.begin())printf(" ");
		printf("%d", *it);
		it++;
	}
	printf("\n");
	return 0;
}