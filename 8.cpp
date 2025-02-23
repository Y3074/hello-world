#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int n;
const int N = 10;
bool vis[N];//判断是否选择 为的是输出排列 
int a[N];
//choose numbers  字典序问题 
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
			vis[i] = false;//vis负责恢复 一开始我把a也恢复了不正确
		}
}

int main()
{
	scanf("%d",&n);
	dfs(1);
	return 0;
}
