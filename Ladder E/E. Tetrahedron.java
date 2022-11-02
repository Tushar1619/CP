import java.util.*;

public class Solution {
    static Scanner sc = new Scanner(System.in);

    public static void main(String args[]) {

        solve();
    }

    // public static int rec(int n, int idx, Integer[][] dp) {
    //     if (n == 1) {
    //         return 1;
    //     }
    //     if (dp[n][idx] != null)
    //         return dp[n][idx];
    //     int max = 0;
    //     for (int i = 1; i <= 4; i++) {
    //         if (i == idx) {
    //             continue;
    //         }
    //         if (n == 2 && i == 4)
    //             continue;
    //         int call = 0;
    //         call = (call + rec(n - 1, i, dp)) % 1000000007;
    //         max = (max + call) % 1000000007;
    //     }
    //     return dp[n][idx] = max;
    // }

    public static void solve() {
        int n = sc.nextInt();
        if (n == 1) {
            System.out.println(0);
            return;
        }
        int[] prev = new int[5];
        Arrays.fill(prev,1);
        for (int i = 0; i < 5; i++) {
            dp[1][i] = 1;
        }
        for (int i = 2; i <= n; i++) {
            int[] curr = new int[5];
            for (int idx = 1; idx <= 4; idx++) {
                int max = 0;
                for (int j = 1; j <= 4; j++) {
                    if (j == idx) {
                        continue;
                    }
                    if (i == 2 && j == 4)
                        continue;
                    int call = 0;
                    call = (call + prev[j]) % 1000000007;
                    max = (max + call) % 1000000007;
                }
                 curr[idx] = max;
            }
            prev=curr;
        }
        System.out.println(prev[4]);
    }
}
