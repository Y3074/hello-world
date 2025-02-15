#include<iostream>
using namespace std;
int n;
const int N = 10;
bool st[N];//state 
int path[N];

void dfs(int u)
{
	if(u > n)//print 
	{
		for(int i = 1; i <= n; i++)
			cout << path[i] << " ";
		cout << endl;	
	}
	
	for(int i = 1; i <= n; i++)//xun huan
	{
		if(!st[i])
		{
			path[u] = i;
			st[i] = true;
			dfs(u + 1);
			st[i] = false;	
		}	
	} 
}

int main()
{
	cin >> n;
	dfs(1);
	return 0;
}
