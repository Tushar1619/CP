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
        String s=sc.next();
        
        int k=sc.nextInt();
       
        int[] freq=new int[26];
        int maxi = Integer.MAX_VALUE;
        for(int i=0;i<26;i++){
         freq[i]=sc.nextInt();
         maxi=Math.max(freq[i],maxi);
        }
        int ans = 0;
        for(int i=1;i<=s.length();i++){
            char ch = s.charAt(i-1);
             ans+=freq[ch-97]*i;
        }
        for(int i=s.length()+1;i<=(s.length()+k);i++){
         ans+=i*maxi;
        }
        System.out.println(ans);
   }
 }
 


