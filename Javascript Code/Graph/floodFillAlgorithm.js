/*
  An image is represented by a 2-D array of integers, each integer representing the pixel value of the image.

  Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

  To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on. Replace the color of all of the aforementioned pixels with the newColor.

  Expected Time Compelxity: O(n*m)
  Expected Space Complexity: O(n*m)
 
  Constraints:
    1 <= n <= m <= 100
    0 <= pixel values <= 10
    0 <= sr <= (n-1)
    0 <= sc <= (m-1)
*/
class Solution {
  floodFill(arr,n, m, sr, sc, newColor) {
    let ini=arr[sr][sc];
    let visited=Array.from({length:n},()=> Array.from({length:m},()=>false));
    function DFS(a,b){
      let q=[[a,b]];
      while(q.length){
        for(let i=0;i<q.length;i++){
          let [x,y]=q.shift();
          if(arr[x][y]==ini && !visited[x][y]){
            arr[x][y]=newColor;
            visited[x][y]=true;
            if(x-1>=0 && arr[x-1][y]==ini)
              q.push([x-1,y]);
            if(x+1<n && arr[x+1][y]==ini)
              q.push([x+1,y]);
            if(y-1>=0 && arr[x][y-1]==ini)
              q.push([x,y-1]);
            if(y+1<m && arr[x][y+1]==ini)
              q.push([x,y+1]);
          }
        }
      }
    }
    DFS(sr,sc);
    return arr;
  }
}