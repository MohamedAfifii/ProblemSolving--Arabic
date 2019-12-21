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
public class Solution_268A {
    public static void main(String[] args) {
        int count = 0;
        Scanner input = new Scanner(System.in);
        //System.out.println("Enter the number of teames ");
        int teamesNumber = Integer.parseInt(input.nextLine());
        int [] gustUniform = new int [teamesNumber];
        int [] homeUniform = new int [teamesNumber];
        for (int i = 0; i < teamesNumber; i++){
            //System.out.println("Enter home and gust coler separated by space of team "+(i+1));
            String [] given = input.nextLine().split(" ");
            homeUniform[i] = Integer.parseInt(given[0]);
            gustUniform[i] = Integer.parseInt(given[1]);
        }
        for (int i = 0; i < teamesNumber; i++){
           for (int j = 0; j < teamesNumber; j++){
               
               if (homeUniform[i]== gustUniform[j])
                   count++;
            }
        }
        System.out.println(count);
    }
    
}
