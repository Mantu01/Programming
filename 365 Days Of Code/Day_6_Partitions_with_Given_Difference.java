/*
Given an array arr, partition it into two subsets(possibly empty) such that each element must belong to only one subset. Let the sum of the elements of these two subsets be S1 and S2. 
Given a difference d, count the number of partitions in which S1 is greater than or equal to S2 and the difference between S1 and S2 is equal to d. Since the answer may be large return it modulo 109 + 7.

Your Task:
You don't have to read input or print anything. Your task is to complete the function countPartitions() which takes the integer n and d and array arr and returns the count of partitions.

Expected Time Complexity: O( n*sum(arr))
Expected Space Complexity: O( sum(arr))

Constraint:
1 <= n <= 500
0 <= d  <= 25000
0 <= arr[i] <= 50

*/

class Solution {
  static int mod = (int) 1e9+7;
  public static int countPartitions(int n, int d, int[] arr){
    int sum = 0;
    for(int num : arr) sum += num;
    if( (sum-d) % 2 == 1) return 0;
    int half = (sum-d)/2;
    if(half < 0) return 0;
    int[][] dp = new int[n][half+1];
    for(int[] temp : dp)
      Arrays.fill(temp, -1);
        return helper(half, 0, n, arr, 0, dp)%mod;
  }
  private static int helper(int sum, int temp, int n, int[] arr, int idx, int[][] dp) {
    if(idx == n || temp > sum) {
      if(sum == temp) return 1;
      return 0;
    } 
    if(dp[idx][temp] != -1) return dp[idx][temp]%mod;
    int ans = 0;
    ans += helper(sum, temp+arr[idx], n, arr, idx+1, dp);
    ans += helper(sum, temp, n, arr, idx+1,dp);
    return dp[idx][temp] = ans%mod;
  }
}