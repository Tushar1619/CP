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
       int n = sc.nextInt();
       int m = sc.nextInt();

       int pair = m/2;
       if(m%2==1){
        pair++;
       }
       pair--;
       if(n<pair){
        System.out.println(-1);
        return;
       }
       if(m<n-1){
        System.out.println(-1);
        return;
       }
       if(m==n-1){
            int idx=0;
            while(idx<n-1){
                // sb.append('0');
                // sb.append('1');
                System.out.print(0);
                System.out.print(1);
                idx++;
            }
            System.out.print(0);
       }
       else{

        while(n!=m && n!=0){
            System.out.print(110);
            // sb.append("110");
            n--;
            m-=2;
        }
        while(n>0){
            // sb.append("10");
            System.out.print(10);
            n--;
            m--;
        }
        while(m>0){
            // sb.append('1');
            System.out.print(1);
            m--;
        }
       }
       System.out.println();
   }
 }
 


