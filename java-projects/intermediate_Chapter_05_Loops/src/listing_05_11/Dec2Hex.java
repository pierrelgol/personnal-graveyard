package listing_05_11;

import java.util.Scanner;

public class Dec2Hex {
	
	public static void main(String[] args) {
		
		//instantiate Scanner
		Scanner input = new Scanner(System.in);
		
		//prompt user for input
		System.out.println("Enter a decimal number to convert to Hexadecimal :");
		
		//store user input
		int decimalNumber = input.nextInt();
		
		//compute hexadecimal String
		String hexadecimalNumber = "";
		
		while(decimalNumber!=0) {
			int hexValue = decimalNumber % 16;
			char hexDigit = (0 <= hexValue && hexValue <= 9) ? (char)(hexValue + '0') : (char)(hexValue -10 + 'A');
			hexadecimalNumber = hexDigit + hexadecimalNumber;
			decimalNumber = decimalNumber/16;
		}
		System.out.println("The hex number is : "+hexadecimalNumber);
		input.close();
		
	}

}
