#include <iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>nums;
	int n;
	for(int i=0;i<3;i++){
		cin>>n;
		nums.push_back(n);
	}
	int target;
	cin>>target;
	for(int i=0;i<nums.size();i++){
		for(int j=i+1;j<nums.size();j++){
			if(nums[i]+nums[j]==target){
				cout<<"["<<i<<","<<j<<"]";
			}
		}
	}
}