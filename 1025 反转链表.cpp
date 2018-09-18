#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
//#include <Windows.h>
using namespace std;

map<int, pair<int, int> >SN;

struct LIST
{
	int Address;
	int Date;
	int Next;
	LIST() {}
	LIST(int Address, int Date, int Next) {
		this->Address = Address;
		this->Date = Date;
		this->Next = Next;
	}
};

int main()
{
	int Address, Date, Next;
	vector<LIST>List;
	vector<LIST>Reverse;
	vector<LIST>::iterator itt;
	vector<LIST>::iterator it;
	int AddressOne, N, K;
	int i;

	cin >> AddressOne >> N >> K;
	if (N == 0)AddressOne = -1;
	for (i = 0; i < N; i++) {
		scanf("%d%d%d", &Address, &Date, &Next);
		SN[Address] = { Date,Next };
	}
	int j = AddressOne;
	//排序
	while (j != -1) {
		List.push_back(LIST(j, SN[j].first, SN[j].second));
		j = SN[j].second;
	}
	//反转链表不足K退出
	for (i = 0, j = i + K - 1; i<List.size() && j<List.size(); i += K, j = i + K - 1) {
		for (; j >= i; j--) {
			Reverse.push_back(List.at(j));
		}
	}
	//不足K的补足
	for (; i<List.size(); i++) {
		Reverse.push_back(List.at(i));
	}
	//每个结点的尾部等于下一个的头部并且立即输出，(-1)在循环外单独输出
	for (i = 0; i < Reverse.size() - 1; i++) {
		Reverse.at(i).Next = Reverse.at(i + 1).Address;
		printf("%05d %d %05d\n", Reverse.at(i).Address, Reverse.at(i).Date, Reverse.at(i).Next);
	}
	printf("%05d %d %d\n", Reverse.at(i).Address, Reverse.at(i).Date, -1 );
	return 0;
}