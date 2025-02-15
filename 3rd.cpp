//dfs ba huang hou problem + 剪枝 
#include<iostream>
using namespace std;
int n;
const int N = 11;
char arr[N][N];
bool dg[N * 2], udg[N * 2], cor[N];//主对角线:u(行） - i(列)定值 + n（保证数组下标)  反对角线:u + i (定值) 

void dfs(int u)
{
	if(u > n)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
				cout << arr[i][j];
			cout << endl;	
		}
		cout << endl;
		return;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(!cor[i] && !dg[i + u] && !udg[n - i + u])//问题：主对角线和反对角线表示 
		{
			arr[u][i] = 'Q';//choose
			cor[i] = dg[i + u] = udg[n - i + u] = 1;//set value
			dfs(u + 1);//递归 
			cor[i] = dg[i + u] = udg[n - i + u] = 0;//恢复 
			arr[u][i] = '.';//恢复 
		}
	}
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			arr[i][j] = '.';
	dfs(1);
	return 0;
}

