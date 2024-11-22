/**
  Given a Directed Acyclic Graph of V vertices from 0 to n-1 and a 2D Integer array(or vector) edges[ ][ ] of length E, where there is a directed edge from edge[i][0] to edge[i][1] with a distance of edge[i][2] for all i.

  Find the shortest path from src(0) vertex to all the vertices and if it is impossible to reach any vertex, then return -1 for that vertex.

  Constraint:
    1 <= V <= 100
    1 <= E <= min((N*(N-1))/2,4000)
    0 <= edgei,0,edgei,1 < n
    0 <= edgei,2 <=10^5
 */
class Solution {
  shortestPath(V, E, edges) {
    let adj=Array.from({length:V},()=>[]);
    for(let edge of edges){
      let u=edge[0],v=edge[1],wt=edge[2];
      adj[u].push([v,wt]);
    }
    let st=[];
    let visited=Array(V).fill(false);
    function DFS(n){
      visited[n]=true;
      for(let it of adj[n]){
        if(!visited[it[0]])
          DFS(it[0]);
      }
      st.push(n);
    }
    for(let i=0;i<V;i++){
      if(!visited[i])
        DFS(i);
    }
    let dist=Array(V).fill(Infinity);
    dist[0]=0;
    while(st.length){
      let node=st.pop();
      for(let it of adj[node]){
        let v=it[0],wt=it[1];
        if(dist[v]>dist[node]+wt)
          dist[v]=dist[node]+wt;
      }
    }
    for(let i=0;i<V;i++){
      if(dist[i]===Infinity)
        dist[i]=-1;
    }
    return dist;
  }
}