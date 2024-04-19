// WAP to delete the middle element of a stack.
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
  cout<<endl;
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
}
void removeMiddle(stack<int>&st,int n){
  if(st.size()==n/2+1){
    cout<<endl<<"Mid Element : "<<st.top()<<endl;
    st.pop();
    return ;
  }
  int a=st.top();
  st.pop();
  removeMiddle(st,n);
  st.push(a);
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
  removeMiddle(st,st.size());
  cout<<endl<<"After deleting middle element :";
  print(st);
  return 0;
}