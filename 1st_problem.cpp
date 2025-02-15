//状态栈 + dfs 
#include <iostream>
using namespace std;

const int N = 16;
int n;
bool vis[N];//状态 

void DFS(int u)
{
	if(u > n)
	{
		for(int i = 1; i <= n; i++)//从1开始 一直到N 
			if(vis[i])
				cout << i << " ";
			cout << endl;
			return ;	
	}
	else
	{
		vis[u] = true;
		DFS(u + 1);//继续选择 直到u > n 
		vis[u] = false;
		DFS(u + 1);//继续选择 直到u > n 
	}
} 
int main() {
    cin >> n;
    DFS(1);//从序号1开始 
    return 0;
}

