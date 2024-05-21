/*
  Given a sorted array of unique elements in increasing order, arr[] of n integers, and a value x. Find the K closest elements to x in arr[].
Keep the following points in mind:

If x is present in the array, then it need not be considered.
If two elements have the same difference as x, the greater element is prioritized.
If sufficient elements are not present on the right side, take elements from the left and vice versa.

  Expected Time Complexity: O(log n + k)
  Expected Auxiliary Space: O(k)
*/

class Solution {
  int[] printKClosest(int[] arr, int n, int k, int x) {
    int res[] = new int[k];
    int idx = 0,left = 0,right = n-1,minDiff = Integer.MAX_VALUE;
    while(left<=right){
      int mid = left+(right-left)/2;
      int currDiff = Math.abs(x - arr[mid]);
      if(minDiff > currDiff || (minDiff == currDiff && arr[idx] < arr[mid])){
        minDiff = currDiff;
        idx = mid;
      }
      if(arr[mid]>x)
        right = mid-1;
      else
        left = mid+1;
    }
    left = idx-1;right = idx+1;
    int i = 0;
    if(arr[idx] != x)
      res[i++] = arr[idx];
    while(i<k && left>=0 && right<n){
      if(Math.abs(arr[right]-x)<=Math.abs(arr[left]-x))
        res[i++] = arr[right++];
      else
        res[i++] = arr[left--];
    }
    while(i<k && left<0)
      res[i++] = arr[right++];
    while(i<k && right>=n)
            res[i++] = arr[left--];
    return res;
    }
}