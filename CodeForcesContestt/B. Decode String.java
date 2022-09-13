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
    int n = sc.nextInt();
    String str = sc.next();
    StringBuilder sb =  new StringBuilder();

    for(int i=0;i<n;i++){
        char ch = str.charAt(i);
        if(i+2<n && ch=='1' &&  str.charAt(i+2)=='0'){
            String s = str.substring(i, i+2);
            int num = Integer.valueOf(s);
            num=num-1;
            sb.append( (char)(num) );
            i+=2;
        }
        else if(i+2<n && ch=='2' && str.charAt(i+1)<'7' && str.charAt(i+2)=='0'){
           String s = str.substring(i, i+2);
            int num = Integer.valueOf(s);
            num=num-1;
            sb.append( (char)(num) );
            i+=2;
        }
        else{
            int num = (ch-48)-1;
            char apch = (char)num;
            sb.append(apch);
        }
    }
    System.out.println(sb.toString());
   }
 }
 