package listing_05_14;

import java.util.Scanner;

public class Palindrome {

	public static void main(String[] args) {

		// instantiating Scanner
		Scanner input = new Scanner(System.in);

		// prompting user for input
		System.out.println("Enter a word");

		// storing user input
		String wordToTest = input.next();

		// computing boolean is a palindrome

		// index to compare
		int indexOfLeftLetterToCompare = 0;
		int indexOfRightLetterToCompare = wordToTest.length() - 1;

		while (indexOfLeftLetterToCompare < indexOfRightLetterToCompare) {
			if (wordToTest.charAt(indexOfLeftLetterToCompare) == wordToTest.charAt(indexOfRightLetterToCompare)) {
				indexOfLeftLetterToCompare++;
				indexOfRightLetterToCompare--;
			}
			else {
				System.out.println("The word : \""+wordToTest+"\" is not a palindrome");
				System.exit(1);
			}
		}
		System.out.println("The word : \""+wordToTest+"\" is a palindrome");
		input.close();

	}

}
