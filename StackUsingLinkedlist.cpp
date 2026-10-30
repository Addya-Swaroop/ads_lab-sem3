#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
   int data;
   Node* next;
   
   Node(int value){
      data=value;
      next=nullptr;
   }
};
class Stack{
    Node* top;
    int size;
    public:
    Stack(){
        top=nullptr;
        size=0;
    }
    void push(int y){
        
        Node*temp=new Node(y);
        if(temp==nullptr){
            cout<<"Stack Overflow\n";
        }
        temp->next=top;
        top=temp;
        cout<<"pushed element "<<top->data<<endl;
        size++;
    }
    void pop(){
        if(top==nullptr){
            cout<<"Stack Underflow\n";
        }
        cout<<"Popped element: "<<top->data<<endl;
        top=top->next;
        
        size--;
    }
    int peek(){
        if(top==nullptr){
            cout<<"Stack Underflow\n";
            return -1;
        }
        
        return top->data;
        
    }
    bool isEmpty(){
        return top==nullptr;
    }
    int isSize(){
        return size;
    }
    void traverse(){
        Node*temp=top;
        cout<<"Traverse list: "<<endl;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            if(temp->next==nullptr){
                cout<<"Null"<<endl;
            }
            temp=temp->next;
        }
    }
};
int main() {
Stack s;
s.push(10);
s.push(20);
s.push(30);
s.pop();
cout<<"Popped element: "<<s.peek()<<endl;
s.push(40);
s.push(50);
cout<<"is stack Empty: "<<s.isEmpty()<<endl;
cout<<"The Size of Stack is: "<<s.isSize()<<endl;
s.traverse();
cout<<"Name:AARAV CHAUHAN\nROLL NO.:2503201000008";
}