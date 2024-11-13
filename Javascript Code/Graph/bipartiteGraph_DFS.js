/*
  There is an undirected graph with n nodes, where each node is numbered between 0 and n - 1. You are given a 2D array graph, where graph[u] is an array of nodes that node u is adjacent to. More formally, for each v in graph[u], there is an undirected edge between node u and node v.
  The graph has the following properties:
    -> There are no self-edges (graph[u] does not contain u).
    -> There are no parallel edges (graph[u] does not contain duplicate values).
    -> If v is in graph[u], then u is in graph[v] (the graph is undirected).
    -> The graph may not be connected, meaning there may be two nodes u and v such that there is no path between them.
  
    A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.

  Return true if and only if it is bipartite.

  Expected Time Complexity: O(V + E)
  Expected Space Complexity: O(V)
*/

class Solution {
    
  isBipartite(V,adj){
    const marked=Array.from({length:V},()=>0); 
    function DFS(n,color){
      marked[n]=color;
      for(let neighbor of adj[n]){
        if(marked[neighbor]==0 && !DFS(neighbor,3-color))
          return false;
        else if(marked[neighbor]==color)
          return false;
      }
      return true;
    }
    for(let i=0;i<V;i++){
      if(marked[i]==0 && !DFS(i,1))
        return false;
    }
    return true;
  }
}