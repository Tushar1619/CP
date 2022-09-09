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
     int maxval=-1;
     int maxvalidx = -1;
     int n = sc.nextInt();
     for(int i=1;i<=n;i++){
        int val = sc.nextInt();
        if(val>maxval){
            maxval=val;
            maxvalidx = i;
        }
     }
     System.out.println(maxvalidxl);
   }
 }
 