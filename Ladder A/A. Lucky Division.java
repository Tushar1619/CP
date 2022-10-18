import java.util.*;
public class Solution {
    static Scanner sc = new Scanner(System.in);
    public static boolean checkForLuckNumber(int n){
        Set<Integer> set = new HashSet<>();
    while(n!=0){
        set.add(n%10);
        n/=10;
    }
    if(set.size()==1){
        if(set.contains(4) || set.contains(7)){
            return true;
        }
    }
    else if(set.size()==2){
        if(set.contains(4)&& set.contains(7)){
            return true;
        }
    }
    
        return false;
    }
   public static void main(String args[]) {
     
     int n = sc.nextInt();
     boolean flag = false;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            boolean call = checkForLuckNumber(i);
            if(call==true){
                flag=true;
                break;
            }
        }
    }
    if(flag){
        System.out.println("YES");
    }
    else{
        System.out.println("NO");
    }
   }
 }
 