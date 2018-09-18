#include <iostream>
using namespace std;
int main()
{
	int n;
	int a,b;
	cin>>n;
	int *bh=new int [n+1];
	//int bh[n];
	for (int i=1;i<=n;i++){
		bh[i]=0;
	}
	for (int i=1;i<=n;i++){
		cin>>a>>b;
		bh[a]+=b;
	}
	a=1;
	b=bh[1];
	for (int i=1;i<n;i++){
		if (b<bh[i]){
			a=i;
			b=bh[i];
		}
	}
	cout<<a<<' '<<b<<endl;
	return 0;
}