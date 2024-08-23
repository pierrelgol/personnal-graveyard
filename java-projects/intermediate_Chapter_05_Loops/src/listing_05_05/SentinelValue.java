package listing_05_05;

import java.util.Scanner;

public class SentinelValue {
	
	//show case of Sentinel value

	public static void main(String[] args) {

		// instantiating Scanner
		Scanner input = new Scanner(System.in);

		// prompting user for input
		System.out.println("Enter an integer (inputs ends if zero)");

		// storing user input
		int data = input.nextInt();

		int sum = 0;

		while (data != 0) {

			// computing
			sum += data;

			// prompting user for input
			System.out.println("Enter an integer (inputs ends if zero)");

			// storing user input
			data = input.nextInt();

		}
		System.out.println("The sum is " + sum);
		input.close();

	}

}
