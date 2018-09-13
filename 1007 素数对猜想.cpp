#include <iostream>
#include <cmath>
#include <set>
#include <string>
using namespace std;
void init(set<int>&IntSet);
bool number(int n);
int answer(int N, set<int>&IntSet);
int main()
{
	set<int>IntSet;
	//set<int>::iterator it;
	init(IntSet);
	//cout << IntSet.size() << endl;
	//it = IntSet.rbegin();
	//while (it != IntSet.rend()) {
	//	cout << *it<<" ";
	//	it++;
	//}
	
	int N;
	cin >> N;
	if (answer(N, IntSet) > N) {
		cout << N;
	}
	else{
		cout << answer(N, IntSet);
	}
	cout << endl;
	return 0;
}
void init(set<int>&IntSet)
{
	int size = pow(10, 5);
	for (int i = 2; i < size; i++) {
		if (number(i)) {
			IntSet.insert(i);
		}
	}
}
bool number(int n)
{
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0)return false;
	}
	return true;
}
int answer(int N, set<int>&IntSet)
{
	int count=0;
	for (int i = 2; i <= N-2; i++) {
		if (IntSet.find(i) != IntSet.end() && IntSet.find(i + 2) != IntSet.end()) {
			count++;
		}
	}
	return count;
}