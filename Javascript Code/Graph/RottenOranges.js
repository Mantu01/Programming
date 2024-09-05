/*
  Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
    0 : Empty cell
    1 : Cells have fresh oranges
    2 : Cells have rotten oranges

  We have to determine what is the earliest time after which all the oranges are rotten. A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. 

  Your Task:
    You don't need to read or print anything, Your task is to complete the function orangesRotting() which takes grid as input parameter and returns the minimum time to rot all the fresh oranges. If not possible returns -1.
 

  Expected Time Complexity: O(n*m)
  Expected Auxiliary Space: O(n*m)

  Constraints:
    1 ≤ n, m ≤ 500
*/
class Solution{
  orangesRotting(grid){
    if(grid.length==0 || grid[0].length==0)
      return 0;
    let head=0,tail=0;
    let q=[];
    let n=grid.length,m=grid[0].length;
    let freshOrange=0;
    for(let i=0;i<n;i++){
      for(let j=0;j<m;j++){
        if(grid[i][j]==2){
          q.push([i,j]);
          tail++;
      }
        else if(grid[i][j]==1)
          freshOrange++;
      }
    }
    if(freshOrange==0)
      return 0;
    let ans=0;
    function BFS(){
      while(head<tail){
        let size=tail-head;
        let hasRotten=false;
        for(let i=0;i<size;i++){
          let [x,y]=q[head++];
         const directions = [[-1, 0], [1, 0], [0, -1], [0, 1]];
          for (const [dx, dy] of directions) {
            const nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] === 1) {
              q.push([nx, ny]);
              tail++;
              grid[nx][ny] = 2;
              hasRotten = true;
              freshOrange--;
            }
          }
        }
        if(hasRotten)
          ans++;
      }
    }
    BFS();
    return freshOrange==0?ans:-1;
  }
}