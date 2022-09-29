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
    int n=0,m=0;
//   n is the number of words used by tchr in lecture 
// m is the words you require to form the notes 
    n = sc.nextInt();
    m = sc.nextInt();
    Map<String,String> map = new HashMap<>();
    for(int i=0;i<m;i++){
        String s1 = sc.next();
        String s2 = sc.next();
        map.put(s1,s2);
    }
      sc.nextLine();
    String[] arr = sc.nextLine().split(" ");
    
    StringBuilder ans = new StringBuilder();
    for(String s:arr){
      String str = map.get(s);
      if(str.length()<s.length()) ans.append(str+" ");
      else ans.append(s+" ");
    }
    System.out.println(ans.toString());
   }
 }
 


