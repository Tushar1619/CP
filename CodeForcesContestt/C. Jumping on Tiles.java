import java.util.*;
public class Solution {
    static Scanner sc = new Scanner(System.in);
    static HashSet<Character> set;
   public static void main(String args[]) {
     
     int t = sc.nextInt();
     for(int i=1;i<=t;i++){
        solve();
     }
   }
 
  public static void solve() {
    
    String s = sc.next();
    int n = s.length();
    int[][] arr = new int[n+1][2];
        for(int i=1;i<=n;i++){
            char ch = s.charAt(i-1);
            arr[i][0]=i;
            arr[i][1]=(ch-97+1);
        }
        Arrays.sort(arr,(a,b) ->a[1]==b[1]?b[0]-a[0]:a[1]-b[1]);
        int numfi = s.charAt(0)-97+1;
        int numli = s.charAt(s.length()-1)-97+1;
        List<Integer> seq = new ArrayList<>();
        int tiles=0;
        for(int i=1;i<n+1;i++){
            int idx = arr[i][0];
            if(idx==1){
                while(i<arr.length){
                    seq.add(arr[i][0]);
                    // sum+=arr[i][1]-arr[i-1][1];
                    if(arr[i][0]==n)break;
                    tiles++;
                    
                    i++;
                    
                        
                }
            }
            else if(idx==n){
                while(i<arr.length){
                    seq.add(arr[i][0]);
                    // sum+=arr[i][1]-arr[i-1][1];
                    if(arr[i][0]==1)break;
                    tiles++;
                    i++;
                    
                }
                Collections.reverse(seq);
                
            }
        }

        // System.out.println(numfi+" "+numli);
        
        int val = Math.abs(numfi-numli);
        System.out.println(val+" "+(tiles+1));
        for(int el:seq){
            System.out.print(el+" ");
        }
        System.out.println();
   }
 }
//  val = Math.abs(numli-numfi);
 // int sum = 0;
 // int i=2;
 // seq.add(arr[1][0]);
 // int lim = 0;
 // while(i<arr.length && lim!=1 && lim!=n){
 //     lim = arr[i][0];
 //     int chval = arr[i][1];
 //     seq.add(arr[i][0]);
 //     int el = chval-sum;
 //     sum+=chval-arr[i-1][1];
 //     tiles++;
 //     i++;
 // }
