/*
  Given a matrix of order nxm, composed of only 0's and 1's, find the number of 1's in the matrix that are surrounded by an even number (>0) of 0's. The surrounding of a cell in the matrix is defined as the elements above, below, on left, on right as well as the 4 diagonal elements around the cell of the matrix. Hence, the surrounding of any matrix elements is composed of 8 elements. Find the number of such 1's.

  Your Task:
  You don't need to read or print anything. Your task is to complete the function Count() which takes the matrix as input parameter and returns the number of 1's which are surrounded by even number of 0's.

  Expected Time Complexity: O(n * m)
  Expected Space Complexity: O(1)

  Constraints:
    1 <= n, m <= 103
*/
class Solution {
  Count(matrix){
    let m=matrix.length,n=matrix[0].length;
    let ans=0;
    let dir=[[-1,-1],[-1,0],[-1,1],[0,-1],[0,1],[1,-1],[1,0],[1,1]];
    for(let i=0;i<m;i++){
      for(let j=0;j<n;j++){
        if(matrix[i][j]==0)
            continue;
        let cnt=0;
        for(let [dx,dy] of dir){
          let x=i+dx,y=j+dy;
          if(x>=0 && x<m && y>=0 && y<n && matrix[x][y]==0)
            cnt++;
        }
        if(cnt>0 && cnt%2==0)
          ans++;
      }
    }
    return ans;
  }
}