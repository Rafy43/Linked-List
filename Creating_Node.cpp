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
int main(){
    Node a(20),b(30),c(40);

    a.next=&b;
    b.next=&c;
    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    cout<<b.next->val<<endl;
}