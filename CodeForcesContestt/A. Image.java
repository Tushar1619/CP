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
            
            String str1 = sc.next();
            String str2 = sc.next();
            str1+=str2;
            char[] arr = str1.toCharArray();
            Arrays.sort(arr);
            int sum = 0;
            for(int i=0;i<3;i++){
                if(arr[i]!=arr[i+1]) sum++;
            }
            System.out.println(sum);
        }
    }

}


