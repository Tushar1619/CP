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
    HashSet<String> map1 = new HashSet<>();
    HashSet<String> map2 = new HashSet<>();
    HashSet<String> map3 = new HashSet<>();
    
    int n = sc.nextInt();
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            String s = sc.next();
            if(i==0){
                    map1.add(s);
            }
            if(i==1){
                map2.add(s);
            }
            if(i==2){
            map3.add(s);
            }
        }
    }
int p1=0;
int p2=0;
int p3=0;
    for(String str:map1){
        if(map2.contains(str) && map3.contains(str)){
            // map1.remove(str);
            map2.remove(str);
            map3.remove(str);
        }
        else if(map2.contains(str)){
            p1+=1;
            p2+=1;
            // map1.remove(str);
            map2.remove(str);
        }
        else if(map3.contains(str)){
            p1+=1;
            p3+=1;
            // map1.remove(str);
            map3.remove(str);
        }
        else{
            p1+=3;
        }
    }
    for(String str:map2){
       
         if(map3.contains(str)){
            p2+=1;
            p3+=1;
            // map2.remove(str);
            map3.remove(str);
        }
        else{
            p2+=3;
        }
    }
    p3+=map3.size()*3;
    System.out.println(p1+" "+p2+" "+p3);
   }
 }
 