#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int binarySearch(vector<int>&v, int s,
                 int e, int key)
{
    if (s>e)
        return -1;
    int mid=(s+e)/2;
    if (key == v[mid])
        return mid;
    else if(key >v[mid])
        return binarySearch(v, (mid + 1), e, key);
    else{
        return binarySearch(v,s,(mid - 1), key);
    }
}
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
	int pvt=-1;
	while(s<=e){
        if(s==e){
            pvt=-1;
            break;
        }
		int mid=(s+e)/2;
		if(mid <e && v[mid] > v[mid + 1]){
			pvt=mid;
            break;
		}
		else if(v[s] >= v[mid]){
			e=mid-1;
		}
		else{
            s=mid+1;
        }
	}
    cout<<pvt<<endl;
    int ans; 
        if(pvt==-1){
            ans=binarySearch(v,0,n-1,target);
        }
        if(v[pvt]==target){
            ans=pvt;
        }
        else if(v[0]<=target&&v[pvt]>target){
            ans=binarySearch(v,0,pvt-1,target);
        }
        else if(v[pvt+1]<=target&&v[n-1]>=target){
            ans=binarySearch(v,pvt+1,n-1,target);
        }
        else{
            ans=-1;
        }
    cout<<ans;

	
}