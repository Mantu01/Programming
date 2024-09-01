/*
  You are given a connected undirected graph. Perform a Depth First Traversal of the graph.
  
  Note: Use the recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.

  Your task:
    You don't need to read input or print anything. Your task is to complete the function dfsOfGraph() which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns a list containing the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph.

  Expected Time Complexity: O(V + E)
  Expected Auxiliary Space: O(V)

  Constraints:
    1 ≤ V, E ≤ 104
*/

class Solution {
  dfsOfGraph(V, adj){
    let q=[0];
    let visited=new Array(V).fill(false);
    visited[0]=true;
    let ans=[];
    function DFS(){
      while(q.length){
        let temp=q.shift();
        ans.push(temp);
        let ele=adj[temp];
        for(let i=0;i<ele.length;i++){
          if(!visited[ele[i]]){
            q.push(ele[i]);
            visited[ele[i]]=true;
            DFS();
          }
        }
      }
    }
    DFS();
    return ans;
  }
}