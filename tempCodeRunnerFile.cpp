#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *next;
};
class Stack{
    Node*head;
    int size;
    public:
    stack(){
        size=0;
        head=NULL;
    }
    void push(int element){
        Node*temp=new Node();
        temp->val=element;
        temp->next=head;
        head=temp;
        cout<<"the element is :"<<element<<"pushed into the stack\n";
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty\n";
            return;
        }
        Node*temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        cout<<"ELement poped\n";
        size--;
    }
    int top(){
        if(head==NULL){
            return -1;
        }
        cout<<"The top value is"<<head->val;
        return head->val;
    }
    bool isempty(){
        if(head==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    Stack s;

   

    s.push(7);
    s.push(8);
    s.push(9);
    s.top();
    s.pop();
    s.top();
    return 0;
}