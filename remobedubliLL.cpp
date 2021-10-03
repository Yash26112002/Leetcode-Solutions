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
void deletenode(node*&p){
    node*temp=p->next;
    p->data=temp->data;
    p->next=temp->next;
    delete temp;
}
void deletedubli(node*head){
    node*p=head->next;
    while(p->next!=NULL){
        if(p->data==head->data){
            deletenode(p);
        }
        else{
        p=p->next;
        head=head->next;
        }
        
    }
    if(p->data==head->data){
    head->next=NULL;
    delete p;
    }
}
int main(){
    node*head=NULL;
    int n;
    cin>>n;
    while(n!=-1){
        insertattail(n,head,tail);
        cin>>n;
    }
    deletedubli(head);
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }

}
//other soln in O(N);
// ListNode* temp=head;
//         while(temp!=NULL &&temp->next!=NULL){
//             if(temp->val==temp->next->val){
//                 temp->next=temp->next->next;
//             }else{
//                 temp=temp->next;
//             }
//         }
//         return head;