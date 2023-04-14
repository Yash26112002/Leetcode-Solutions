#include<iostream>
#include <stack>
#include <cstring>
#include <vector>
using namespace std;
int main(){
	vector<string>v={"d1/","d2/","../","d21/","./"};
	stack<string>p;
	for(int i=0;i<v.size();i++){
		if(v[i]=="../"){
			p.pop();
		}
		else if(v[i]=="./"){
			continue;
		}
		else{
			p.push(v[i]);
		}
	}
	return p.size();

}