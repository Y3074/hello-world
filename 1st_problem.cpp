//״̬ջ + dfs 
#include <iostream>
using namespace std;

const int N = 16;
int n;
bool vis[N];//״̬ 

void DFS(int u)
{
	if(u > n)
	{
		for(int i = 1; i <= n; i++)//��1��ʼ һֱ��N 
			if(vis[i])
				cout << i << " ";
			cout << endl;
			return ;	
	}
	else
	{
		vis[u] = true;
		DFS(u + 1);//����ѡ�� ֱ��u > n 
		vis[u] = false;
		DFS(u + 1);//����ѡ�� ֱ��u > n 
	}
} 
int main() {
    cin >> n;
    DFS(1);//�����1��ʼ 
    return 0;
}

