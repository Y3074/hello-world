//dfs ba huang hou problem + ��֦ 
#include<iostream>
using namespace std;
int n;
const int N = 11;
char arr[N][N];
bool dg[N * 2], udg[N * 2], cor[N];//���Խ���:u(�У� - i(��)��ֵ + n����֤�����±�)  ���Խ���:u + i (��ֵ) 

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
		if(!cor[i] && !dg[i + u] && !udg[n - i + u])//���⣺���Խ��ߺͷ��Խ��߱�ʾ 
		{
			arr[u][i] = 'Q';//choose
			cor[i] = dg[i + u] = udg[n - i + u] = 1;//set value
			dfs(u + 1);//�ݹ� 
			cor[i] = dg[i + u] = udg[n - i + u] = 0;//�ָ� 
			arr[u][i] = '.';//�ָ� 
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

