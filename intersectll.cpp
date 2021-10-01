#include <iostream>
using namespace std;
class node{
public:
    int data;
    node*next;
    //constructor
    node(int d){
        data=d;
        next=NULL;
    }
};
node*head1=NULL;
node*tail1=NULL;
node*head2=NULL;
node*tail2=NULL;
void insertattail(int data,node*&head,node*&tail){
    node*n=new node(data);
    if(head==NULL){
        head=n;
        tail=n;
    }
    else{
        tail->next=n;
        tail=n;
    }
}
int intersect(node*head1,node*head2,int l1,int l2){
    if(l1==l2){
        while()
    }
}
int length(node*head){
    if(head==NULL){
        return 0;
    }
    return 1+length(head->next);
}
int main(){
    int n;
    cin>>n;
    while(n!=-1){
        insertattail(n,head1,tail1);
        cin>>n;
    }
    cin>>n;
    while(n!=-1){
        insertattail(n,head2,tail2);
        cin>>n;
    }
    int l1=length(head1);
    int l2=length(head2);
    cout<<intersect(head1,head2,l1,l2);
}