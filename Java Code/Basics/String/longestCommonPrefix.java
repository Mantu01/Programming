/*
  Write a function to find the longest common prefix string amongst an array of strings.
  If there is no common prefix, return an empty string "".
  
  Constraints:

  -> 1 <= strs.length <= 200
  -> 0 <= strs[i].length <= 200
  -> strs[i] consists of only lowercase English letters.
*/
class Solution {
  public String longestCommonPrefix(String[] strs) {
    int n=strs.length;
    String ans="";
    ans+=strs[0];
    for(int i=1;i<n;i++){
      String temp1=strs[i];
      String temp2="";
      int j=0;
      while(j<ans.length() && j<temp1.length()){
        if(ans.charAt(j)==temp1.charAt(j))
          temp2+=ans.charAt(j);
        else
          break;
        j++;
      }
      ans=temp2;
    }
    return ans;
  }
}