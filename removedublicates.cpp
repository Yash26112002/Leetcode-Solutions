#include<iostream>
#include<vector>
using namespace std;
int main () {
	int n;
	cin>>n; 
	vector<int>nums;
    int a;
	for(int i=0; i<n; i++)
	{
		
		cin>>a;
		nums.push_back(a);
    }
	int j=0;
	for(int i=0; i<nums.size(); i++)
	{
		if(nums[i]!=nums[i+1])
		{
			nums[j++]=nums[i];
		}
		
	}
	for(int i=0; i<j; i++)
	{
		cout<<nums[i]<<" ";
	}
	
	return 0;
}