// WAP to reverse a stack.
#include<iostream>
#include<stack>
using namespace std;
void placeAtBottom(stack<int> &st, int a){
  if(st.empty()){
    st.push(a);
    return ;
  }
  int b=st.top();
  st.pop();
  placeAtBottom(st,a);
  st.push(b);
}
void reverse(stack<int> &st){
  if(st.empty())
    return ;
  int a=st.top();
  st.pop();
  reverse(st);
  placeAtBottom(st,a);  
}
void print(stack<int> st){
  cout<<endl;
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
}
int main(){
  stack<int>st;
  int data;
  cout<<"Press (-1) to stop pushing elements\nEnter all data : ";
  cin>>data;
  while(data!=-1){
    st.push(data);
    cin>>data;
  }
  cout<<"Original Stack :";
  print(st);
  cout<<endl<<"Reversed Stack :";
  reverse(st);
  print(st);
  return 0;
}