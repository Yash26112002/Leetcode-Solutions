#include <iostream>
#include <cmath>
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

node*tail=NULL;

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
node* recursell(node*p){
    node*t1=NULL;
    node*t2=p->next;
    while(t2!=NULL){
        p->next=t1;
        t1=p;
        p=t2;
        t2=t2->next;
    }
    p->next=t1;
    return p;
}
node* midll(node*p){
    node*slow=p;
    node*fast=p;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
bool palindrome(node*head){
    if(head->next==NULL){
        return true;
        }
        else if(head->next->next==NULL){
            if(head->data==head->next->data){
                return true;
            }
            else{
                return false;
            }
        }
    node*mid=midll(head);
    node*x=recursell(mid);
    while(x!=NULL){
        if(x->data==head->data){
            x=x->next;
            head=head->next;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    node*head=NULL;
    int n;
    cin>>n;
    while(n!=-1){
        insertattail(n,head,tail);
        cin>>n;
    }
    // recursell(head);
    // while(head!=NULL){
    //     cout<<head->data<<"->";
    //     head=head->next;
    // }
    if(palindrome(head)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}