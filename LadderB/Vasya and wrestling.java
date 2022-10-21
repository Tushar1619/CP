/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
       
     
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long s1=0;
        long s2=0;
        long lv=0;
        List<Long> l1 = new ArrayList<>();
        List<Long> l2 = new ArrayList<>();
        for(int i=0;i<n;i++){
            long val = sc.nextLong();
            if(val>0){
                s1+=val;
                l1.add(val);
            }
            else{
                long temp=-1*val;
                s2+=temp;
                l2.add(temp);
            }
            if(i==n-1){
                lv=val;
            }
        }
        // System.out.println(s1+" "+s2);
        // System.out.println(a1+" "+b1);
        if(s1>s2){
            System.out.println("first");
        }
        else if(s2>s1){
            System.out.println("second");
        }
        else if(s1==s2){
          int idx=0;
          while(idx<l1.size() && idx<l2.size()){
              if(l1.get(idx)>l2.get(idx)){
                  System.out.println("first");
                  return;
              }
              else if(l1.get(idx)<l2.get(idx)){
                  System.out.println("second");
                  return;
              }
                  idx++;
          }
          if(idx<l1.size()){
              System.out.println("first");
              return;
          }
          if(idx<l2.size()){
              System.out.println("second");
              return;
          }
            // else{
                if(lv>0){
            System.out.println("first");
                }
                else{
                    System.out.println("second");

                }
            // }
        }
   }

}
