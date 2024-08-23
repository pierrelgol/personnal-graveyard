package listing_05_04;

import java.util.Scanner;

public class SubstractionQuizzLoop {

	// input = answer to random integer subtraction
	// output = boolean value that compare answer and result of subtraction
	
	public static void main(String[] args) {


		int answer = -1;
		int count = 0;
		int correctCount = 0;
		Scanner input = new Scanner(System.in);
		long startTimer = System.currentTimeMillis();
		while (count < 5) {

			// generating random numbers
			int number1 = (int) (Math.random() * 10);
			int number2 = (int) (Math.random() * 10);

			// Swapping values for the subtraction to always be positive
			if (number1 < number2) {
				int temp = number1;
				number1 = number2;
				number2 = temp;
			}

			// instantiating scanner

			// prompting user
			System.out.println("What is the result of the substraction of : " + number1 + " - " + number2 + " ?");

			// storing user input
			answer = input.nextInt();

			// computing boolean value of user input and printing answer accordingly
			if (answer == number1 - number2) {
				System.out.println("Your anwser is correct !");
				correctCount++;
			} else {
				System.out.println("Wrong anwser the result of : " + number1 + " - " + number2 + " is not : " + answer
						+ " the coorect answer is : " + (number1 - number2));
			}
			count++;
		}
		long endTimer = System.currentTimeMillis();
		int timeToSolve = (int) (endTimer-startTimer)/1000;
		System.out.println("you took "+timeToSolve+" s to solve those subtractions and you got "+correctCount+" correct answer");
		input.close();
	}
}
