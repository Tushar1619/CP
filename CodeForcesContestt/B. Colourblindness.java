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
      int col = sc.nextInt();
      char[][] arr = new char[2][col];
      String str1 = sc.next();
      String str2 = sc.next();
        for(int i=0;i<col;i++){
            char ch = str1.charAt(i);
            arr[0][i]=ch;
        }
        for(int i=0;i<col;i++){
            char ch = str2.charAt(i);
            arr[1][i]=ch;
        }

        for(int i=0;i<col;i++){
            char ch1 = str1.charAt(i);
            char ch2 = str2.charAt(i);
            if(ch1==ch2 || (ch1=='B' && ch2=='G') || (ch1=='G' && ch2=='B') ){

            }
            else{
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
   }
 }
 