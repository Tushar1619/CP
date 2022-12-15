import java.util.*;
public class ValeraTubes{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
        int p = sc.nextInt();
        String s = sc.next();
        int val = 0;
        int i=0;
        int j=n-1;
		while(i<j){
            if(s.charAt(i)==s.charAt(j)){
                i++;
                j--;
            }
            
            else{
                int c1 = s.charAt(i)-96;
                int c2 = s.charAt(j)-96;
                int v1 = Math.abs(c1-c2);
                int v2 =26- Math.abs((c1-c2));
                val+=Math.min(v1,v2);
                i++;
                j--;
            }
        }
        int mid = n/2;
        int [] arr = new int[n+1];
        int l = 0;
        int r = n-1;
        if(p<=mid){
            while(l<r){
                if(s.charAt(l)!=s.charAt(r)){
                    arr[l+1]=1;
                }
                l++;
                r--;
            }
        }
        else{
            while(l<r){
                if(s.charAt(l)!=s.charAt(r)){
                    arr[r+1]=1;
                }
                l++;
                r--;
            }
        }
        // for(int el:arr){
        //     System.out.print(el+" ");
        // }
        // System.out.println();
        int lv = -1;
        for(int d=1;d<n+1;d++){
            if(arr[d]==1){
                lv = d;
                break;
            }
        }
        int rv=-1;
        for(int d=n;d>=0;d--){
            if(arr[d]==1){
                rv = d;
                break;
            }
        }
        if(lv!=-1 && rv!=-1){
            val+=Math.min(Math.abs(rv-p),Math.abs(p-lv));
        val+=rv-lv;
        }
        
        System.out.println(val);
	}
}