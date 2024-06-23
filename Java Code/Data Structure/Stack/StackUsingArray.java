import java.util.Scanner;

public class StackUsingArray{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    Stack st=new Stack();
    int x=1;
    while(x==1 || x==2){
      if(x==1){
        System.out.print("Enter data to push : ");
        int data=sc.nextInt();
        st.push(data);
      }
      else
        st.pop();
      if(st.isEmpty())
        System.out.println("Stack is empty.");
      else{
        System.out.println("Top element : "+st.peek());
        System.out.println("Size"+st.size());
      }
      System.out.print("Current Stack :");
      st.print();
      System.out.print("Press 1 for push 2 for pop else to terminate : ");
      x=sc.nextInt();
    }
  }
  static class Stack{
    int[] arr;
    int length;
    int top;

    Stack(){
      this.length=15;
      this.arr=new int[15];
      this.top=-1;
    }
    Stack(int length){
      this.length=length;
      this.arr=new int[length];
      this.top=-1;
    }

    void push(int data){
      if(length-top<2){
        System.out.println("Stack is full .");
        return ;
      }
      top++;
      arr[top]=data;
    }

    void pop(){
      if(top==-1){
        System.out.println("Stack underflow.");
        return ;
      }
      top--;
    }
    
    boolean isEmpty(){
      return top==-1;
    }
    
    int peek(){
      return arr[top];
    }
    
    boolean search(int key){
      for(int i=0;i<=top;i++){
        if(arr[i]==key)
          return true;
      }
      return false;
    }
    
    int size(){
      return top+1;
    }
    
    void print(){
      System.out.print("\n{ ");
      for(int i=top;i>=0;i--)
        System.out.print(arr[i]+" ");
      System.out.println("}");
    }
  }
}