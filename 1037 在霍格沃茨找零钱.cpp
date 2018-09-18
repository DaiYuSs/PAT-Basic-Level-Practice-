#include <stdio.h>
#include <iostream>
#include <array>
#include <cmath>
using namespace std;

int main()
{
	array<int, 10>arr;

	scanf("%d.%d.%d %d.%d.%d", &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);
	arr[7] = 0; arr[8] = 17; arr[9] = 29;
	for (int i = 6; i >= 4; i--) {
		arr[i] -= arr[i - 3];
		if (arr[i] < 0) {
			arr[i - 1]--;
			arr[i] += arr[i + 3];
		}
	}
	if (arr[4] < 0) {
		for (int i = 6; i >= 5; i--) {
			arr[i] -= arr[i+3];
			if (arr[i] < 0) {
				arr[i - 1]++;
				arr[i] = abs(arr[i]);
			}
		}
	}
	printf("%d.%d.%d\n", arr[4], arr[5], arr[6]);
	return 0;
}