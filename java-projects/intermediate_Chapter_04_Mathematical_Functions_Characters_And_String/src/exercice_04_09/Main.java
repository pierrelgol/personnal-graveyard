package exercice_04_09;

import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		setUserInput();
	}

	private static void setUserInput() {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a character :");
		storeUserInput(input.next());
		input.close();
	}

	private static void storeUserInput(String source) {
		char input = source.charAt(0);
		displayOutput(input);
	}

	private static void displayOutput(char source) {
		System.out.println("The Unicode value for the character "+source+" is "+getUnicodeCharacterOfChar(source));
	}
	private static String getUnicodeCharacterOfChar(char ch) {
	    return String.format("\\u%04x", (int) ch);
	}
}
