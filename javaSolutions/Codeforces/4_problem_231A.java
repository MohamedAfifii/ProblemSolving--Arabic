/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

/**
 *
 * @author mohamedomran
 */
public class Solution_231A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count = 0;
        //System.out.println("Enter number of problems");
        int n = Integer.parseInt(input.nextLine());
        for (int i = 1; i <= n;i++){
           /* System.out.println("Enter [0 / 1] sureness about the solution for Pety, "
                    + "Vasya and Tonya separated by space for problem number: "
            +i);*/
            String [] given = input.nextLine().split(" ");
            int pety = Integer.parseInt(given[0]); //Pety sureness about the solution 
            int vasya = Integer.parseInt(given[1]);//Vasya sureness about the solution
            int tonya = Integer.parseInt(given[2]);//Tonya sureness about the solution
            
            int sum = pety + vasya + tonya;
            if (sum >= 2)
                count++;
        }
        System.out.println(count);
    }
}
