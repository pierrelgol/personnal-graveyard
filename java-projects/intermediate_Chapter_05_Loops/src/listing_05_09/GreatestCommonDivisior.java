package listing_05_09;

import java.util.Scanner;

//input = two integers
//output = greatest common divisor

public class GreatestCommonDivisior {

	public static void main(String[] args) throws InterruptedException {

		// instantiating scanner
		Scanner input = new Scanner(System.in);

		// prompting user for inputs
		System.out.println("Enter first integer and second integer to find the GCD");

		// storing user input
		int number1 = input.nextInt();
		int number2 = input.nextInt();

		int gcd = 1;
		int potentialGcd = 2;
		// computing GCD
		while (potentialGcd <= number1 && potentialGcd <= number2) {
			if (number1 % potentialGcd == 0 && number2 % potentialGcd == 0) gcd = potentialGcd;
			potentialGcd++;
		}
		
		System.out.printf("The GDC for %d and %d is %d", number1, number2, gcd);
		input.close();
	}

}
