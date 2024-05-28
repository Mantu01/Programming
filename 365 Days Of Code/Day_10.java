class Solution {
  static  int dp[][];
    public static int minn(int i,int w,int cost[]){
        if(w==0)
            return 0;
        if(i>cost.length||w<0)
            return  100000000;
        if(dp[i][w]!=-1)
            return dp[i][w];
        if(i<=w){
            int a=minn(i,w-(i),cost)+cost[i-1];
            int b=minn(i+1,w,cost);
            return dp[i][w]=Math.min(a,b);
        }else
        return dp[i][w]=minn(i+1,w,cost);
    }
    public static int minimumCost(int n, int w, int[] cost) {
        dp=new int[n+1][w+1];
        for(int i=0;i<=n;i++)
            Arrays.fill(dp[i],-1);
        return minn(1,w,cost);
    }
}