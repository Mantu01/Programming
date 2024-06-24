/*
  Design a data structure, which represents two stacks using only one array common for both stacks. The data structure should support the following operations:

  push1(NUM) - Push ‘NUM’ into stack1.
  push2(NUM) - Push ‘NUM’ into stack2.
  pop1() - Pop out a top element from stack1 and return popped element, in case of underflow return -1.
  pop2() - Pop out a top element from stack2 and return popped element, in case of   underflow return -1.

  Note:
    1. You are given the size of the array.
    2. You need to perform push and pop operations in such a way that we are able to push elements in the stack until there is some empty space available in the array.
    3. While performing Push operations, do nothing in the situation of the overflow of the stack.

  Constraints:
  -> 0 <= S <= 10^5
  -> 1 <= Q <= 5*10^5
  -> 1 <= type, stackNo <= 2
  -> 0 <= NUM <= 10^9
   
Sample Input :
3 5
1 1 3
1 2 4
1 1 5
2 1
2 2
Sample output :
5
4
*/

public class TwoStack {
	public int[] arr;
	public int top1;
	public int top2;
	public int size;
	
	public TwoStack(int s) {
		this.arr=new int[s];
		this.top1=-1;
		this.top2=s;
		this.size=s;
	}
	public void push1(int num) {
		if(top2-top1<2)
		  return ;
		top1++;
		arr[top1]=num;
	}
	public void push2(int num) {
		if(top2-top1<2)
		  return ;
		top2--;
		arr[top2]=num;
	}
	public int pop1() {
		if(top1==-1)
		  return -1;
		return arr[top1--];
	}
	public int pop2() {
	  if(top2==size)
	    return -1;
	   return arr[top2++];
	}
}