// WAP to implement two stack in an array.
#include<iostream>
using namespace std;
class twoStack{
  public:
    int size;
    int t;
    int start;
    int end;
    int* arr;
    
  twoStack(int s){
    size=s;
    start=-1;
    end=s;
    arr=new int[s];
  }
  ~twoStack(){
    delete []arr;
  }
  void push1(int data){
    if(end-start>1){
      start++;
      arr[start]=data;
    }
    else
    cout<<endl<<"Stack Overflow"<<endl;
  }
  void push2(int data){
    if(end-start>1){
      end--;
      arr[end]=data;
    }
    else
    cout<<endl<<"Stack Overflow"<<endl;
  }
  void pop1(){
    if(start==-1)
      cout<<endl<<"Stack Underflow"<<endl;
    else
      start--;
  }
  void pop2(){
    if(end==size)
      cout<<endl<<"Stack Underflow"<<endl;
    else
      end++;
  }
  int top1(){
    return arr[start];
  }
  int top2(){
    return arr[end];
  }
  int length1(){
    return start+1;
  }
  int length2(){
    return size-end;
  }
  bool isEmpty1(){
    return start==-1;
  }
  bool isEmpty2(){
    return end==size;
  }
  int emptySpace(){
    return end-start-1;
  }
};
int main(){
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  twoStack st={n};
  int x;
  cout<<"Enter 1 for opertion on first stack or 2 for second stack else to terminate : ";
  cin>>x;
  while(x==1 || x==2){
    int y;
    cout<<"Enter 1 for push or 2 for pop.";
    cin>>y;
    if(x==1){
      if(y==1){
        int data;
        cout<<"Enter data : ";
        cin>>data;
        st.push1(data);
      }
      else if(y==2)
        st.pop1();
      else
        cout<<"Invalid Option.";
    }
    else if(x==2){
      if(y==1){
        int data;
        cout<<"Enter data : ";
        cin>>data;
        st.push2(data);
      }
      else if(y==2)
        st.pop2();
      else
        cout<<"Invalid Option.";
    }
    cout<<endl<<"Empty Space in array : "<<st.emptySpace()<<endl;
    cout<<endl<<"For first Stack :"<<endl;
    cout<<"Top element : "<<st.top1()<<endl;
    if(st.isEmpty1())
      cout<<"Stack is empty."<<endl;
    else
      cout<<"Size : "<<st.length1()<<endl;
    cout<<endl<<"For Second Stack :"<<endl;
    cout<<"Top element : "<<st.top2()<<endl;
    if(st.isEmpty2())
      cout<<"Stack is empty."<<endl;
    else
      cout<<"Size : "<<st.length2()<<endl;
    cout<<"Enter 1 for opertion on first stack or 2 for second stack else to terminate : ";
    cin>>x;
  }
  return 0;
}