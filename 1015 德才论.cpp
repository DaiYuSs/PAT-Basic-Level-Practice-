#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int total, admission, Preferential;//������  ��ͷ�  ����
struct Student
{
	int No, V, A;//��� �� ��
	int sum;//�ܷ�
	int class1;//��������¼
}stu[10010];

bool cmp(Student a, Student b)
{
	if (a.class1 == b.class1)
	{
		if (a.sum == b.sum)
		{
			if (a.V == b.V)
				return a.No < b.No;
			else
				return a.V > b.V;
		}
		return a.sum > b.sum;
	}
	else
	{
		return a.class1 < b.class1;
	}
}

int main()
{
	int i, NO, V, A;
	cin >> total >> admission >> Preferential;
	for (i = 0; i < total;)
	{
		cin >> NO >> V >> A;
		if (V >= admission && A >= admission)
		{
			/*
			�����ж�  ��ѧ������
			*/
			stu[i].No = NO; stu[i].V = V; stu[i].A = A;
			stu[i].sum = stu[i].V + stu[i].A;
			if (stu[i].V >= Preferential&&stu[i].A >= Preferential)
			{
				stu[i].class1 = 1;
			}
			if (stu[i].V >= Preferential&&stu[i].A < Preferential)
			{
				stu[i].class1 = 2;
			}
			if (stu[i].V < Preferential&&stu[i].A < Preferential&&stu[i].V>=stu[i].A)
			{
				stu[i].class1 = 3;
			}
			else 
			{
			stu[i].class1 = 4;
			}
			i++;
		}
		else
			total--;
	}
	sort(stu, stu + total, cmp);
	cout << total << endl;
	for (i = 0; i < total; i++)
	{
		//cout << stu[i].No << ' ' << stu[i].V << ' ' << stu[i].A <<' '<<stu[i].class1<<endl;
		//cout << stu[i].No << ' ' << stu[i].V << ' ' << stu[i].A << endl;
		printf("%d %d %d\n", stu[i].No, stu[i].V, stu[i].A);
	}
	return 0;
}