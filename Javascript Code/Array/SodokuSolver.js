/*
  Write a program to solve a Sudoku puzzle by filling the empty cells.
  
  A sudoku solution must satisfy all of the following rules:
    -> Each of the digits 1-9 must occur exactly once in each row.
    -> Each of the digits 1-9 must occur exactly once in each column.
    -> Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
  
  The '.' character indicates empty cells.
*/
var isValid=function(board,i,j,c){
  for(let k=0;k<9;k++){
    if(board[i][k]===c)
      return false;
    if(board[k][j]===c)
      return false;
    let a=3*Math.floor(i/3)+Math.floor(k/3);
    let b=3*Math.floor(j/3)+k%3;
    if(board[a][b]===c)
      return false;
  }
  return true;
}
var solve=function(board){
  for(let i=0;i<9;i++){
    for(let j=0;j<9;j++){
      if(board[i][j]==='.'){
        for(let k=1;k<10;k++){
          if(isValid(board,i,j,k.toString())){
            board[i][j]=k.toString();
            if(solve(board))
              return true;
            else
              board[i][j]='.';
          }
        }
        return false;
      }
    }
  }
  return true;
}
var solveSudoku = function(board) {
    solve(board);
};