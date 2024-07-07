class Stack{
  constructor(capacity){
    this.capacity=capacity===undefined?10:capacity;
    this.arr=new Array(this.capacity);
    this.size=0;
  }
  push(data){
    if(this.size===this.capacity)
      throw new Error("Stack overflow");
    this.arr[this.size]=data;
    this.size++;
  }
  pop(){
    if(this.size===0)
      throw new Error("Stack underflow");
    this.size--;
  }
  peek(){
    if(this.size===0)
      throw new Error("Stack underflow");
    return this.arr[this.size-1];
  }
  isEmpty(){
    return this.size===0;
  }
  Size(){
    return this.size;
  }
  isPresent(val){
    for(let i=0;i<this.size;i++){
      if(this.arr[i]===val)
        return true;
    }
    return false;
  }
}