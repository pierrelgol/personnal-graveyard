package exercice_05_31;

import java.util.Scanner;

public class ComputeCdValue {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the initial deposit amount :");
		double initialDeposit = input.nextDouble();
		System.out.println("Enter the annual percentage yield :");
		double annualPercentageYield = input.nextDouble();
		System.out.println("Enter maturity period :");
		int durationInMonth = input.nextInt();
		double compoundValue = initialDeposit;
		
		System.out.printf(" %5s   %s","Month","CD Value\n");
		
		for(int i = 0; i<durationInMonth; i++) {
			
			compoundValue = compoundValue + (compoundValue*(annualPercentageYield/1200));
			System.out.printf("%4d     %.2f\n",i+1,compoundValue);
			
			
		}
		input.close();
		
	}

}
