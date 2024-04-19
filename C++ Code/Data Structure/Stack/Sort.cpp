// WAP to sort the elements of a stack.
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
void placeCorrect(stack<int> &st, int a){
  if(st.empty() || a<st.top()){
    st.push(a);
    return ;
  }
  int b=st.top();
  st.pop();
  placeCorrect(st,a);
  st.push(b);
}
void sort(stack<int> &st){
  if(st.empty())
    return ;
  int a=st.top();
  st.pop();
  sort(st);
  placeCorrect(st,a);  
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
  sort(st);
  cout<<endl<<"Sorted Stack :";
  print(st);
  return 0;
}