#include<bits/stdc++.h>
using namespace std;
void fun(int* &p){
    *p=50;
}
int main(){
    int x=10;
    int *p=&x;
    fun(p);
    cout<<*p;
}
//if inter the fun function *p.then fun function is no change is's output is:10
//if inter the fun function &p.then fun function is change it's output is NULL;