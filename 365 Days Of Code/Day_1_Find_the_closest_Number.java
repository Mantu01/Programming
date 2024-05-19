/*
 Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function findClosest() that takes integers n and k and sorted array arr[] of size n as input parameters and return the closest number in the array to k. 

Expected Time Complexity: O(log(n)).
Expected Auxiliary Space: O(1).
 */
class Solution {
  public static int findClosest(int n, int k, int[] arr) {
    int low = 0;
    int high = n - 1;
    int closest = arr[0];
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (Math.abs(arr[mid] - k) < Math.abs(closest - k) || (Math.abs(arr[mid] - k) == Math.abs(closest - k) && arr[mid] > closest))
        closest = arr[mid];
      if (arr[mid] < k)
        low = mid + 1;
      else if (arr[mid] > k)
        high = mid - 1;
      else 
        return arr[mid];
    }
    return closest;
  }
}