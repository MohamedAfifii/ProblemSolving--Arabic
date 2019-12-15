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
public class Solution_734A {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int antonCounter = 0;
        int danikCounter = 0;
        //System.out.println("Enter the number of games :");
        int gamesNumber = Integer.parseInt(input.nextLine());
        //System.out.println("Enter out coming games in uppercase English letters A/D:");
        String given = input.nextLine();
        for(int i = 0; i < gamesNumber; i++){
            char ch = given.charAt(i);
            if (ch == 'A'){
                antonCounter++;
            }else if (ch == 'D'){
                danikCounter++;
            }
        
        }
        if (antonCounter > danikCounter)
            System.out.println("Anton");
        else if (antonCounter < danikCounter)
            System.out.println("Danik");
        else
            System.out.println("Friendship");
        
    }
    
}
