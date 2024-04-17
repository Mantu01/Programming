// WAP to reverse elements in Kth group of a singly linked list.
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
node* reverseInGroup(node* head,int k){
  node* curr=head;
  node* prev=NULL;
  node* next=NULL;
  int cnt=0;
  while(cnt<k && curr){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    cnt++;
  }
  if(next)
    head->next=reverseInGroup(next,k);
  return prev;
}
int main(){
  int data,k;
  cout<<"Enter the data (Press -1 to stop insertion) :"<<endl;
  cin>>data;
  node* head=NULL;
  node* tail=NULL;
  while(data!=-1){
    insert(data,head,tail);
    cin>>data;
  }
  cout<<"Enter K = ";
  cin>>k;
  cout<<endl<<"Given Linked List :";
  print(head);
  cout<<endl<<"Reversed Linked List in  "<<k<<"'s group :";
  head=reverseInGroup(head,k);
  print(head);
  return 0;
}