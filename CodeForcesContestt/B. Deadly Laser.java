/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t  = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int m = sc.nextInt();
            int sx = sc.nextInt();
            int sy = sc.nextInt();
            int d = sc.nextInt();
            int ans = n+m-2;
            if(sx-1<=d && n-sx<=d){
                ans = -1;
            }
            else if(sy-1<=d && m-sy<=d){
                ans = -1;
            }
          else if(sx-1<=d && sy-1<=d){
            ans = -1;
          }
          else if(n-sx<=d && m-sy<=d){
            ans = -1;
          }
            else{

            }
            System.out.println(ans);
        }
    }

}


