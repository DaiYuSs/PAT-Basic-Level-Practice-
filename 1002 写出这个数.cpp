#include<iostream>
#include <cstring>
#include<cmath>
using namespace std;
int main()
{
	char a[10000]; int sum=0,j,p=0,o; string q[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	cin >> a;
	for (int i = 0; i < strlen(a); i++) {
		sum += a[i] - 48;		//求总和
	}
	j = sum;
	while (j >= 10) {
		j /= 10;
		p++;	//判断长度
	}
	for (int i = p; i >0; i--) {
		o = sum / (int)pow(10, i);
		cout << q[o]<< " ";
		sum -= o*(int)pow(10, i);
	}
	cout << q[sum];
	return 0;
}
