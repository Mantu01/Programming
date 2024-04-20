#include<iostream>
using namespace std;
class queue{
  public:
    int start;
    int end;
    int* arr;

  queue(){
    start=0;
    end=0;
    arr=new int[100];
  }

  ~queue(){
    delete []arr;
  }
  void push(int data){
    arr[end]=data;
    end++;
  }
  void pop(){
    if(start==end)
      cout<<endl<<"Queue Underflow"<<endl;
    else
      start++;
  }
  bool isEmpty(){
    return start==end;
  }
  int front(){
    return arr[start];
  }
  int length(){
    return end-start;
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
    else{
      cout<<endl<<"Front element : "<<q.front();
      cout<<endl<<"Size of queue : "<<q.length()<<endl;
    }
    cout<<endl<<"Enter 1 for push or 2 for pop or others for stoping operation : ";
    cin>>x;
  }
  return 0;
}