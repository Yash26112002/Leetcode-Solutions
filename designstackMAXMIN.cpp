//design stack class containing push,pop,top,get_max and get_min
#include <iostream>
#include<vector>
using namespace std;
class Stack{
private:
	vector<int>v;
	vector<int>min ;
	vector<int>max;
public:
	void push(int data){
		v.push_back(data);
		if(min.size()==0&&max.size()==0){
			min.push_back(data);
			max.push_back(*data);
		}
		else{
			if(data>=max[max.size()-1]){
				max.push_back(data);
				min.push_back(min[min.size()-1]);
			}
			else if(data<=min[min.size()-1]){
				min.push_back(data);
				max.push_back(max[max.size()-1]);
			}
            else{
                max.push_back(max[max.size()-1]);
                min.push_back(min[min.size()-1]);
            }
		}
	}
	void pop(){
		v.pop_back();
        min.pop_back();
        max.pop_back();
	}
	int top(){
		return v[v.size()-1];
	}
	int get_max(){
		return max[max.size()-1];
	}
	int get_min(){
		return min[min.size()-1];
	}
};
int main(){
	Stack s;
	s.push(10);
	s.push(3);
	s.push(300);
	s.push(4);
	s.push(51);
    s.push(2);
    s.pop();
	cout<<"top element --> "<<s.top()<<endl;
	cout<<"max element --> "<<s.get_max()<<endl;
	cout<<"min element --> "<<s.get_min()<<endl;
}