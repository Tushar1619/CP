/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {

            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            int idx = arr.length - 1;
            while (idx >= 1) {
                if (arr[idx] <= 0 && arr[idx - 1] <= 0) {
                    idx = idx - 2;
                }

                else if (arr[idx] <= 0 && arr[idx - 1] >= 0) {
                    idx = idx - 1;
                }

                else if (arr[idx] >= 0 && arr[idx - 1] <= 0) {
                    int val = arr[idx] / 2;
                    if (arr[idx] % 2 == 0) {
                        arr[idx] = 0;
                    } else {
                        arr[idx] = 1;
                    }
                    arr[idx - 1] -= val;
                    idx--;
                } 
                
                else {
                    int val = arr[idx] / 2;
                    if (arr[idx] % 2 == 0) {
                        arr[idx] = 0;
                    } else {
                        arr[idx] = 1;
                    }
                    arr[idx - 1] -= val;
                    idx--;
                }
            }

            idx = n - 1;
            while (idx >= 1) {
                if (arr[idx] == 1 && arr[idx - 1] > 0) {
                    arr[idx] = -1;
                    arr[idx - 1] -= 1;
                }
                idx--;
            }

            long ans = 0;
            for (int el : arr) {
                ans += Math.abs(el);
            }
            System.out.println(ans);
        }
    }
}
