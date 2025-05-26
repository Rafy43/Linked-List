#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void Delet_head(Node* &head){
    Node* deletNode=head;
    head=head->next;
    delete deletNode;
}

void printing_linked_list(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}

int main(){
    Node* head =new Node(20);
    Node* a=new Node(30);
    Node* b=new Node(40);
    Node* c=new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;

    Delet_head(head);
    Delet_head(head);
    printing_linked_list(head);
}