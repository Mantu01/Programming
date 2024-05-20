/*
Implement pow(x, n) % M.
In other words, for a given value of x, n, and M, find  (xn) % M.

Expected Time Complexity: O(log(n))
Expected Space Complexity: O(1)

Constraints:
1 ≤ x, n, M ≤ 109
*/
class Solution{
  public long PowMod(long x, long n, long m){
    if(n==0)
      return 1%m;
    if(n==1)
      return x%m;
    long ans;
    long p=PowMod(x,n/2,m);
    if(n%2==0)
      ans=((p%m)*(p%m))%m;
    else
      ans=((((p%m)*(p%m))%m)*x)%m;
    return ans;
  }
}