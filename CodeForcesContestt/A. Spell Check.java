import java.util.*;
public class Solution {
    static Scanner sc = new Scanner(System.in);
    static HashSet<Character> set;
   public static void main(String args[]) {
     
     int t = sc.nextInt();
     for(int i=1;i<=t;i++){
        solve();
     }
   }
 
  public static void solve() {
      set = new HashSet<>();
     String str = "Timur";
     for(int i=0;i<5;i++){
         char ch = str.charAt(i);
         set.add(ch);
     }
     int n = sc.nextInt();
     String s = sc.next();
     if(n!=5){
         System.out.println("NO");
         return;
     }
     for(int i=0;i<n;i++){
         char ch = s.charAt(i);
         if(set.contains(ch)){
             set.remove(ch);
         }
         else{
            System.out.println("NO");
             return;
         }
     }
     System.out.println("YES");
   }
 }
 