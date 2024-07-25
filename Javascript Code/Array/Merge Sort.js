/*
Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

Constraints:
	-> 1 <= nums.length <= 5 * 104
	-> -5 * 104 <= nums[i] <= 5 * 104
*/
var sortArray = function(nums) {
  mergeSort(nums,0,nums.length-1);
  return nums;
};
function mergeSort(nums,i,j){
  if(i>=j)
    return ;
  let mid=parseInt(i+(j-i)/2);
  mergeSort(nums,i,mid);
  mergeSort(nums,mid+1,j);
  merge(nums,i,mid,j);
}
function merge(nums,i,mid,j){
  let k=mid+1;
  let arr=[];
  while(i<=mid && k<=j){
    if(nums[i]<nums[k])
      arr.push(nums[i++]);
    else
      arr.push(nums[k++]);
  }
  while(i<=mid)
    arr.push(nums[i++]);
  while(k<=j)
    arr.push(nums[k++]);
  for(let m=arr.length-1;m>=0;m--)
    nums[j--]=arr[m];
}