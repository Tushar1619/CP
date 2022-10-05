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
        HashSet<Character> set = new HashSet<>();
        // s to t
        String s=sc.next();
        String t=sc.next();
        int same = 0;
        int[] freq = new int[26];
        for(int i=0;i<s.length();i++){
            freq[s.charAt(i)-97]++;
        }
        for(char ch:t.toCharArray()){
            freq[ch-97]--;
            if(freq[ch-97]<0){
                System.out.println("need tree");
                return;
            }
        }
        // if(set.size()==0){
            if(s.length()>t.length()){
                int i=0;
                int j=0;
                while(i<s.length()){
                    if(j<t.length() && s.charAt(i)==t.charAt(j)){
                        i++;
                        j++;
                    }
                    else{
                        i++;
                    }
                    
                }
                if(j==t.length()){
                        System.out.println("automaton");
                        return;
                    }
                System.out.println("both");
                return;
            }
            else if(s.length()==t.length()){
                System.out.println("array");
                return;
            }
            
        // }
   }
 }
 
 
