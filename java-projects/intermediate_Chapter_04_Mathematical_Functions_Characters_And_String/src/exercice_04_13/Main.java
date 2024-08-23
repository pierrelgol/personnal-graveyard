package exercice_04_13;

import java.util.Scanner;

//input = a letter
//output = boolean (vowel/consonant)

public class Main {

	public static void main(String[] args) {
		getUserInput();
	}

	private static void getUserInput() {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a letter :");
		storeUserInput(input.next());
		input.close();
	}

	private static void storeUserInput(String source) {
		char userInput = source.charAt(0);
		isCharVowelOrConsonant(userInput);
	}

	private static void isCharVowelOrConsonant(char source) {
		int valueOfChar = (int) Character.toUpperCase(source);
		boolean isVowel = (int) valueOfChar == 65 || valueOfChar == 69 || valueOfChar == 73 || valueOfChar == 79|| valueOfChar == 85 || valueOfChar == 89;
		displayOutput(isVowel, source);
	}

	private static void displayOutput(boolean isVowel, char userInput) {
		System.out.println(userInput + " " + (isVowel ? "is a vowel " : "is a consonant"));

	}

}
