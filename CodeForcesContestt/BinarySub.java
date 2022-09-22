import java.util.*;
 class Codechef {
    static Scanner sc = new Scanner(System.in);
    
   public static void main(String args[]) {
     
     int t = sc.nextInt();
     for(int i=1;i<=t;i++){
        solve();
     }
   }
 
  public static void solve() {
  int n = sc.nextInt();
  String str =  sc.next();
   int zero=0;
   int ones=0;
   for(char ch:str.toCharArray()) {
      if(ch=='0'){
        ones++;
      }
      else if(ch=='1'){
        zero++;
      }
   }
   if(zero==0 || ones==0) {
    System.out.println( n + " " + 0);
    return;
    }
    System.out.println(1+" "+ (Math.abs(zero-ones)+1) );
    int hlp = 0;
    int lim = Math.abs(zero-ones);
    for(int i=0;i<lim;i++) {
        String hlprstr="";
        for(int j=0;j<str.length()-1;j++){
           if((str.charAt(j)=='0'&&str.charAt(j+1)=='1')||(str.charAt(j)=='1'&&str.charAt(j+1)=='0')) {
              hlp = j;
              break;
           }
        } 
        int v = 0;
        if(zero>ones)v=1;
        else v=0;
        System.out.println((hlp+1) + " " + (hlp+2) + " " + v);

        for(int j=0;j<str.length();j++){
           if(j!=hlp ){
                if(j!=hlp+1){
                    hlprstr+=str.charAt(j);
                }
           } 
           else if(j==hlp){
            hlprstr+= (char)((zero>ones?1:0)+48);
           } 
        }
        str=hlprstr;
     }
    
   System.out.println(  1+ " " + str.length()+" "+0);
  
   
   }
 }
