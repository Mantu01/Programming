/*
  Given a string s consisting of words and spaces, return the length of the last word in the string.
  A word is a maximal substring consisting of non-space characters only.
*/
class Solution {
  public int lengthOfLastWord(String s) {
    int n=s.length();
    int ans=0;
    int i=n-1;
    while(i>=0 && s.charAt(i)==' ')
      i--;
    while(i>=0 && s.charAt(i--)!=' ')
      ans++;
    return ans;
  }
}