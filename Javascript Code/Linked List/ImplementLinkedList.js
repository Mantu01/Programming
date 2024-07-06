class Node{
  constructor(data){
    this.data = data;
    this.next=null;
  }
}
class LinkedList{
  constructor(){
    this.head=null;
    this.size=0;
  }
  push(data){
    let temp=new Node(data);
    if(this.head===null)
      this.head=temp;
    else{
      let curr=this.head;
      while(curr.next)
        curr=curr.next;
    curr.next=temp;
    }
    this.size++;
  }
  pop(){
    if(!this.head){
      console.log("List is empty.");
      return ;
    }
    if(!this.head.next){
      this.head=null;
      this.size--;
      return ;
    }
    let curr=this.head;
    while(curr.next.next)
      curr=curr.next;
    curr.next=null;
    this.size--;
  }
  size(){
    return this.size;
  }
  isEmpty(){
    return this.head===null;
  }
  print(){
    let curr=this.head;
    while(curr){
      console.log(curr.data);
      curr=curr.next;
    }
  }
}