#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    	for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int p=nums1.size()/2;
        if(nums1.size()%2==0){
        	double c=nums1[p]+nums1[p-1];
        	double d=c/2;
        	return d;
        }
        else{
        	double d=nums1[p];
        	return d;
        }

}
int main(){
	vector<int>v1;
	vector<int>v2;
	int n;
	for(int i=0;i<3;i++){
		cin>>n;
		v1.push_back(n);
	}
	for(int i=0;i<3;i++){
		cin>>n;
		v2.push_back(n);
	}
	cout<<findMedianSortedArrays(v1,v2);
}