#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int n;
const int N = 10;
bool vis[N];//�ж��Ƿ�ѡ�� Ϊ����������� 
int a[N];
//choose numbers  �ֵ������� 
void dfs(int u)
{
	if(u > n) 
	{
		for(int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << endl;				
	}
	
	for(int i = 1; i <= n; i++)
		if(!vis[i])
		{
			vis[i] = true;
			a[u] = i;
			dfs(u + 1);
			vis[i] = false;//vis����ָ� һ��ʼ�Ұ�aҲ�ָ��˲���ȷ
		}
}

int main()
{
	scanf("%d",&n);
	dfs(1);
	return 0;
}
