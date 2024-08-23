package exercice_05_34;

import java.util.Random;
import java.util.Scanner;

public class RockPaperScissor {
	
	  public static void main(String[] args) {
		    
		    Random random = new Random();
		    int numberOfRound = 3;
		    int computerWon = 0;
		    int playerWon = 0;
		    
		    while(numberOfRound!=0) {
		    	
		   
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
		    	numberOfRound-=1;
		      System.out.println("Draw");
		    }else if(computerMove == 0 && playerMove == 2) {
		    	numberOfRound-=1;
		    	computerWon+=1;
		      System.out.println("Computer win round");
		    }else if(computerMove == 2 && playerMove == 0) {
		    	numberOfRound-=1;
		    	playerWon+=1;
		      System.out.println("Player win !");
		    }else if(computerMove == 1 && playerMove == 0) {
		    	numberOfRound-=1;
		    	computerWon+=1;
		      System.out.println("Computer win !");
		    }else if(computerMove == 0 && playerMove == 1) {
		    	numberOfRound-=1;
		    	playerWon+=1;
		      System.out.println("Player win !");
		    }else if(computerMove == 2 && playerMove == 1) {
		    	numberOfRound-=1;
		    	computerWon+=1;
		      System.out.println("Computer win");
		    }else if(computerMove == 1 && playerMove == 2) {
		    	numberOfRound-=1;
		    	playerWon+=1;
		      System.out.println("Player win");
		    }
		   } 
		    
		    boolean playerIsWinning = playerWon>computerWon;
		    System.out.println("The winner is :"+(playerIsWinning ? "Human" : "Machine"));

		    
		  }

}
