/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t  = sc.nextInt();
        while(t-->0){
            int a = sc.nextInt();
            int b = sc.nextInt();
        int board[][] = new int[8][8]; 
        for (int i = 0; i < 8; i++) { 
            for (int j = 0; j < 8; j++) { 
                board[i][j] = 0; 
            } 
        } 
        board[a-1][b-1] = 1;

        if ((a==1 && b==1)){  //d
            board[1][2] = 2; 
        } 

        else if ((a==1 && b==8)){   //d
            board[1][5] = 2; 
        }
            
        else if (a==8 && b==1) {
            board[6][2] = 2; 
        }  //d
            
        else if (a==8 && b==8) {
            board[6][5] = 2; 
        } //d
            
        else if (a==1) { 
            board[a+1][b-2] = 2; 
            board[a+1][b] = 2;  //d
        }
         else if (a==8) { 
            board[a-3][b-2] = 2; 
            board[a-3][b] = 2;  //d
        }
         else if (b==1) { 
            board[a-2][b+1] = 2; 
            board[a][b+1] = 2;  //d
        }
         else if (b==8) { 
            board[a-2][b-3] = 2; 
            board[a][b-3] = 2; //d
        }
         else if (a == 2 && b == 2) { 
            board[a-2][b+2] = 2; 
            board[a + 2 - 1][b - 1 - 1] = 2; 
        }
         else if (a == 2 && b == 7) { 
            board[a - 2][b-3] = 2; 
            board[a + 2][b] = 2; 
        }
         else if (a == 7 && b == 2) { 
            board[a][b+2] = 2; 
            board[a - 3][b - 2] = 2; 
        }
         else if (a == 7 && b == 7) { 
            board[a ][b - 4] = 2; 
            board[a - 3][b] = 2; 
        }
         else if (a == 2) { 
            board[a - 2][b - 3] = 2; 
            board[a][b + 1] = 2; 
        }
         else if (a == 7) { 
            board[a - 2][b - 3] = 2; 
            board[a][b + 1] = 2; 
        }
         else if (b == 2) { 
            board[a - 3][b - 2] = 2; 
            board[a + 1][b] = 2; 
        }
         else if (b == 7) { 
            board[a - 3][b] = 2; 
            board[a + 1][b - 2] = 2; 
        }
         else { 
            board[a - 2][b - 3] = 2; 
            board[a][b + 1] = 2; 
    } 
 

        for (int i = 0; i < 8; i++) { 
            for (int j = 0; j < 8; j++) { 
                System.out.print(board[i][j]+" ");
            } 
            System.out.println();
        }

        }
    }
   
}
