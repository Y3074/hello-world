#include<vector>
#include<iostream>
#include<cstring>
//identity + operation 
using namespace std;

int main()
{
//���� 
//	int n = 7, m = 8;
//	vector<int> num{1,3,5};//��ʼ��Ԫ��Ϊ1, 3, 5 
//	vector<int> nums(n);//��ʼ��Ԫ��Ϊ0������Ϊ7������ 
//	vector<int> numss(m,2);//��ʼ��Ԫ��Ϊ2������Ϊ8������ 
//	vector<vector<int>> dp;//��ά����dp 
	
//operation
	int n = 10;
	vector<int> nums(n,2);
	cout << nums.empty() << endl;
	cout << nums.size() << endl;// 10
	nums.push_back(20);
	cout << nums.size() << endl;// 11
	
	cout << nums.back() << endl; // 20 ���Ԫ��
	nums.pop_back();
	cout << nums.size() << endl; // 10
	
	nums[0] = 11;
	cout << nums[0] << endl;
	
	nums.insert(nums.begin() + 3, 99);//������3�в���99 
	cout << nums[3] << endl;
	nums.erase(nums.begin() + 2);//ɾ������Ϊ2��Ԫ��
	
	swap(nums[0], nums[1]);//����
	
	for(int i = 0; i < nums.size(); i++)//���� 
	{
		cout << nums[i] << " ";
	}	
	return 0;
}
