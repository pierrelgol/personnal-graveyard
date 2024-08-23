package case_Study_05_03;

import java.util.Scanner;

//input = integer
//output = repeated prompt until user can guess the random number

public class GuessingNumbers {

	public static void main(String[] args) {
		System.out.println("Guess a Magic number between 0 and 100");
		generateRandomNumberToGuess();
	}

	private static void generateRandomNumberToGuess() {
		int numberToGuess = (int) (Math.random() * 101);
		System.out.println(numberToGuess);
		askUserToGuess(numberToGuess);
	}

	private static void askUserToGuess(int numberToGuess) {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a guess :");
		int answer = input.nextInt();
		isGuessMatchingNumberToGuess(answer, numberToGuess);
		input.close();

	}

	private static void isGuessMatchingNumberToGuess(int answer, int numberToGuess) {
		while (answer != numberToGuess) {
			giveHint(answer, numberToGuess);
		}
		System.out.println("Yes the number is " + numberToGuess);
	}

	private static void giveHint(int answer, int numberToGuess) {
		if (answer > numberToGuess && answer != numberToGuess) {
			System.out.println("Your guess is too high !");
			askUserToGuess(numberToGuess);
		} else if (answer < numberToGuess && answer != numberToGuess) {
			System.out.println("Your guess is too low !");
			askUserToGuess(numberToGuess);
		}
		System.exit(1);
	}

}
