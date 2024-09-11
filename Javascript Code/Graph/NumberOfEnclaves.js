/*
  You are given an m x n binary matrix grid, where 0 represents a sea cell and 1 represents a land cell.
  A move consists of walking from one land cell to another adjacent (4-directionally) land cell or walking off the boundary of the grid.
  Return the number of land cells in grid for which we cannot walk off the boundary of the grid in any number of moves.

  Constraints:
    m == grid.length
    n == grid[i].length
    1 <= m, n <= 500
    grid[i][j] is either 0 or 1.
*/
var numEnclaves = function(grid) {
  let m=grid.length,n=grid[0].length;
  let visited=Array.from({length:m},()=>Array.from({length:n},()=>false));
  let que=[];
  let head=0,tail=0;
  for(let i=0;i<n || i<m;i++){
    if(i<n && grid[0][i]==1){
      que.push([0,i]);
      tail++;
      visited[0][i]=true;
    }
    if(i<n && grid[m-1][i]===1){
      que.push([m-1,i]);
      tail++;
      visited[m-1][i]=true;
    }
    if(i<m && grid[i][n-1]==1){
      que.push([i,n-1]);
      tail++;
      visited[i][n-1]=true;
    }
    if(i<m && grid[i][0]==1){
      que.push([i,0]);
      tail++;
      visited[i][0]=true;
    }
  }
  let dir=[[1,0],[-1,0],[0,1],[0,-1]];
  while(head<tail){
    let size=tail-head;
    for(let i=0;i<size;i++){
      let [x,y]=que[head++];
      for(let [dx,dy] of dir){
        let X=x+dx,Y=y+dy;
        if(X>=0 && X<m && Y>=0 && Y<n && grid[X][Y]==1 && !visited[X][Y]){
          que.push([X,Y]);
          tail++;
          visited[X][Y]=true;
        }
      }
    }
  }
  let ans=0;
  for(let i=0;i<m;i++){
    for(let j=0;j<n;j++){
      if(!visited[i][j] && grid[i][j]==1)
        ans++;
    }
  }
  return ans;
};