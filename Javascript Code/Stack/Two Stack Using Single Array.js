class TwoStack{
  constructor(capacity){
    this.capacity =capacity===undefined?20:capacity;
    this.arr=new Array(this.capacity);
    this.front1=0;
    this.front2=this.capacity-1;
  }
  push1(val){
    if(this.front2-this.front1<0)
      throw new Error("Stack_1 Overflow");
    this.arr[this.front1++]=val;
  }
  push2(val){
    if(this.front2-this.front1<0)
      throw new Error("Stack_2 Overflow");
    this.arr[this.front2--]=val;
  }
  pop1(){
    if(this.front1===0)
      throw new Error("Stack_1 Underflow");
    this.front1--;
  }
  pop2(){
    if(this.front2===this.capacity-1)
      throw new Error("Stack_2 Underflow");
    this.front2++;
  }
  peek1(){
    if(this.front1===0)
      throw new Error("Stack_1 Underflow");
    return this.arr[this.front1-1];
  }
  peek2(){
    if(this.front2===this.capacity-1)
      throw new Error("Stack_2 Underflow");
    return this.arr[this.front1+1];
  }
  size1(){
    return this.front1;
  }
  size2(){
    return this.capacity-this.front2-1;
  }
}