/*
  You are given an m x n integer matrix matrix with the following two properties:

  Each row is sorted in non-decreasing order.
  The first integer of each row is greater than the last integer of the previous row.
  Given an integer target, return true if target is in matrix or false otherwise.
  You must write a solution in O(log(m * n)) time complexity.
  
  Constraints:

    -> m == matrix.length
    -> n == matrix[i].length
    -> 1 <= m, n <= 100
    -> -104 <= matrix[i][j], target <= 104
*/

var searchMatrix = function(matrix, target) {
  if(matrix.length===1 && matrix[0].length===1){
    if(matrix[0][0]===target)
      return true;
    else
      return false;
  }
  if(matrix[0][0]>target)
    return false;
  let i=0,j=matrix.length-1;
  while(i<=j){
    let mid=Math.floor((i+j)/2);
    if(matrix[mid][0]===target)
      return true;
    else if(matrix[mid][0]>target)
      j=mid-1;
    else
      i=mid+1;
  }
  if(matrix[0].length===1)
    return false;
  let r=matrix.length===1?0:j;
  i=0,j=matrix[0].length-1;
  while(i<=j){
    let mid=Math.floor((i+j)/2);
    if(matrix[r][mid]===target)
      return true;
    else if(matrix[r][mid]>target)
      j=mid-1;
    else
      i=mid+1;
  }
  return false;
};