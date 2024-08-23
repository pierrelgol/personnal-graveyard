package exercice_05_14;

import java.util.Scanner;

public class BasicIO {

	static int readByteInput() {
		Scanner input = new Scanner(System.in);
		byte newInput = input.nextByte();
		input.close();
		return newInput;

	}

	static int readShortInput() {
		Scanner input = new Scanner(System.in);
		short newInput = input.nextShort();
		input.close();
		return newInput;

	}

	 static int readIntInput() {
		Scanner input = new Scanner(System.in);
		int newInput = input.nextInt();
		input.close();
		return newInput;

	}

	static int readLongInput() {
		Scanner input = new Scanner(System.in);
		short newInput = input.nextShort();
		input.close();
		return newInput;

	}

	static float readFloatInput() {
		Scanner input = new Scanner(System.in);
		float newInput = input.nextFloat();
		input.close();
		return newInput;

	}

	static double readDoubleInput() {
		Scanner input = new Scanner(System.in);
		double newInput = input.nextDouble();
		input.close();
		return newInput;

	}

	static char readCharInput() {
		Scanner input = new Scanner(System.in);
		char newInput = input.next().charAt(0);
		input.close();
		return newInput;

	}

	static String readStringInput() {
		Scanner input = new Scanner(System.in);
		String newInput = input.next();
		input.close();
		return newInput;

	}

	//********** Boolean **********\\

	//********** Equality **********\\

	static boolean isEqualTo(int sourceToTest,int numberTestedAgainst) {
		return (sourceToTest == numberTestedAgainst);
	}

	private static boolean isEqualTo(double sourceToTest, double numberTestedAgainst) {
		return (sourceToTest == numberTestedAgainst);
	}

	private static boolean isEqualTo(char sourceToTest, char charTestedAgainst) {
		return (sourceToTest == charTestedAgainst);
	}

	private static boolean isEqualTo(byte sourceToTest, byte byteTestedAgainst) {
		return (sourceToTest == byteTestedAgainst);
	}

	private static boolean isEqualTo(short sourceToTest, short shortTestedAgainst) {
		return (sourceToTest == shortTestedAgainst);
	}

	private static boolean isEqualTo(long sourceToTest, long longTestedAgainst) {
		return (sourceToTest == longTestedAgainst);
	}

	private static boolean isEqualTo(boolean sourceToTest, boolean booleanTestedAgainst) {
		return (sourceToTest == booleanTestedAgainst);
	}

	//********** Bigger than **********\\

	static boolean isBiggerThan(int sourceToTest, int numberTestedAgainst) {
		return (sourceToTest > numberTestedAgainst);
	}

	static boolean isBiggerThan(double sourceToTest, double numberTestedAgainst) {
		return (sourceToTest > numberTestedAgainst);
	}

	static boolean isBiggerThan(char sourceToTest, char charTestedAgainst) {
		return (sourceToTest > charTestedAgainst);
	}

	static boolean isBiggerThan(byte sourceToTest, byte byteTestedAgainst) {
		return (sourceToTest > byteTestedAgainst);
	}

	static boolean isBiggerThan(short sourceToTest, short shortTestedAgainst) {
		return (sourceToTest > shortTestedAgainst);
	}

	static boolean isBiggerThan(long sourceToTest, long longTestedAgainst) {
		return (sourceToTest > longTestedAgainst);
	}

	//********** SmallerThan **********\\

	static boolean isSmallerThan(int sourceToTest, int numberTestedAgainst) {
		return (sourceToTest < numberTestedAgainst);
	}

	static boolean isSmallerThan(double sourceToTest, double numberTestedAgainst) {
		return (sourceToTest < numberTestedAgainst);
	}

	static boolean isSmallerThan(char sourceToTest, char charTestedAgainst) {
		return (sourceToTest < charTestedAgainst);
	}

	static boolean isSmallerThan(byte sourceToTest, byte byteTestedAgainst) {
		return (sourceToTest < byteTestedAgainst);
	}

	static boolean isSmallerThan(short sourceToTest, short shortTestedAgainst) {
		return (sourceToTest < shortTestedAgainst);
	}

	static boolean isSmallerThan(long sourceToTest, long longTestedAgainst) {
		return (sourceToTest < longTestedAgainst);
	}
	
	//prompting
	
	static void prompt(String messageToPrompt) {
		System.out.printf("\n%s",messageToPrompt);
	}
	static void printMessage(String messageToPrompt, int numberToPrint) {
		System.out.printf("\n%s %d",messageToPrompt,numberToPrint);
	}
	static void printMessage(String messageToPrompt, double numberToPrint) {
		System.out.printf("\n%s %f",messageToPrompt,numberToPrint);
	}
	static void printMessage(String messageToPrompt, float numberToPrint) {
		System.out.printf("\n%s %f",messageToPrompt,numberToPrint);
	}
	static void printMessage(String messageToPrompt, boolean booleanToPrint) {
		System.out.printf("\n%s %b",messageToPrompt,booleanToPrint);
	}

}
