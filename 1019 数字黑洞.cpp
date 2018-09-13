#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#define HD 4
using namespace std;
int js(array<char, HD>&a, array<char, HD>b);
void print(array<char, HD>a);
bool cmp(char a, char b)
{
	return a > b;
}
int main()
{
	array<char, HD>n;
	array<char, HD>m;
	int H = -1;
	int N;

	cin >> N;
	for (int i = 0; i < HD; i++) {
		n[i] = N % 10;
		N /= 10;
	}
	while (H != 0 && H != 6174) {
		m = n;
		sort(n.begin(), n.end(), cmp);
		sort(m.begin(), m.end());
		print(n);
		cout << " - ";
		print(m);
		cout << " = ";
		H = js(n, m);
		printf("%04d\n", H);
	}
}
void print(array<char, HD>a)
{
	for (int i = 0; i < HD; i++) {
		cout << a.at(i) - 0;
	}
}
int js(array<char, HD>&a, array<char, HD>b)
{
	int q, w, sum;
	q = w = 0;
	for (int i = 0; i < HD; i++) {
		q = q * 10 + a.at(i);
		w = w * 10 + b.at(i);
	}
	sum = q - w;
	q = sum;
	for (int i = HD - 1; i >= 0; i--) {
		a.at(i) = q % 10;
		q /= 10;
	}
	return sum;
}