#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int>l;
	list<int>::iterator it;
	int A, M, n;

	cin >> A >> M;
	for (int i = 0; i < A; i++) {
		cin >> n;
		l.push_back(n);
	}
	for (int i = 0; i < M; i++) {
		it = l.end();
		it--;
		l.insert(l.begin(), *it);
		l.erase(it);
	}
	it = l.begin();
	cout << *it;
	it++;
	while (it != l.end()) {
		cout << " " << *it;
		it++;
	}
	cout << endl;
	return 0;
}