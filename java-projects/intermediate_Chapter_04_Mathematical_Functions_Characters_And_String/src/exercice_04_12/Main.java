package exercice_04_12;

import java.util.Scanner;

//input = binary digit
//output = corresponding decimal value

public class Main {

	public static void main(String[] args) {
		System.out.println((int)'Y');
		getUserInput();
	}

	private static void getUserInput() {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a hex digit :");
		storeUserInput(input.next());
		input.close();
	}

	private static void storeUserInput(String source) {
		char userInput = source.charAt(0);
		computeHexDigitToBinary(userInput);
	}

	private static void computeHexDigitToBinary(char source) {
		String binary = Integer.toBinaryString((int)source);
		displayOutput(binary,source);
	}

	private static void displayOutput(String binary, char source) {
		System.out.println("The Binary representation of " + source + " is " + binary);
	}

}
