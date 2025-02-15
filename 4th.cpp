#include<iostream>
using namespace std;
//int n;
//µÝ¹é 
//int fibonacci(int n) {
//    if (n == 1) {
//        return 0;
//    }
//	else if(n == 2)
//	{
//		return 1;
//	}
//	else {
//        return fibonacci(n - 1) + fibonacci(n - 2);
//    }
//}
//int main()
//{
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//		printf("%d ",fibonacci(i));
//	return 0;
// } 
//µÝÍÆ 
int main()
{
	int n;
	cin >> n;
	int f[46];
	f[1] = 0, f[2] = 1;
	for(int i = 3; i <= n; i++) f[i] = f[i-1] + f[i-2];
	for(int i = 1; i <= n; i++)cout << f[i] << " ";
	return 0;
 } 
