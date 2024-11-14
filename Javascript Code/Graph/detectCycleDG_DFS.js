/*
  Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.
  The graph is represented as an adjacency list, where adj[i] contains a list of vertices that are directly reachable from vertex i. Specifically, adj[i][j] represents an edge from vertex i to vertex j

  Constraints:
    1 ≤ V, E ≤ 10^5
*/

class Solution {
 isCyclic(V, adj) {
    let visited = Array.from({ length: V }, () => false);
    let pathVisited = Array.from({ length: V }, () => false);
    function solveByDFS(n){
      visited[n] = true;
      pathVisited[n] = true;
      for(let neighbor of adj[n]){
        if(!visited[neighbor] && solveByDFS(neighbor))
          return true;
        else if(pathVisited[neighbor])
          return true;
      }
      pathVisited[n] = false;
    }
    for(let i=0;i<V;i++){
      if(!visited[i] && solveByDFS(i))
        return true;
    }
    return false;
  }
}