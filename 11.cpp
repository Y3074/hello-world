#include <iostream>
#include <algorithm>
using namespace std;

int N;
int cnt = 0;

long long to_num(int num[], int start, int end) {
    long long res = 0;
    for (int i = start; i <= end; ++i) {
        res = res * 10 + num[i];
    }
    return res;
}

int main() {
    cin >> N;
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    do {
        for (int i = 0; i <= 6; ++i) { // a��λ������1λ��ʣ������2λ��b��c
            for (int j = i + 1; j <= 7; ++j) { // j�ָ��b��c���ٸ�1λ
                long long a = to_num(num, 0, i);
                long long b = to_num(num, i + 1, j);
                long long c = to_num(num, j + 1, 8);
                if (b % c == 0 && a + b / c == N) {
                    cnt++;
                }
            }
        }
    } while (next_permutation(num, num + 9));
    cout << cnt << endl;
    return 0;
}
