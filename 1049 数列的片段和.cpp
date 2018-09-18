#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	double sum=0;

	cin >> n;
	vector<double>v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += ((double)(i + 1)*(double)(n - i)*v.at(i));
	}
	printf("%.2f\n",sum);
	return 0;
}