/*
  Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.

  You don't need to read input or print anything. Your task is to complete the function printGraph() which takes the integer V denoting the number of vertices and edges as input parameters and returns the list of list denoting the adjacency list.

  Expected Time Complexity: O(V + E)
  Expected Auxiliary Space: O(V + E)

  Constraints:
    1 ≤ V, E ≤ 10^5
*/
class Solution {
  printGraph(V, edges) {
    let ans=Array.from({length:V},()=>new Array());
    for(let i=0;i<edges.length;i++){
      let nodeOne=edges[i][0];
      let nodeTwo=edges[i][1];
      ans[nodeOne].push(nodeTwo);
      ans[nodeTwo].push(nodeOne);
    }
    return ans;
  }
}