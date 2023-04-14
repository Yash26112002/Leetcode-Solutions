#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* insertinBST(node*root,int data){
	//base case
	if(root==NULL){
		root=new node(data);
		return root;
	}

	//recursive case
	if(data<=root->data){
		root->left=insertinBST(root->left,data);
	}
	else{
		root->right=insertinBST(root->right,data);
	}
	return root;

}
node *buildBST(){
	node*root=NULL;
	int data;
	cin>>data;
	while(data!=-1){
		root=insertinBST(root,data);
		cin>>data;
	}
	return root;
}
bool sumexist(node*root,int t){
	node*a=root;
	node*b=root;
	if(a->data>=t){
		b=b->left;
	}
	else{
		b=b->right;
	}
	int flg=0;
	while(flg==0||(a==NULL&&b==NULL)){
		if(a->data+b->data==t){
			flg=1;
		}
		else if(a->data+b->data>t){
			if(b->left!=NULL){
				b=b->left;
			}
			else{
				a=a->left;
			}
		}
		else{
			if(b->right!=NULL){
				b=b->right;
			}
			else{
				a=a->right;
			}
		}
	}
	return flg==1;
}
int main(){
	node*root=buildBST();
	int target=9;
	if(sumexist(root,target)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}