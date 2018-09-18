#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
int main()
{
	array<long long, 100000>arr;
	long N, p, Max,j;
	cin >> N >> p;
	j = Max = 0;
	for (int i = 0; i < N; i++) scanf("%lld", &arr.at(i));
	sort(arr.begin(), arr.begin() + N);
	for (int i = 0; i < N; i++) {
		for (; j < N&&arr.at(i)*p>=arr.at(j); j++){}
		Max = max(Max,j-i);
	}
	cout << Max << endl;
	return 0;
}