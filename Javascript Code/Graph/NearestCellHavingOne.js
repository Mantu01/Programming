/*
  Given a binary grid of n*m. Find the distance of the nearest 1 in the grid for each cell.
  The distance is calculated as |i1  - i2| + |j1 - j2|, where i1, j1 are the row number and column number of the current cell, and i2, j2 are the row number and column number of the nearest cell having value 1. There should be atleast one 1 in the grid.

  Yout Task:
  You don't need to read or print anything, Your task is to complete the function nearest() which takes the grid as an input parameter and returns a matrix of the same dimensions where the value at index (i, j) in the resultant matrix signifies the minimum distance of 1 in the matrix from grid[i][j].

  Expected Time Complexity: O(n*m)
  Expected Auxiliary Space: O(n*m)

  Constraints:
    1 ≤ n, m ≤ 500
*/
class Solution {
  nearest(grid){
    let n=grid.length,m=grid[0].length;
    let ans=Array.from({length:n},()=>Array.from({length:m},()=>Infinity));
    let q=[];
    let head=0,tail=0;
    for(let i=0;i<n;i++){
      for(let j=0;j<m;j++){
        if(grid[i][j]==1){
          ans[i][j]=0;
          q.push([i,j]);
          tail++;
        }
      }
    }
    let dir=[[0,1],[0,-1],[1,0],[-1,0]];
    while(q.length){
      let [x,y]=q[head++];
      for(let [dx,dy] of dir){
        let X=x+dx,Y=y+dy;
        if(X>=0 && Y>=0 && X<n && Y<m && ans[X][Y]>ans[x][y]+1){
          ans[X][Y]=ans[x][y]+1;
          q.push([X,Y]);
          tail++;
        }
      }
    }
    return ans;
	}
}