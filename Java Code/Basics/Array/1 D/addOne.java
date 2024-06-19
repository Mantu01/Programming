/*
  You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

  Increment the large integer by one and return the resulting array of digits.

  Input: digits = [1,2,3]
  Output: [1,2,4]
*/
class Solution {
  public int[] plusOne(int[] digits) {
    int n=digits.length;
    int c=1;
    for(int i=n-1;i>=0;i--){
      c+=digits[i];
      digits[i]=c%10;
      c/=10;
    }
    if(c==0)
      return digits;
    else{
      int[] ans=new int[n+1];
      ans[0]=c;
      for(int i=1;i<n+1;i++)
        ans[i]=digits[i-1];
      return ans;
    }
  }
}