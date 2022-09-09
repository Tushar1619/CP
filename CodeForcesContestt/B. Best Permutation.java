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
    int n = sc.nextInt();
    if(n%2==0){
        for(int i=n-2;i>=1;i--){
            System.out.print(i+" ");
        }
        System.out.print( (n-1)+" "+n);
    }
    else{
        int[] arr = new int[n];
        int val = n-3;
        for(int i=0;i<n-4;i+=2){
            arr[i]=val;
            val=val-2;
        }
        for(int i=1;i<n-3;i+=2){
            arr[i]=arr[i-1]+1;
        }
        for(int el:arr){
            System.out.prin(el+" ");
        }
        System.out.print(1+" "+(n-1)+" "+n);
        System.out.println();
    }
   }
 }
 