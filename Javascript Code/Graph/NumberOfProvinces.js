/*
  Given an undirected graph with V vertices. We say two vertices u and v belong to a single province if there is a path from u to v or v to u. Your task is to find the number of provinces.

  Note: A province is a group of directly or indirectly connected cities and no other cities outside of the group.

  You don't need to read input or print anything. Your task is to complete the function numProvinces() which takes an integer V and an adjacency matrix adj(as a 2d vector) as input and returns the number of provinces. adj[i][j] = 1, if nodes i and j are connected and adj[i][j] = 0, if not connected.

  Expected Time Complexity: O(V2)
  Expected Auxiliary Space: O(V)
*/

class Solution {
  numProvinces(V,adj){
    let neighbour=Array.from({length:V},()=>[]);
    for(let i=0;i<V;i++){
      for(let j=0;j<V;j++){
        if(adj[i][j]==1){
          neighbour[i].push(j);
          neighbour[j].push(i);
        }
      }
    }
    let ans=0;
    let visited=new Array(V).fill(false);
    function BFS(n){
      let q=[n];
      while(q.length){
        let t=q.shift();
        for(let i=0;i<neighbour[t].length;i++){
          if(!visited[neighbour[t][i]]){
            visited[neighbour[t][i]]=true;
            q.push(neighbour[t][i]);
          }
        }
      }
    }
    for(let i=0;i<V;i++){
      if(!visited[i]){
        ans++;
        BFS(i);
      }
    }
    return ans;
  }
}