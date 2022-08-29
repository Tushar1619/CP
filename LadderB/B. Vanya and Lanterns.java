/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int l = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        arr[i]=sc.nextInt();
        
        Arrays.sort(arr);
        double max = arr[0]-0d;
       max = Math.max(max,l-arr[n-1]);
    //   System.out.println(max);
        for(int i=0;i<n-1;i++){
            // System.out.println(arr[i]+" "+arr[i+1]);
            double val = ((arr[i+1])-(arr[i]))/2d;
            // System.out.println(val);
            max = Math.max(val,max);
        }
        System.out.println(max);
    }

}


