package exercice_05_30;

import java.util.Scanner;

public class CompoundValue {
	
	static final int NUMBER_OF_MONTH = 12;
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.println("Enter monthly deposit");
		double monthlyDeposit = input.nextDouble();
		double compoundValue = monthlyDeposit;
		System.out.println("Enter annual interest rate");
		double interestRate = input.nextDouble();
		double monthlyInterestRate = interestRate/NUMBER_OF_MONTH;
		System.out.println("Enter compounding duration in month");
		int durationInMonth = input.nextInt();
		
		for(int i = 1; i<durationInMonth; i++) {
			compoundValue = compoundValue*(1+monthlyInterestRate);
			compoundValue = compoundValue + monthlyDeposit;
		}
		System.out.println(compoundValue);
		input.close();
		
	}

}
