import java.util.*;
public class Solution {
    static Scanner sc = new Scanner(System.in);
    
   public static void main(String args[]) {
     int a = sc.nextInt();
     int b = sc.nextInt();
     int c = sc.nextInt();
     int d = sc.nextInt();
     int count=0;
    Set<Integer> set =  new HashSet<>();
    set.add(a);
    set.add(b);
    set.add(c);
    set.add(d);
    System.out.println(4-set.size());
     
   }
 }