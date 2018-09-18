#include <iostream>
using namespace std;
int A[101][4];
int main()
{
	int Jh,Yh;	//¼×ºÈ ÒÒºÈ
	Jh=Yh=0;
	int i,j;
	int N;
	cin>>N;
	for (i=0;i<N;i++)
	{
		for (j=0;j<4;j++)
		{
			cin>>A[i][j];
		}
		if (A[i][0]+A[i][2]==A[i][1])
		{
			if (A[i][0]+A[i][2]!=A[i][3])
			{
				Yh++;
			}
		}
		else
		{
			if (A[i][0] + A[i][2] == A[i][3])
			{
				Jh++;
			}
		}
	}
	cout<<Jh<<' '<<Yh<<endl;
	return 0;
}