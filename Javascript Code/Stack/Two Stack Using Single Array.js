class TwoStack{
  constructor(capacity){
    this.capacity =capacity===undefined?20:capacity;
    this.arr=new Array(this.capacity);
    this.top1=0;
    this.top2=this.capacity-1;
  }
  push1(val){
    if(this.top2-this.top1<0)
      throw new Error("Stack_1 Overflow");
    this.arr[this.top1++]=val;
  }
  push2(val){
    if(this.top2-this.top1<0)
      throw new Error("Stack_2 Overflow");
    this.arr[this.top2--]=val;
  }
  pop1(){
    if(this.top1===0)
      throw new Error("Stack_1 Underflow");
    this.top1--;
  }
  pop2(){
    if(this.top2===this.capacity-1)
      throw new Error("Stack_2 Underflow");
    this.top2++;
  }
  peek1(){
    if(this.top1===0)
      throw new Error("Stack_1 Underflow");
    return this.arr[this.top1-1];
  }
  peek2(){
    if(this.top2===this.capacity-1)
      throw new Error("Stack_2 Underflow");
    return this.arr[this.top2+1];
  }
  size1(){
    return this.top1;
  } 
  size2(){
    return this.capacity-this.top2-1;
  }
}