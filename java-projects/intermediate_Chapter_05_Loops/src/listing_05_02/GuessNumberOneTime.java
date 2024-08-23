package listing_05_02;

import java.util.Scanner;

public class GuessNumberOneTime {
	
	public static void main(String[] args) {
		
		//generate a random number
		int number = (int)(Math.random()*101);
		
		//instantiating scanner
		Scanner input = new Scanner(System.in);
		System.out.println("Guess a magic number between 0 and 100");
		
		//prompting user for input
		System.out.println("\nEnter a guess :");
		int guess = input.nextInt();
		
		if(guess == number) {
			System.out.println("Yes ! the number is "+number);
		}else if(guess>number) {
			System.out.println("Your guess is too high !");
		}else {
			System.out.println("Your guess is too low !");

		}
		input.close();
	}

}
