/**
  Given an adjacency list for a Directed Acyclic Graph (DAG) where adj[u] contains a list of all vertices v such that there exists a directed edge u -> v. Return topological sort for the given graph.

  Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge u -> v, vertex u comes before v in the ordering.

  Note: As there are multiple Topological orders possible, you may return any of them. If your returned Topological sort is correct then the output will be 1 else 0.

  Constraints:
    2  ≤  V  ≤  10^3
    1  ≤  E  ≤  (V * (V - 1)) / 2

  Expected Complexities
    Time Complexity: O(V + E)
    Auxiliary Space: O(V)
*/

// Using DFS algorithm

class Solution {
  topologicalSort(adj) {
    let V=adj.length;
    let st=[];
    let visited=Array.from({length:V},()=>false);

    function solveByDFS(n){
      visited[n]=true;
      for(let neighbor of adj[n]){
        if(!visited[neighbor])
          solveByDFS(neighbor);
      }
      st.push(n);
    }

    for(let i=0;i<V;i++){
      if(!visited[i])
        solveByDFS(i);
    }

    return st.reverse();

  }
}

// Using BFS algorithm

class Solution {
  topologicalSort(adj) {
    let V=adj.length;
    let inDegree=Array(V).fill(0);
    let q=[];
    let topo=[];
    let head=0,tail=0;
    for(let i=0;i<V;i++){
      for(let neighbor of adj[i])
        inDegree[neighbor]++;
    }
    for(let i=0;i<V;i++){
      if(inDegree[i]===0){
        q.push(i);
        tail++;
      }
    }
    while(head<tail){
      let temp=q[head++];
      topo.push(temp);
      for(let it of adj[temp]){
        inDegree[it]--;
        if(inDegree[it]===0){
          q.push(it);
          tail++;
        }
      }
    }
    return topo;
  }
}