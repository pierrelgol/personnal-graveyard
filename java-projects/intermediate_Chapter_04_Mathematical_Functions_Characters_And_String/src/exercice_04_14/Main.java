package exercice_04_14;

import java.util.Scanner;

//input =
//output =

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
		letterGradeToDecimal(userInput);
	}

	private static void letterGradeToDecimal(char userInput) {
		int decimalGrade = 0;
		switch(Character.toUpperCase(userInput)) {
		case 'A' : decimalGrade = 4;
		break;
		case 'B' : decimalGrade = 3;
		break;
		case 'C' : decimalGrade = 2;
		break;
		case 'D' : decimalGrade = 1;
		break;
		case 'F' : decimalGrade = 0;
		break;
		default : System.out.println("Input out of bond !");
		}
		displayOutput(decimalGrade,userInput);
	}

	private static void displayOutput(int decimalGrade, char userInput) {
		System.out.printf("The numeric value for grade %c is %d",userInput,decimalGrade);
		
	}

}
