/**
  Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
  
  Note: One can move from node u to node v only if there's an edge from u to v. Find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the input graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.

  Your task:
    You dont need to read input or print anything. Your task is to complete the function bfsOfGraph() which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns  a list containing the BFS traversal of the graph starting from the 0th vertex from left to right.

  Expected Time Complexity: O(V + E)
  Expected Auxiliary Space: O(V)

  Constraints:
    1 ≤ V, E ≤ 104
*/

class Solution {
  bfsOfGraph(V, adj) {
    let q=[];
    let visited=Array.from({length:V},()=>false);
    q.push(0);
    visited[0]=true;
    let ans=[];
    while(q.length){
      let temp=q.shift();
      ans.push(temp);
      for(let i=0;i<adj[temp].length;i++){
        let ele=adj[temp][i];
        if(!visited[ele]){
          q.push(ele);
          visited[ele]=true;
        }
      }
    }
    return ans;
  }
}