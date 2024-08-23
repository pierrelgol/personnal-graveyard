package listing_04_05;

import java.util.Scanner;

public class LotteryUsingStrings {
	
	 public static void main(String[] args) {

		    //input = two digit integer

		    //output = prize amount if two digit integer match lottery integer

		    //instantiating scanner
		    Scanner input = new Scanner(System.in);

		    //generating 2 digit pseudo-random number
		    String lottery = ""+(int) (Math.random() * 10)+(int) (Math.random() * 10);

		    //prompting user to enter a guess
		    System.out.println("Enter your lottery pick (two digits) : ");
		    System.out.println(lottery);

		    //storing user input
		    String guess = input.nextLine();
		    
		    //isolating each digit for comparison purposes
		    char lotteryFirstDigit = lottery.charAt(0);
		    char lotterySecondDigit =  lottery.charAt(1);

		    //isolating each digit for comparison purposes
		    char guessFirstDigit = guess.charAt(0);
		    char guessSecondDigit =  guess.charAt(1);

		    //conditional evaluation of matching values and printing appropriate output
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
