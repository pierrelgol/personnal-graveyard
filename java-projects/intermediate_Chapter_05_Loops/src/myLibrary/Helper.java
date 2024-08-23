package myLibrary;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Helper {
	
	public static int readIntegerInput() {
		Scanner input = new Scanner(System.in);
		try { int newInput = input.nextInt();
			  input.close();
			  return newInput;
			} catch (InputMismatchException e) {
			System.out.println("Input is not an Integer. Try again :");
			}return readIntegerInput();
	}


	public static int readByteInput() {
		Scanner input = new Scanner(System.in);
		try { byte newInput = input.nextByte();
		  input.close();
		  return newInput;
		} catch (InputMismatchException e) {
		System.out.println("Input is not a Byte. Try again :");
		}return readByteInput();

	}

	public static int readShortInput() {
		Scanner input = new Scanner(System.in);
		try { short newInput = input.nextShort();
		  input.close();
		  return newInput;
		} catch (InputMismatchException e) {
		System.out.println("Input is not an Short. Try again :");
		}return readShortInput();
	}

	public static long readLongInput() {
		Scanner input = new Scanner(System.in);
		try { Long newInput = input.nextLong();
		  input.close();
		  return newInput;
		} catch (InputMismatchException e) {
		System.out.println("Input is not an Long. Try again :");
		}return readLongInput();
	}

	public static float readFloatInput() {
		Scanner input = new Scanner(System.in);
		try { float newInput = input.nextFloat();
		  input.close();
		  return newInput;
		} catch (InputMismatchException e) {
		System.out.println("Input is not a Float. Try again :");
		}return readFloatInput();
	}

	public static double readDoubleInput() {
		Scanner input = new Scanner(System.in);
		try { double newInput = input.nextDouble();
		  input.close();
		  return newInput;
		} catch (InputMismatchException e) {
		System.out.println("Input is not an Double. Try again :");
		}return readDoubleInput();
	}

	public static char readCharInput() {
		Scanner input = new Scanner(System.in);
		try { char newInput = input.next().charAt(0);
		  input.close();
		  return newInput;
		} catch (InputMismatchException e) {
		System.out.println("Input is not a Char. Try again :");
		}return readCharInput();
	}

	public static String readStringInput() {
		Scanner input = new Scanner(System.in);
		try { String newInput = input.next();
		  input.close();
		  return newInput;
		} catch (InputMismatchException e) {
		System.out.println("Input is not a String. Try again :");
		}return readStringInput();
	}
	
	//prompting
	
	public static void prompt(String messageToPrompt) {
		System.out.printf("\n%s",messageToPrompt);
	}
	public static void printChar(char charToPrompt) {
		System.out.printf("%c",charToPrompt);
	}
	public static void printInteger(int intToPrompt) {
		System.out.printf("%d",intToPrompt);
	}
	public static void printMessage(String messageToPrompt, int numberToPrint) {
		System.out.printf("\n%s %d",messageToPrompt,numberToPrint);
	}
	public static void printMessage(String messageToPrompt, double numberToPrint) {
		System.out.printf("\n%s %f",messageToPrompt,numberToPrint);
	}
	public static void printMessage(String messageToPrompt, float numberToPrint) {
		System.out.printf("\n%s %f",messageToPrompt,numberToPrint);
	}
	public static void printMessage(String messageToPrompt, boolean booleanToPrint) {
		System.out.printf("\n%s %b",messageToPrompt,booleanToPrint);
	}

}

