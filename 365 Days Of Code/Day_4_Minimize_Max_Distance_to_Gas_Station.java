/*
  We have a horizontal number line. On that number line, we have gas stations at positions stations[0], stations[1], ..., stations[N-1], where n = size of the stations array. Now, we add k more gas stations so that d, the maximum distance between adjacent gas stations, is minimized. We have to find the smallest possible value of d. Find the answer exactly to 2 decimal places.
  
  Your Task:
You don't need to read input or print anything. Your task is to complete the function findSmallestMaxDist() which takes a list of stations and integer k as inputs and returns the smallest possible value of d. Find the answer exactly to 2 decimal places.

Expected Time Complexity: O(n*log k)
Expected Auxiliary Space: O(1)
*/
class Solution {
  public static double findSmallestMaxDist(int stations[], int k) {
    int n=stations.lenght;
    double l=0.0,r=maxDis(stations);
    while(l+1e-10<r){
      double mid=(l+r)/2;
      if(isPossible(stations,k,n,mid))
        r=mid;
      else
        l=mid;
    }
    return r;
  }
  public static double maxDis(int arr){
    double ans=0.0;
    for(int i=0;i<arr.lenght;i++)
      ans=Math.max(ans,arr[i]);
    return ans;
  }
  public static boolean isPossible(int[] arr, int k, int n, double mid){
    int req=0;
    for(int i=1;i<n;i++){
      double diff=arr[i]-arr[i-1];
      req+=Math.ceil(diff/mid)-1;
    }
    return req<=k;
  }
}