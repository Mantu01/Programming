// WAP to find the length of singly linked list.
#include<iostream>
using namespace std;
class node{
  public:
    int data;
    node* next;
  node(int d){
    this->data=d;
    this->next=NULL;
  }
};
void print(node* head){
  if(!head)
    return ;
  cout<<endl;
  while(head){
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}
int getLength(node* head){
  int cnt=0;
  while(head){
   cnt++;
    head=head->next;
  }
  return cnt;
}
void insert(int data, node* &head, node* &tail){
  node* temp=new node(data);
  if(head==NULL){
    head=temp;
    tail =temp;
    return ;
  }
  tail->next=temp;
  tail=temp;
}
int main(){
  int data;
  cout<<"Enter the data (Press -1 to stop insertion) : ";
  cin>>data;
  node* head=NULL;
  node* tail=NULL;
  while(data!=-1){
    insert(data,head,tail);
    cin>>data;
  }
  cout<<endl<<"Given Linked List :";
  print(head);
  cout<<endl<<"Size of Linked List : "<<getLength(head);
  return 0;
}