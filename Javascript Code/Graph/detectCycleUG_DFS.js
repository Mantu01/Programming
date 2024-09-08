/*
  Given an undirected graph with V vertices labelled from 0 to V-1 and E edges, check whether it contains any cycle or not. Graph is in the form of adjacency list where adj[i] contains all the nodes ith node is having edge with.

  NOTE: The adjacency list denotes the edges of the graph where edges[i] stores all other vertices to which ith vertex is connected.

  Expected Time Complexity: O(V + E)
  Expected Space Complexity: O(V) 

  Constraints:
  1 ≤ V, E ≤ 10^5

*/
class Solution {
  isCycle(V, adj) {
    let visited=Array.from({length:V},()=>false);
    function DFS(node,parent){
      visited[node]=true;
      for(let i=0;i<adj[node].length;i++){
        let child=adj[node][i];
        if(!visited[child]){
          if(DFS(child,node))
            return true;
        }
        else if(child!=parent)
          return true;
      }
      return false;
    }
    for(let i=0;i<V;i++){
      if(!visited[i] && DFS(i,-1))
        return true;
    }
    return false;
  }
}