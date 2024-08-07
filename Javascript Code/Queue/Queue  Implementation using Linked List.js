class Node{
  constructor(data){
    this.data = data===undefined?0:data;
    this.next=null;
  }
}
class Queue{
  constructor(){
    this.head=null;
    this.track=null;
    this.size=0;
  }
  push(val){
    const temp=new Node(val);
    if(this.track===null){
      this.head=temp;
      this.track=temp;
      this.size++;
      return;
    }
    this.track.next=temp;
    this.track=temp;
    this.size++;
  }
  pop(){
    if(!this.head)
      throw new Error("Queue Underflow");
    this.head=this.head.next;
    if(!this.head)
      this.track=null;
    this.size--;
  }
  front(){
    if(this.head===null)
      throw new Error("Queue is empty.");
    return this.head.data;
  }
  Size(){
    return this.size;
  }
  isEmpty(){
    return this.head===null;
  }
}
let a=new Queue();
a.push(2);
a.push(5);
console.log(a.front());