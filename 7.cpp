#include<iostream>
#include<cstring>
#include<cstdio>
//  2/23 µÝ¹é»Ø¹Ë 
using namespace std;
const int N = 16;
bool vis[N];
int n;

void dfs(int u)//µÚuÎ»×´Ì¬ 
{
	if(u > n)
	{
		for(int i = 1; i <= n; i++)
			if(vis[i])
				cout << i << " ";
		puts("");		
	}
	else//significant role please don't neglect
	{
		vis[u] = true;
		dfs(u + 1);
		vis[u] = false;
		dfs(u + 1);	
	}
}

int main()
{
	cin >> n;//3
	dfs(1);
 } 
