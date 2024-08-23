package listing_05_06;

import java.util.Scanner;

public class TestDoWhile {
	
	//show case of do while loop

	public static void main(String[] args) {

		int data;
		int sum = 0;
		// instantiating Scanner
		Scanner input = new Scanner(System.in);
		do {
			// prompting user for input
			System.out.println("Enter an integer (inputs ends if zero)");
			// storing user input
			data = input.nextInt();
			// computing
			sum += data;
			
		}while (data != 0);
		System.out.println("The sum is " + sum);
		input.close();
	}

}
