#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	int target;
	cin>>target;
	int s=0,e=n-1;
	while(s<e){
		int mid=(s+e)/2;
		if(mid==target){
			
		}
		else if(v[s] >= v[mid]){
			e=mid-1;
		}
		else{
            s=mid+1;
        }
	}
}