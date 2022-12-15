import java.util.*;
public class Solution {
    static Scanner sc = new Scanner(System.in);
    static int tri=0;
    public static boolean func(List<List<Integer>> adj,int curr,int count){
        if(count>4)return false;
        vis[curr]=1;
        for(int el:adj.get(curr)){
            if(vis[el]==0){
                boolean call = func(adj,el,count+1);
                if(call==false)return false;
            }
            else{
                if(count==3){
                    tri++;
                    return true;
                }
                return false;
            }
        }
        return true;
    }
    public static void print(List<List<Integer>> adj,int curr,int count,String ans){
        vis[curr]=1;
        for(int el:adj.get(curr)){
            if(vis[el]==0){
                print(adj,el,count+1,ans+" "+el);
            }
            else{
                if(count==3){
                    System.out.println(ans);
                    ans = new String();
                }
            }
        }
    }
    static int[] vis;
   public static void main(String args[]) {
     int n = sc.nextInt();
     int m = sc.nextInt();
     List<List<Integer>> adj = new ArrayList<>();
     for(int i=1;i<=6;i++){
        adj.add(new ArrayList<>());
     }
     for(int i=0;i<m;i++){
        int key = sc.nextInt();
        int val = sc.nextInt();
        adj.get(key).add(val);
     }
      vis = new int[n+1];

     for(int i=1;i<=n;i++){
        if(vis[i]==0){
            boolean ans = func(adj,i,1);
            if(ans==false){
                System.out.println(-1);
                return;
            }
        }
     }
     if(tri!=n/3){
        int c=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==1)c++;
        }
        if(c==0){
            System.out.println(-1);
            return;
        }
     }
     vis = new int[n+1];
     for(int i=1;i<=n;i++){
        if(vis[i]==0){
            print(adj,i,1,"i");
            
        }
     }
   }
 }