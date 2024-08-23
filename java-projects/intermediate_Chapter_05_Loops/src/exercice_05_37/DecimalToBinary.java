package exercice_05_37;

import java.util.Scanner;

public class DecimalToBinary {

	public static void main(String[] args) throws InterruptedException {

		Scanner input = new Scanner(System.in);
		int decimal = 171;

		getBinaryOfInteger(decimal);

	}

	private static void getBinaryOfInteger(int decimal) throws InterruptedException {
		int binary = 0;
		int count = 7;
		int[] binaryCode = new int[8];
		while (decimal != 0) {
			Thread.sleep(333);
			System.out.println(decimal);
			binary = decimal % 2;
			decimal = decimal / 2;
			binaryCode[count] = binary;
			for (int e : binaryCode) {
				Thread.sleep(333);
				System.out.printf("%d ", e);
			}
			count--;
		}

	}

}
