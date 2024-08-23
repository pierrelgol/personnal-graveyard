package exercice_3_17;

import java.util.Random;
import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {
    
    //input = integer that correspond to eitheir rock, paper, or scisssor
    
    //output = result of input against randomly generated rock, paper, scisssor
    
    //instantiating Random 
    Random random = new Random();
    
    //generating random number and setting bound to be [0,2]
    int computerMove = random.nextInt(2);
    System.out.println(computerMove);
    
    //instantiating scanner
    Scanner input = new Scanner(System.in);
    
    //prompting user for input
    System.out.println("Enter an integer to choose your next move : Rock = 0, Paper = 1, Scisssor = 2");
    
    //storing user input
    int playerMove = input.nextInt();
    
    //computing Players'moves
    if(computerMove == playerMove) {
      System.out.println("Both players played the same move this is a Draw");
    }else if(computerMove == 0 && playerMove == 2) {
      System.out.println("Computer win ! Rock vs Scissor is a win for Rock");
    }else if(computerMove == 2 && playerMove == 0) {
      System.out.println("Player win ! Rock vs Scissor is a win for Rock");
    }else if(computerMove == 1 && playerMove == 0) {
      System.out.println("Computer win ! Paper vs Rock is a win for Paper");
    }else if(computerMove == 0 && playerMove == 1) {
      System.out.println("Player win ! Paper vs Rock is a win for Paper");
    }else if(computerMove == 2 && playerMove == 1) {
      System.out.println("Computer win ! Scisssor vs Paper is a win for Scisssor");
    }else if(computerMove == 1 && playerMove == 2) {
      System.out.println("Player win ! Scisssor vs Paper is a win for Scisssor");
    }
    
    
    
    
    input.close();
    
  }

}
