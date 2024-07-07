class Node{
  constructor(data){
    this.data=data===undefined?0:data;
    this.next=null;
  }
}
class Stack{
  constructor(){
    this.head=null;
    this.size=0;
  }
  push(data){
    let temp=new Node(data);
    temp.next=this.head;
    this.head=temp;
    this.size++;
  }
  pop(){
    if(this.size===0)
      throw new Error("Stack underflow");
    this.head=this.head.next;
    this.size--;
  }
  peek(){
    if(this.size===0)
      throw new Error("Stack underflow");
    return this.head.data;
  }
  isEmpty(){
    return this.size===0;
  }
  Size(){
    return this.size;
  }
  isPresent(val){
    for(let i=this.head;i!==null;i=i.next){
      if(i.data===val)
        return true;
    }
    return false;
  }
}