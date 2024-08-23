package exercice_04_11;

import java.util.Scanner;

//input = binary digit
//output = corresponding decimal value

public class Main {

	public static void main(String[] args) {
		getUserInput();
	}

	private static void getUserInput() {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a binary digits (0000) :");
		storeUserInput(input.next());
		input.close();
	}

	private static void storeUserInput(String source) {
		String userInput = source;
		computeBinaryToDecimal(userInput);
	}

	private static void computeBinaryToDecimal(String source) {
		int binaryToDecimal = Integer.parseInt(source, 2);
		displayOutput(binaryToDecimal, source);
	}

	private static void displayOutput(int binaryToDecimal, String source) {
		System.out.println("The decimal value for " + source + " is " + binaryToDecimal);
	}

}
