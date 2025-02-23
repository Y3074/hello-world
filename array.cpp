#include<vector>
#include<iostream>
#include<cstring>
//identity + operation 
using namespace std;

int main()
{
//声明 
//	int n = 7, m = 8;
//	vector<int> num{1,3,5};//初始化元素为1, 3, 5 
//	vector<int> nums(n);//初始化元素为0，长度为7的数组 
//	vector<int> numss(m,2);//初始化元素为2，长度为8的数组 
//	vector<vector<int>> dp;//二维数组dp 
	
//operation
	int n = 10;
	vector<int> nums(n,2);
	cout << nums.empty() << endl;
	cout << nums.size() << endl;// 10
	nums.push_back(20);
	cout << nums.size() << endl;// 11
	
	cout << nums.back() << endl; // 20 最后元素
	nums.pop_back();
	cout << nums.size() << endl; // 10
	
	nums[0] = 11;
	cout << nums[0] << endl;
	
	nums.insert(nums.begin() + 3, 99);//在索引3中插入99 
	cout << nums[3] << endl;
	nums.erase(nums.begin() + 2);//删除索引为2的元素
	
	swap(nums[0], nums[1]);//交换
	
	for(int i = 0; i < nums.size(); i++)//遍历 
	{
		cout << nums[i] << " ";
	}	
	return 0;
}
