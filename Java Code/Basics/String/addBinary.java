/*
  Given two binary strings a and b, return their sum as a binary string.
  
  Input: a = "11", b = "1"
  Output: "100"
*/
class Solution {
  public String addBinary(String a, String b) {
    StringBuilder str=new StringBuilder();
    int n=a.length()-1,m=b.length()-1;
    int c=0;
    while(n>=0 && m>=0){
      int x=a.charAt(n)-'0';
      int y=b.charAt(m)-'0';
      int sum=c+x+y;
      str.insert(0,sum%2);
      c=sum/2;
      n--;
      m--;
    }
    while(n>=0){
      int x=a.charAt(n)-'0';
      int sum=c+x;
      str.insert(0,sum%2);
      c=sum/2;
      n--;
    }
    while(m>=0){
      int y=b.charAt(m)-'0';
      int sum=c+y;
      str.insert(0,sum%2);
      c=sum/2;
      m--;
    }
    if(c!=0)
      str.insert(0,c);
    return str.toString();
  }
}