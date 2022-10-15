import java.util.*;
public class Solution {
    static Scanner sc = new Scanner(System.in);
  
   public static void main(String args[]) {
     
     int t = sc.nextInt();
     for(int i=1;i<=t;i++){
        solve();
     }
   }
 
  public static void solve() {
    PriorityQueue<Long> pq = new PriorityQueue<>();
    long n = sc.nextInt();
    long k = sc.nextInt();
    int[] arr = new int[n];
    for(int i=1;i<=2*n;i++){
        pq.add(i);
    }
    int max_val = -1;
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
        max_val = Math.max(max_val,arr[i]);
        pq.remove(arr[i]);
    }
    if(max_val<pq.peek()){
        pq.remove(2*n);
        max_val = 2*n;
        k--;
    }
    int ans =0;
    while(k-->0){
        int val = pq.poll();
        ans+=Math.abs(val-max_val);
        max_val = Math.max(max_val,val);
    }
    System.out.println(ans);
   }
 }
 
 
