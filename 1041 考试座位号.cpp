#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<int, pair<string, int>>M;
	int sj,zw;	// ÊÔ»ú×ùÎ»ºÅ ¿¼ÊÔ×ùÎ»ºÅ
	string s;	//×¼¿¼Ö¤ºÅ
	int n, m;
	cin >> n;

	for (int i = 0; i < n; i++) {
		//scanf_s("%s%d%d",&s,&sj,&zw);
		cin >> s >> sj >> zw;
		M[sj] = pair<string, int>(s, zw);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> n;
		cout << M[n].first << " " << M[n].second << endl;
	}
	return 0;
}
