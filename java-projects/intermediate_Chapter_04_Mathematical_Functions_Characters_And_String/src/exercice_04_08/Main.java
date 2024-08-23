package exercice_04_08;

import java.util.Scanner;

//input = a character
//output = corresponding ASCII code

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
		inputIsValid(input);
	}

	private static void inputIsValid(char source) {
		boolean inputIsValid = source >= 0 && source <= 127;
		if(!inputIsValid) {
			System.out.println("This is not an ASCII character");
			System.exit(1);
		}
		getASCIICodeOfChar(source);
	}

	private static void getASCIICodeOfChar(char source) {
	int ascciCode = source;
		displayOutput(source,ascciCode);
	}

	private static void displayOutput(char source, int ascciCode) {
		System.out.println("The ASCII code for the character "+source+" is "+ascciCode);
	}


}
