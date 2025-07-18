#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
const int n = 100;
void push(int st[],int &top,int val){
    if(top==n-1){
        cout << "Stack Overflown";
    }
    else{
        st[++top]=val;
    }
}
void pop(int st[],int &top){
    if(top<0){
        cout << "Stack Overflown";
    }
    else{
        top--;
    }
}
void display(int st[],int top){
    if(top<0){
        cout << "Stack is empty";
    }
    else{
        for(int i=top;i>=0;i--){
            cout << st[i] << " ";
        }
        cout << endl;
    }
}
#endif
#include"stack.h"
using namespace std;
int main(){
    int st[n];
    int top = -1;
    push(st,top,10);
    push(st,top,20);
    push(st,top,30);
    push(st,top,40);
    push(st,top,50);
    pop(st,top);
    push(st,top,60);
    push(st,top,70);
    display(st,top);
}
