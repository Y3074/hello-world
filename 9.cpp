#include<iostream>
using namespace std;
int n, m;
const int N = 25;
int a[N];  // 只需存储当前路径

void dfs(int u, int start) {  // 增加start参数控制起始点
    if (u > m) {
        for (int i = 1; i <= m; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    
    // 从start开始选择，保证升序
    for (int i = start; i <= n; ++i) {
        a[u] = i;
        dfs(u + 1, i + 1);  // 下一层从i+1开始选
    }
}

int main() {
    cin >> n >> m;//将m以参数传入 也能限制数量 
    dfs(1, 1);  // 初始从位置1开始，起始数字1
    return 0;
}
