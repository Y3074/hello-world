#include<iostream>
using namespace std;
int n, m;
const int N = 25;
int a[N];  // ֻ��洢��ǰ·��

void dfs(int u, int start) {  // ����start����������ʼ��
    if (u > m) {
        for (int i = 1; i <= m; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    
    // ��start��ʼѡ�񣬱�֤����
    for (int i = start; i <= n; ++i) {
        a[u] = i;
        dfs(u + 1, i + 1);  // ��һ���i+1��ʼѡ
    }
}

int main() {
    cin >> n >> m;//��m�Բ������� Ҳ���������� 
    dfs(1, 1);  // ��ʼ��λ��1��ʼ����ʼ����1
    return 0;
}
