#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <queue>
using namespace std;

set<char>x;
set<char>::iterator it;
void erase(char ch);//删除不会出现的字符
int main()
{
	//T_7his_is_a_test		 _hs_s_a_es
	string s;
	string s1;
	//输入字符串直接换成大写
	getline(cin, s);
	getline(cin, s1);
	x.clear();
	for (int i = 0; i < s1.size(); i++) {
		x.insert(toupper(s1.at(i)));
	}
	for (int i = 0; i < s.size(); i++) {
		erase(s.at(i));
	}
	cout << endl;
	return 0;
}
void erase(char ch)
{
	ch = toupper(ch);
	it = x.find(ch);
	if (it == x.end()) {
		x.insert(ch);
		cout << ch;
	}
}