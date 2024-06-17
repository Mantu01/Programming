/*
  You are also given the head of a linked list of integers.

  Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.

  Return the generated matrix.
  
  Input: m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]
  Output: [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]
  
  Constraints:
  -> 1 <= m, n <= 105
  -> 1 <= m * n <= 105
  -> The number of nodes in the list is in the range [1, m * n].
  -> 0 <= Node.val <= 1000
*/
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
  public int[][] spiralMatrix(int m, int n, ListNode head) {
    int[][] ans=new int[m][n];
    int minC=0,minR=0,maxR=m-1,maxC=n-1;
    int cnt=0;
    while(cnt<m*n){
      for(int i=minC;i<=maxC;i++,cnt++){
        if(cnt>=m*n)
          break;
        if(head!=null){
          ans[minR][i]=head.val;
          head=head.next;
        }
        else
          ans[minR][i]=-1;
      }
      minR++;
      for(int i=minR;i<=maxR;i++,cnt++){
        if(cnt>=m*n)
          break;
        if(head!=null){
          ans[i][maxC]=head.val;
          head=head.next;
        }
        else
          ans[i][maxC]=-1;
      }
      maxC--;
      for(int i=maxC;i>=minC;i--,cnt++){
        if(cnt>=m*n)
          break;
        if(head!=null){
          ans[maxR][i]=head.val;
          head=head.next;
        }
        else
          ans[maxR][i]=-1;
      }
      maxR--;
      for(int i=maxR;i>=minR;i--,cnt++){
        if(cnt>=m*n)
          break;
        if(head!=null){
          ans[i][minC]=head.val;
          head=head.next;
        }
        else
          ans[i][minC]=-1;
      }
      minC++;
    }
    return ans;
  }
}