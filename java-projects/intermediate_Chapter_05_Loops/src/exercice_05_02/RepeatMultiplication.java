package exercice_05_02;

import java.util.Scanner;

public class RepeatMultiplication {

	public static void main(String[] args) {

		int answer = -1;
		int count = 0;
		int correctCount = 0;
		Scanner input = new Scanner(System.in);
		long startTimer = System.currentTimeMillis();
		
		
		while (count < 10) {
			// generating random numbers
			int number1 = (int) (Math.random() * 13);
			int number2 = (int) (Math.random() * 13);
			// prompting user
			System.out.println("What is the result of the multiplication of : " + number1 + " * " + number2 + " ?");
			// storing user input
			answer = input.nextInt();
			// computing boolean value of user input and printing answer accordingly
			if (answer == number1 * number2) {
				System.out.println("Your anwser is correct !");
				correctCount++;
			} else {
				System.out.println("Wrong anwser the result of : " + number1 + " * " + number2 + " is "+number2*number1);
			}
			count++;
		}
		long endTimer = System.currentTimeMillis();
		int timeToSolve = (int) (endTimer - startTimer) / 1000;
		System.out.println("you took " + timeToSolve + " s to solve those subtractions and you got " + correctCount+ " correct answer");
		input.close();
	}

}
