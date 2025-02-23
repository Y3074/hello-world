#include<iostream>
#include<cstring>
#include<cstdio>
//  2/23 组合 
using namespace std;
const int N = 16;
int a[N];
int n, m;

void dfs(int u,int x)//第u位状态 
{
	if(u > m)
	{
		for(int i = 1; i <= m; i++)
			cout << a[i] << " ";
		puts("");
		return;		
	}
	for(int i = x; i <= n; i++)//significant role please don't neglect
	{
		a[u] = i;
		dfs(u + 1,i + 1);
	}
}

int main()
{
	cin >> n >> m;//3
	dfs(1,1);
 } 
