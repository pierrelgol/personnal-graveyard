package exercice_05_32;

import java.util.Scanner;

public class GameLottey {
	
	public static void main(String[] args) {

	    Scanner input = new Scanner(System.in);
	    int lottery = (int) (Math.random() * 100);
	    int lotteryFirstDigit = lottery / 10;
	    int lotterySecondDigit = lottery % 10;
	    
	    while(lotteryFirstDigit == lotterySecondDigit) {
	    	 lottery = (int) (Math.random() * 100);
	 	    lotteryFirstDigit = lottery / 10;
	 	    lotterySecondDigit = lottery % 10;
	 	    
	    	
	    }

	    System.out.println("Enter a two digit integer eg.(68, 34, 29...) : ");
	    System.out.println(lottery);
	    int guess = input.nextInt();
	    int guessFirstDigit = guess / 10;
	    int guessSecondDigit = guess % 10;

	    if (guess == lottery) {

	      System.out.println("Well done !!! you won the big prize of 10,000 $ !");

	    } else if (guessFirstDigit == lotterySecondDigit || guessSecondDigit == lotteryFirstDigit) {

	      System.out.println(
	          "Well done !!! you have matching number but not in the good order you won the second prize of 3,000 $ !");

	    } else if (guessFirstDigit == lotteryFirstDigit || guessSecondDigit == lotterySecondDigit
	        || guessFirstDigit == lotterySecondDigit || guessSecondDigit == lotteryFirstDigit) {

	      System.out.println(
	          "You have one matching digit unfortunately not in the right order you won the third prize of 1,000$");

	    } else {
	      System.out.println("No matching numbers you loose !");
	    }
	    
	    input.close();

	  }

}
