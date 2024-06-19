/*
  Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
  You must not use any built-in exponent function or operator.
  For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/
class Solution {
  public int mySqrt(int x) {
    if(x==1 || x==0)
      return x;
    int i=1,j=x/2;
    int ans=0;
    while(i<=j){
      int mid=i+(j-i)/2;
      if(mid>46340 || mid*mid>x)
        j=mid-1;
      else if(mid*mid<x){
        ans=mid;
        i=mid+1;
      }
      else
        return mid;
    }
    return ans;
  }
}