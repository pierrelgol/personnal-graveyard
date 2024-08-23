package listing_05_03;

import java.util.Scanner;

public class GuessNumber {

	//input = integer
	//output = prompt appropriate message based on matching input/random number
	
	public static void main(String[] args) {

		// generate a random number
		int number = (int) (Math.random() * 101);

		// instantiating scanner
		Scanner input = new Scanner(System.in);
		System.out.println("Guess a magic number between 0 and 100");
		int guess = -1;
		
		// prompting user for input
		while (guess != number) {
			System.out.println("\nEnter a guess :");
			guess = input.nextInt();
		//processing answer validity
			if (guess == number) {
				System.out.println("Yes ! the number is " + number);
			} else if (guess > number) {
				System.out.println("Your guess is too high !");
			} else {
				System.out.println("Your guess is too low !");

			}
		}
		input.close();
	}

}
