import java.util.*;
public class Solution {
    static Scanner sc = new Scanner(System.in);
   public static void main(String args[]) {
     
    //  int t = sc.nextInt();
    //  for(int i=1;i<=t;i++){
        solve();
    //  }
   }
 
  public static void solve() {
     String s = sc.next();
     StringBuilder sb = new StringBuilder();
     int idx=0;
     char prev = '*';
     int freq = 1;
     //treat freq 3 first
     for(idx=0;idx<s.length();idx++){
        if(s.charAt(idx)==prev){
            freq++;
            if(freq>=3){
                continue;
            }
        }
        else{
            freq=1;
        }
        sb.append(s.charAt(idx));
        prev = s.charAt(idx);
     }
     String str = sb.toString();
     System.out.println(str);
     sb = new StringBuilder();
     int i=0;
     for( i=0;i<str.length()-3;i++){
        if( (str.charAt(i)==str.charAt(i+1))){
            if((str.charAt(i+2)==str.charAt(i+3))){
                sb.append(str.substring(i, i+3));
                i=i+3;
            }
            else{
                sb.append(str.substring(i,i+2));
                i++;
            }
        }
        else{
            sb.append(str.charAt(i));
        }
     }
     sb.append(str.substring(i,str.length()));
     System.out.println(sb.toString());
   }
 }
 