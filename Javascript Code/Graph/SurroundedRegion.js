/*
  You are given an m x n matrix board containing letters 'X' and 'O', capture regions that are surrounded:

  Connect: A cell is connected to adjacent cells horizontally or vertically.
  Region: To form a region connect every 'O' cell.
  Surround: The region is surrounded with 'X' cells if you can connect the region with 'X' cells and none of the region cells are on the edge of the board.
  
  A surrounded region is captured by replacing all 'O's with 'X's in the input matrix board.

  Constraints:
    m == board.length
    n == board[i].length
    1 <= m, n <= 200
    board[i][j] is 'X' or 'O'.
*/
var solve = function(board) {
  let m=board.length,n=board[0].length;
  let visited=Array.from({length:m},()=>Array.from({length:n},()=>false));
  let que=[];
  let head=0,tail=0;
  for(let i=0;i<n || i<m;i++){
    if(i<n && board[0][i]==='O'){
      que.push([0,i]);
      tail++;
      visited[0][i]=true;
    }
    if(i<n && board[m-1][i]==='O'){
      que.push([m-1,i]);
      tail++;
      visited[m-1][i]=true;
    }
    if(i<m && board[i][n-1]==='O'){
      que.push([i,n-1]);
      tail++;
      visited[i][n-1]=true;
    }
    if(i<m && board[i][0]==='O'){
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
        if(X>=0 && X<m && Y>=0 && Y<n && board[X][Y]==='O' && !visited[X][Y]){
          que.push([X,Y]);
          tail++;
          visited[X][Y]=true;
        }
      }
    }
  }
  for(let i=0;i<m;i++){
    for(let j=0;j<n;j++){
      if(!visited[i][j] && board[i][j]==='O')
        board[i][j]='X';
    }
  }
  return board;
};