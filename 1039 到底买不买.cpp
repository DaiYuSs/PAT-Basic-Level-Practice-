#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int size=0;
	string sell;
	string miss;

	cin >> sell>> miss;
	for (int i = 0; i < miss.size()&&sell.size()!=0 ; i++) {
		if (sell.find(miss[i]) != -1) {
			sell[sell.find(miss[i])] = '\0';
			miss[i] = '\0';
			size++;
		}
	}
	if (miss.size()-size==0) {
		printf("Yes %d\n",sell.size()-size);
	}
	else {
		printf("No %d\n",miss.size()-size);
	}
	return 0;
}