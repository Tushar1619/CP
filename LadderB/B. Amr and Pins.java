import java.util.*;
public class Solution {
    static Scanner sc = new Scanner(System.in);
    static HashSet<Character> set;
   public static void main(String args[]) {
     
    //  int t = sc.nextInt();
    //  for(int i=1;i<=t;i++){
        solve();
    //  }
   }
 
  public static void solve() {
        int r = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        int X = sc.nextInt();
        int Y = sc.nextInt();

        double val = (X-x)*(X-x);
        val +=(Y-y)*(Y-y);
        val = Math.sqrt(val);

        int ans = val/2*r;
        if(val%(2*r)!=0){
            ans++;
        }
        
        System.out.println(ans);
   }
 }
 


