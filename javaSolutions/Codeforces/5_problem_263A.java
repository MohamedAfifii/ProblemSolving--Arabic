/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import static java.lang.System.exit;
import java.util.Scanner;

/**
 *
 * @author mohamedomran
 */
public class Solution_263A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //int count = 0;
        int [][] matrix = new int[5][5];
        for (int i = 0; i < 5; i++){
            //System.out.println("Enter "+(i+1)+" row of element separated by space");
            String [] given = input.nextLine().split(" ");
            for (int j =0; j < 5; j++){
                matrix [i][j] = Integer.parseInt(given [j]);
                if (matrix[i][j] == 1){
                    System.out.println(Math.abs(i-3+1)+Math.abs(j-3+1));
                    exit(0);
                }
            }
        }
    }
    
}
