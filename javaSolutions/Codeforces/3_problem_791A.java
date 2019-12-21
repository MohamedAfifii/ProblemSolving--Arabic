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
public class Solution_791A {
    public static void main(String args[]) {
      Scanner input = new Scanner(System.in);
      
      //System.out.println("Enter Limak and Bob weight separated by space:");
      String [] given = input.nextLine().split(" ");
      int limakWeight = Integer.parseInt(given[0]); 
      int bobWeight = Integer.parseInt(given[1]); 
      
      for(int i=1; i<10; i++ ) {
          limakWeight *=3;
          bobWeight *=2;
         if(limakWeight>bobWeight){
             System.out.println(i);
             System.exit(0);
         }
      }
   }
    
}
