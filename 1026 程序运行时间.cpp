#include <stdio.h>
#include <array>
#include <cmath>
using namespace std;

int main()
{
	array<int, 10>arr;

	scanf("%d  %d", &arr[1], &arr[2]);
	arr[3] = (arr[2] - arr[1]) / 100.0 + 0.5;
	arr[7] =arr[8]=arr[9] = 60;
	for (int i = 6; i >= 4; i--) {
		arr[i] = arr[3] % arr[i + 3];
		arr[3] /= arr[i + 3];
	}
	printf("%02d:%02d:%02d\n", arr[4], arr[5], arr[6]);
	return 0;
}