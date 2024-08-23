package listing_05_04;

import java.util.Scanner;
// input = answer to random integer subtraction
// output = boolean value that compare answer and result of subtraction

public class SubstractionQuizzLoopWithConfirmationValue {

	public static void main(String[] args) {
		newSubstractionQuizzNumber();
	}

	private static void newSubstractionQuizzNumber() {
		int number1 = (int) (Math.random() * 10);
		int number2 = (int) (Math.random() * 10);
		if (number1 < number2) { //keeps subtraction positive
			rearangeNumbers(number1, number2);
		}
		newSubstractionQuizzPrompt(number1, number2);
	}

	private static void rearangeNumbers(int number1, int number2) {
		newSubstractionQuizzPrompt(number2, number1);
	}

	private static void newSubstractionQuizzPrompt(int number1, int number2) {
		System.out.printf("\nwhat is %d - %d ?", number1, number2);
		askUserForInput(number1,number2);
	}

	private static void askUserForInput(int number1, int number2) {
		Scanner input = new Scanner(System.in);
		int answer = input.nextInt();
		testAnswer(answer,number1,number2);
		input.close();
	}

	private static void testAnswer(int answer, int number1, int number2) {
		if(answer!=(number1-number2)) {
			System.out.println("\nWrong answer try again !");
			newSubstractionQuizzPrompt(number1,number2);
		}
		answerIsCorrect(answer,number1,number2);
		
	}

	private static void answerIsCorrect(int answer, int number1, int number2) {
		System.out.println("\nThe answer is correct do you want to play again ? press Y for yes and N for no");
		Scanner input = new Scanner(System.in);
		char response = input.next().toUpperCase().charAt(0);
		if(response == 'Y') {
			newSubstractionQuizzNumber();
		}else {
			input.close();
			System.exit(1);
		}
	}

}
