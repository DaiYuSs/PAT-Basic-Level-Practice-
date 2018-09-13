#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<char>sta;
	unsigned int a;
	uint32_t b;
	int D;

	cin >> a >> b >> D;
	a += b;
	if (a == 0)cout << "0";
	while (a != 0) {
		b = a % D;
		sta.push(b); 
		a /= D;
	}
	while (!sta.empty()) {
		cout<<sta.top()-0;
		sta.pop();
	}
	cout << endl;
	return 0;
}
