class Queue{
  constructor(capacity){
    this.capacity = capacity===undefined?50:capacity;
    this.arr=new Array(this.capacity);
    this.f=0;
    this.track=0;
  }
  push(val){
    if(this.track===this.capacity)
      throw new Error("Queue Overflow");
    this.arr[this.track++]=val;
  }
  pop(){
    if(this.f===this.track)
      throw new Error("Queue Underflow");
    this.f++;
  }
  front(){
    if(this.f==this.track)
      throw new Error("Queue Underflow");
    return this.arr[this.f-1];
  }
  size(){
    return this.track-this.f;
  }
  isEmpty(){
    return this.f===this.track
  }
}