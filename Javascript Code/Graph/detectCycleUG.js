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
    let ans=false;
    function BFS(i){
      let q=[[i,-1]];
      visited[i]=true;
      while(q.length){
        let [node,parent]=q.shift();
        for(let i=0;i<adj[node].length;i++){
          let ele=adj[node][i];
          if(!visited[ele]){
            visited[ele]=true;
            q.push([ele,node]);
          }
          else if(ele!=parent)
            return true;
        }
      }
      return false;
    }
    for(let i=0;i<V;i++){
      if(!visited[i] && BFS(i))
        return true;
    }
    return false;
  }
}