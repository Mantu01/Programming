/*
  Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.
  The graph is represented as an adjacency list, where adj[i] contains a list of vertices that are directly reachable from vertex i. Specifically, adj[i][j] represents an edge from vertex i to vertex j

  Constraints:
    1 ≤ V, E ≤ 10^5
*/

class Solution {
 isCyclic(V, adj) {
    let inDegree = Array(V).fill(0);
    for(let i=0;i<V;i++){
      for(let neighbor of adj[i])
        inDegree[neighbor]++;
    }
    let queue=[];
    let head=0,tail=0;
    for(let i=0;i<V;i++){
      if(inDegree[i]===0){
        queue.push(i);
        tail++;
      }
    }
    let topo=[];
    while(head<tail){
      let temp=queue[head++];
      topo.push(temp);
      for(let it of adj[temp]){
        inDegree[it]--;
        if(inDegree[it]===0){
          queue.push(it);
          tail++;
        }
      }
    }
    return topo.length!==V;
  }
}