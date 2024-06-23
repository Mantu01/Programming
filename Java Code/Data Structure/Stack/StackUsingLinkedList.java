import java.util.Scanner;

public class StackUsingLinkedList{
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
        System.out.println("Size : "+st.size());
      }
      System.out.print("Current Stack :");
      st.print();
      System.out.print("Press 1 for push 2 for pop else to terminate : ");
      x=sc.nextInt();
    }
  }
  static class Node{
    int data;
    Node next;
    
    Node(int data){
      this.data=data;
      this.next=null;
    }
  }
  static class Stack{
    Node top;
    Node head;
    int length;
    
    Stack(){
      top=null;
      length=0;
    }

    void push(int data){
      Node temp=new Node(data);
      temp.next=top;
      top=temp;
      length++;
    }

    void pop(){
      if(top==null){
        System.out.println("Stack underflow.");
        return ;
      }
      top=top.next;
      length--;
    }
    
    boolean isEmpty(){
      return top==null;
    }
    
    int peek(){
      return top.data;
    }
    
    boolean search(int key){
      for(Node i=top;i!=null;i=i.next){
        if(i.data==key)
          return true;
      }
      return false;
    }
    
    int size(){
      return length;
    }
    
    void print(){
      System.out.print("\n{ ");
      for(Node i=top;i!=null;i=i.next)
        System.out.print(i.data+" ");
      System.out.println("}");
    }
  }
}