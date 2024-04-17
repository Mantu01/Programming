// WAP to insert node at Kth position in singly linked list.
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
void insert(int data, int p, node* &head){
  node* temp=new node(data);
  if(p-1>getLength(head) || p<1){
    cout<<endl<<p<<" position doesn't exist in given LL."<<endl;
    return ;
  }
  if(p==1){
    temp->next=head;
    head=temp;
    return ;
  }
  node* curr=head;
  while((p--)>2 && curr)
    curr=curr->next;
  temp->next=curr->next;
  curr->next=temp;
}
int main(){
  char x;
  cout<<"Press Y/y for insertion operation else to terminate execution : ";
  cin>>x;
  node* head=NULL;
  cout<<endl<<"Size of current linked list : "<<getLength(head)<<endl<<endl;
  while(x=='y' || x=='Y'){
    int data,p;
    cout<<"Enter element's data to insert : ";
    cin>>data;
    cout<<"Enter the position to insett the element : ";
    cin>>p;
    insert(data,p,head);
    cout<<"Current Linked List :";
    print(head);
    cout<<endl<<"Size of current linked list : "<<getLength(head)<<endl<<endl;
    cout<<"Press Y/y for insertion operation else to terminate execution : ";
    cin>>x;
  }
  return 0;
}