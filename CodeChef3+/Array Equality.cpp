
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int tc=0;tc<t; tc++){
            int n = sc.nextInt();
		    int arr[] = new int[n];
            HashMap<Integer,Integer> map = new HashMap<>();
    String ans="";
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
        if(map.containsKey(arr[i])){
            map.put(arr[i],map.get(arr[i])+1);
        }
        else{
            map.put(arr[i],1);
        }
    }
    int idx=0;
    int max=0;
    for(int key:map.keySet()){
        int val=map.get(key);
        if(val>max){
            max=val;
            idx=key;
        }
    }
    System.out.println(max);
    if(n%2==0){
        if(max<=n/2){
            ans = "Yes";
        }
        else{
            ans = "No";
        }
    }
    else{
        if(max<=(n/2)+1){
            ans="Yes";
        }
        else{
            ans="No";
        }
    }
    System.out.println(ans);
		}
	}
}