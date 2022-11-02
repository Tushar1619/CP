import java.util.*;
public class Solution {
    static Scanner sc = new Scanner(System.in);
   public static void main(String args[]) {
     
    //  int t = sc.nextInt();
    //  for(int i=1;i<=t;i++){
        solve();
    //  }
   }
 
  public static void solve() {
     int n=sc.nextInt();
int q=sc.nextInt();
long[] arr = new long[n+1];
for(int i=0;i<n;i++){
    arr[i]=sc.nextInt();
}
Arrays.sort(arr);
long[] marks =  new long[n+1];
for(int i=0;i<q;i++){
    int s=sc.nextInt();
    int e=sc.nextInt();
    marks[s-1]+=1;
    marks[e]-=1;
}
 
for(int i=1;i<n;i++){
    marks[i]+=marks[i-1];
}
Arrays.sort(marks);
long ans = 0;
for(int i=1;i<=n;i++){
    ans+=marks[i]*arr[i];
}
 
System.out.println(ans);
   }
 }
 