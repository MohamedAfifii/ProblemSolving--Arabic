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
public class Solution_59A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int lowerCounter = 0;
        int upperCounter = 0;
        //System.out.println("Enter the words:");
        String word = input.nextLine();
        char [] given = word.toCharArray();
        int length = given.length;
        for (int i = 0; i < length; i++){
            if (Character.isLowerCase(given[i]))
                lowerCounter++;
            else
                upperCounter++;
        }
        if (upperCounter > lowerCounter)
            System.out.println(word.toUpperCase());
        else
            System.out.println(word.toLowerCase());
    }
    
}
