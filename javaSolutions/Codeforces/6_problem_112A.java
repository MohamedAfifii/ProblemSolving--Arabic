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
public class Solution_112A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //System.out.println("Enter the first string");
        String given1 = input.nextLine().toLowerCase();
        //System.out.println("Enter the secend string");
        String given2 = input.nextLine().toLowerCase();
        if((given1.compareTo(given2)) < 0)
            System.out.println("-1");
        else if((given1.compareTo(given2)) > 0)
            System.out.println("1");
        else
            System.out.println("0");
        
        input.close();
        
    }
    
}
