/*
  Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water) and '1's(Land). Find the number of islands.

  Note: An island is either surrounded by water or the boundary of a grid and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.

  Expected Time Complexity: O(n*m)
  Expected Space Complexity: O(n*m)

  Constraints:
    1 ≤ n, m ≤ 500
    0 ≤ grid[i][j] ≤ 1
*/
class Solution {
  numIslands(grid) {
    let ans=0;
    let m=grid.length,n=grid[0].length;
    let visited=Array.from({length:m},()=>new Array(n).fill(false));
    function traverse(i,j){
      visited[i][j]=true;
      let Que=[[i,j]];
      while(Que.length){
        let [x,y]=Que.shift();
        for(let p=x-1;p<=x+1 && p<m;p++){
          for(let q=y-1;q<=y+1 && q<n;q++){
            if(p>=0 && q>=0 && grid[p][q]==1 && !visited[p][q]){
              visited[p][q]=true;
              Que.push([p,q]);
            }
          }
        }
      }
    }
    for(let i=0;i<m;i++){
      for(let j=0;j<n;j++){
        if(grid[i][j]==1 && !visited[i][j]){
          ans++;
          traverse(i,j);
        }
      }
    }
    return ans;
  }
}