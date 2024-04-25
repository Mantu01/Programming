// WAP to implement a queue using linked list.
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
class queue{
  public:
    int size;
    node* start;
    node* end;
    
  queue(){
    start=NULL;
    end=NULL;
    size=0;
  }
  void push(int data){
    node* temp=new node(data);
    if(end){
      end->next=temp;
      end=end->next;
    }
    else{
      end=temp;
      start=temp;
    }
    size++;
  }
  void pop(){
    node* temp=start;
    if(start!=end){
      start=start->next;
      size--;
    }
    else if(start==end && start){
      start=NULL;
      end=NULL;
      size=0;
    }
    else
      cout<<endl<<"Queue Underflow"<<endl;
    if(temp)
      delete temp;  
  }
  bool isEmpty(){
    return size==0;
  }
  int front(){
    return start->data;
  }
  int length(){
    return size;
  }
};
int main(){
  queue q;
  int x;
  cout<<"Enter 1 for push or 2 for pop or others for stoping operation : ";
  cin>>x;
  while(x==1 || x==2){
    if(x==1){
      int data;
      cout<<"Enter data : ";
      cin>>data;
      q.push(data);
    }
    else
      q.pop();
    if(q.isEmpty())
      cout<<endl<<"Queue is empty.";  
    else
      cout<<endl<<"Front element : "<<q.front();
    cout<<endl<<"Size of queue : "<<q.length()<<endl;
    cout<<endl<<"Enter 1 for push or 2 for pop or others for stoping operation : ";
    cin>>x;
  }
  return 0;
}