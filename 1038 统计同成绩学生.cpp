#include <iostream>
#include <sstream>
#include <array>

using namespace std;

int main()
{
	array<int, 101>arr{0};
	int n;
	int number;
	string s;
	
	cin >> n;
	getchar();
	getline(cin, s);
	stringstream ss(s);
	while (ss>> number)
		arr[number]++;
	cin >> n; getchar();
	getline(cin, s);
	stringstream sss(s);

	sss >> number;
	cout << arr[number];
	while (sss>>number)
	{
		cout << " " <<arr[number];
	}
	cout << endl;
	return 0;
}