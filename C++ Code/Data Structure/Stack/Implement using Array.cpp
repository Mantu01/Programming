// WAP to implement a stack using array.
#include<iostream>
using namespace std;
class stack{
  public:
    int size;
    int t;
    int* arr;
    
  stack(){
    this->size=100;
    this->t=-1;
    this->arr=new int[100];
  }
  ~stack(){
    delete []arr;
  }
  void push(int data){
    if(t==size-1){
      cout<<endl<<"The Stack is Overflow."<<endl;
      return ;
    }
    t++;
    arr[t]=data;
  }
  void pop(){
    if(t==-1){
      cout<<endl<<"The Stack is Underflow."<<endl;
      return ;
    }
    t--;
  }
  int top(){
    return arr[t];
  }
  int length(){
    return t+1;
  }
  bool isEmpty(){\
    return t==-1;
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
        cout<<"Size of Stack : "<<st.length()<<endl;
        cout<<"Top element : "<<st.top()<<endl;
      }
      cout<<"Enter 1 for push operation or 2 for pop operation, other to stop opertaion : ";
      cin>>x;
    }
  return 0;
}