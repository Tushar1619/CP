import java.util.Scanner;

public class Solution {
  // Object for Input
  static Scanner sc = new Scanner(System.in);

  public static void main(String args[]) {
    int t = sc.nextInt();
    for(int i=1;i<=t;i++){
       int ans = solve();
       System.out.println("Case #"+i+": "+ans);
    }
  }

 public static int  solve() {
    int n = sc.nextInt();
    int m = sc.nextInt();
    int[] arr = new int[n];
    int sum = 0;
    for(int i=0;i<n;i++) {
        arr[i]=sc.nextInt();
        sum+=arr[i];
    }
    return sum%m;

  }
}
