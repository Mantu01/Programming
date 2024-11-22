/**
  You are given an Undirected Graph having unit weight of the edges, find the shortest path from src to all the vertex and if it is unreachable to reach any vertex, then return -1 for that vertex.

  Constraint:
    1<=n,m<=10^4
    0<=edges[i][j]<=n-1

  Expected Time Complexity: O(N + E), where N is the number of nodes and E is the edges
  Expected Space Complexity: O(N)
 */

class Solution {
  shortestPath(edges, n, m, src) {
    let adj=Array.from({length:n},()=>[]);
    for(let edge of edges){
      let u=edge[0],v=edge[1];
      adj[u].push(v);
      adj[v].push(u);
    }
    let queue=[src];
    let head=0,tail=1;
    let dist=Array(n).fill(Infinity);
    dist[src]=0;
    while(head<tail){
      let node=queue[head++];
      for(let child of adj[node]){
        if(dist[child]>dist[node]+1){
          dist[child]=dist[node]+1;
          queue.push(child);
          tail++;
        }
      }
    }
    let ans=Array(n).fill(-1);
    for(let i=0;i<n;i++){
      if(dist[i]!=Infinity)
        ans[i]=dist[i];
    }
    return ans;
  }
}
