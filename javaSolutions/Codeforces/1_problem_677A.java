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
public class Solution_677A {
    public static void main(String args[]) {
      int width = 0;
      Scanner input = new Scanner(System.in);
      
      //System.out.println("Enter the Friends number and Fence height separated by space:");
      String [] given = input.nextLine().split(" ");
      int friendsNumber = Integer.parseInt(given[0]); // input array length [n]
      int fenceHeight = Integer.parseInt(given[1]);  // input Fence height [h]
      
      //System.out.println("Enter the Friends height separated by space:");
      String [] heights = input.nextLine().split(" ");
      int [] friendsHeight = new int[friendsNumber]; //array declaration

      for(int i=0; i<friendsNumber; i++ ) {
         friendsHeight[i] = Integer.parseInt(heights[i]);
         if(friendsHeight[i]>fenceHeight){
             width +=2;
         }
         else{
             width++;
         }
      }
        System.out.println(width);
        input.close();
   }
    
}
