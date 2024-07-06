/*
  Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

  Each row must contain the digits 1-9 without repetition.
  Each column must contain the digits 1-9 without repetition.
  Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

  Note:
    -> A Sudoku board (partially filled) could be valid but is not necessarily solvable.
    ->Only the filled cells need to be validated according to the mentioned rules.

  Constraints:
    -> board.length == 9
    -> board[i].length == 9
    -> board[i][j] is a digit 1-9 or '.'.
*/
var isValidSudoku = function(board) {
  for(let i=0;i<9;i++){
    for(let j=0;j<9;j++){
      if(board[i][j]!=='.'){
        for(let k=0;k<9;k++){
          if(k!==j && board[i][j]===board[i][k])
            return false;
          if(i!==k && board[i][j]===board[k][j])
            return false;
          let a=3*Math.floor(i/3)+Math.floor(k/3);
          let b=3*Math.floor(j/3)+k%3;
          if(a!==i && b!==j && board[i][j]===board[a][b])
            return false;
        }
      }
    }
  }
  return true;
};