/*
  Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

  An input string is valid if:
    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.

*/

class Solution {
  public boolean isValid(String s) {
    int n=s.length();
    if(n==0)
      return true;
    Stack<Character>st=new Stack<>();
    for(int i=0;i<n;i++){
      char c=s.charAt(i);
      if(c=='(' || c=='[' || c=='{')
        st.push(c);
      else{
        if(st.isEmpty())
          return false;
        char temp=st.pop();
        if((c==')' && temp!='(') ||(c==']' && temp!='[') || (c=='}' && temp!='{'))
          return false;
      }
    }
    return st.isEmpty();
  }
}