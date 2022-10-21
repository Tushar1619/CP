/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{

    static int answer ;
    static int[] arr1 ;
    static int[] arr2 ;
    
    static Scanner sc = new Scanner(System.in);
    public static void fill(int[][] dp,int[]arr1,int[] arr2,int n){
        for(int i=1;i<=n;i++){
            for(int j=0;j<21000;j++){
                dp[i][j] = 0;
            }
        }
        
        for(int i=1;i<=n;i++){
            arr1[i] = sc.nextInt();
        }
        for(int i=1;i<=n;i++){
            arr2[i] = sc.nextInt();
        }
    }
    public static void solve(){
        int n = sc.nextInt();
        answer = 0;
        int dp[][] = new int[1000][21000];
        arr1 = new int[n+1];
        arr2 = new int[n+1];
        fill(dp,arr1,arr2,n);
        hlpr(1,0,0,n,dp);
        System.out.println(answer);
    }
    public static void hlpr(int i,int l,int r,int n,int[][] dp){
        if(i==n+1){
            answer = Math.max(answer,Math.min(l,r));
            return;
        }
        if(dp[i][l]>=r && dp[i][l]!=0) return;
        dp[i][l]=r;
        hlpr(i+1,l+arr1[i],r,n,dp);
        hlpr(i+1,l,r+arr2[i],n,dp);
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        int t = sc.nextInt();
        while(t-->0){
            solve();
        }
	}
}
