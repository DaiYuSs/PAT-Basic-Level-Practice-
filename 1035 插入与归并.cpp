#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>original, intermediate, last;
	int n,k;
	bool flag = false;

	cin >> n;
	for (int i = 0; i < n; i++) { cin >> k; original.push_back(k); }
	for (int i = 0; i < n; i++) { cin >> k; intermediate.push_back(k); }
	last.assign(original.begin(), original.end());
	for (int i = 1; i < n; i++) {
		sort(last.begin(),last.begin()+i+1);
		if (equal(last.begin(), last.begin()+n, intermediate.begin())) {
			flag = true;
			cout << "Insertion Sort\n";
			sort(last.begin(), last.begin() + i + 2);
			break;
		}
	}
	if (!flag) {
		last.assign(original.begin(), original.end());
		cout << "Merge Sort\n";
		for (int i = 2; i < n; i *=2) {
			for (int j = 0; j < n; j += i) 
				sort(last.begin() + j, last.begin() + ((j + i)>n?n:j+i));
			if (equal(last.begin(), last.begin() + n, intermediate.begin())) {
				for (int j = 0; j < n; j += i * 2)
					sort(last.begin() + j, last.begin() + ((j + i * 2) > n ? n : j + i * 2));
				break;
			}
		}
	}
	cout << last.at(0);
	for (int i =1; i < n; i++)cout << " "<<last.at(i);
	cout << endl;
	return 0;
}