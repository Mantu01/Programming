// WAP to implement a stack using Linked List.
#include<iostream>
using namespace std;
class node{
  public:
    int data;
    node* next;
    
  node(int data){
    this->data=data;
    this->next=NULL;
  }  
};
class stack{
  public:
    node* head;
    int size;
    
  stack(){
    head=NULL;
    size=0;
  }
  void push(int data){
    node* temp=new node(data);
    if(temp){
      temp->next=head;
      head=temp;
      size++;
    }
    else
      cout<<endl<<"Stack Overflow."<<endl;
  }
  void pop(){
    if(size==0){
      cout<<endl<<"Stack Underflow"<<endl;
      return ;
    }
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
    size--;
  }
  int length(){
    return size;
  }
  bool isEmpty(){
    return size==0;
  }
  int top(){
    return head->data;
  }
};
int main(){
    stack st;
    int x;
    cout<<"Enter 1 for push operation or 2 for pop operation : ";
    cin>>x;
    while(x==1 ||x==2){
      if(x==1){
        int data;
        cout<<"Enter data : ";
        cin>>data;
        st.push(data);
      }
      else if(x==2)
        st.pop();
      else
        break;
      if(st.isEmpty())
        cout<<endl<<"Stack is empty."<<endl;
      else{
        cout<<"Top element : "<<st.top()<<endl;
        cout<<"Size of Stack : "<<st.length()<<endl;
      }
      cout<<"Enter 1 for push operation or 2 for pop operation, other to stop opertaion : ";
      cin>>x;
    }
  return 0;
}