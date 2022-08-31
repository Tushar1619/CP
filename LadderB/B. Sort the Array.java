/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Codechef {
    public static int get_idx(int tar,int[] arr,int idx){
        for(int i=idx;i<arr.length;i++){
            if(arr[i]==tar) return i;
        }
        return -1;
    }
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       int[] arr = new int[n+1];
       for(int i=1;i<n+1;i++){
        arr[i]=sc.nextInt();
       }
       boolean flag = true;
       int[] sorted_arr = arr.clone();
       
       Arrays.sort(sorted_arr);
       int i=1;
       int si=-1;
       int ei=-1;
       while(i<=n){
        if(sorted_arr[i]==arr[i]){
            i++;
        }
        else{
            int idx = get_idx(sorted_arr[i],arr,i);
            System.out.println(idx);
            si = idx;
            ei = i;
            for(int ind=idx;ind>=i;ind--,i++){
                if(arr[ind]==sorted_arr[i]){

                }
                else{
                    flag=false;
                    break;
                }
            }
        }
       }
       if(flag){
        System.out.println("yes");
        System.out.println(si+" "+ei);
       }
       else{
        System.out.println("no");

       }
    }

}


