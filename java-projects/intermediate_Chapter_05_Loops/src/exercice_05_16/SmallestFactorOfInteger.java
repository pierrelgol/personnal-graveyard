package exercice_05_16;

import java.util.InputMismatchException;
import java.util.Scanner;

public class SmallestFactorOfInteger {

	public static void main(String[] args) {
		promptMessage("Enter an Integer :");
		int input = readIntegerInput();
		int[] factorsOfInteger = new int[numberOFactorsFor(input)];
		computeFactorsOfInteger(factorsOfInteger,input);
		for(int e :factorsOfInteger) {
			System.out.printf("%d, ",e);
		}
	}
	private static void computeFactorsOfInteger(int[] factorsOfInteger, int input) {
		for(int i = 0; i<factorsOfInteger.length-1; i++) {
			for(int j = 2; j<input; j++) {
				if(input % j == 0) {
				factorsOfInteger[i] = j;
				i++;
				}
			}
		}
	}
	private static int numberOFactorsFor(int input) {
		int numbersOfFactors = 0;
		for (int i = 2; i < input; i++) {
			if (input % i == 0)numbersOfFactors += 1;		
		}return numbersOfFactors;
	}
	private static int readIntegerInput() {
		Scanner input = new Scanner(System.in);
		try { int newInput = input.nextInt();
			  input.close();
			  return newInput;
			} catch (InputMismatchException e) {
			System.out.println("Wrong input !d");
			}return readIntegerInput();
	}

	private static void promptMessage(String message) {
		System.out.println(message);
	}
}
