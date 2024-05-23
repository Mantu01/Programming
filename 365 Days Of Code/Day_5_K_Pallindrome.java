/*
  Given a string str of length n, find if the string is K-Palindrome or not. A k-palindrome string transforms into a palindrome on removing at most k characters from it.
  
  Your Task:
You do not need to read input or print anything. Your task is to complete the function kPalindrome() which takes string str, n, and k as input parameters and returns 1 if str is a K-palindrome else returns 0.


Expected Time Complexity: O(n*n)
Expected Auxiliary Space: O(n*n)


Constraints:
1 ≤ n, k ≤ 10^3

*/

class Solution {
  public int kPalindrome(String str, int n, int k) {
    int dp[][] = new int[n][n];
    for(int i = 0; i < n; i++)
      dp[i][i] = 0;
    for(int len = 2; len <= n; len++) {
      for(int i = 0; i < n - len + 1; i++) {
        int j = i + len - 1;
        if(str.charAt(i) == str.charAt(j))
          dp[i][j] = dp[i + 1][j - 1];
        else
          dp[i][j] = 1 + Math.min(dp[i + 1][j], dp[i][j - 1]);
      }
    }
    return dp[0][n - 1] <= k ? 1 : 0;
  }
}