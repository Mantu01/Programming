/**
  You are given an integer array nums of length n and a 2D array queries, where queries[i] = [li, ri].

  For each queries[i]:

  Select a subset of indices within the range [li, ri] in nums.
  Decrement the values at the selected indices by 1.
  A Zero Array is an array where all elements are equal to 0.

  Return true if it is possible to transform nums into a Zero Array after processing all the queries sequentially, otherwise return false.

  A subset of an array is a selection of elements (possibly none) of the array.

  Constraints:

  -> 1 <= nums.length <= 105
  -> 0 <= nums[i] <= 105
  -> 1 <= queries.length <= 105
  -> queries[i].length == 2
  -> 0 <= li <= ri < nums.length

 */

var isZeroArray = function(nums, queries) {
  let numsLength=nums.length;
  let queLength=queries.length;
  let diff=Array(numsLength+1).fill(0);
  for(let i=0;i<queLength;i++){
    let s=queries[i][0];
    let e=queries[i][1];
    diff[s]--;
    diff[e+1]++;
  }
  let cs=0;         // Cumulative sum
  for(let i=0;i<numsLength;i++){
    cs+=diff[i];
    if(nums[i]+cs>0)
      return false;
  }
  return true;
};