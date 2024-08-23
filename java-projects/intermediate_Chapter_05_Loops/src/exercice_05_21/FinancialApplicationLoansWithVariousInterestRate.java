package exercice_05_21;

import java.util.Scanner;
public class FinancialApplicationLoansWithVariousInterestRate {
	
	static double STARTING_INTEREST_RATE = 0.05;
	static double ENDING_INTEREST_RATE = 0.101;
	static final int NUMBER_OF_MONTH_PER_YEAR = 12;
	
	public static void main(String[] args) {
		prompt("Enter Loan Ammount");
		double loanAmmount = readDoubleInput();
		prompt("Enter number of years ");
		int numberOfyears = readIntegerInput();
		double monthlyPayment = computeMonthlyPayment(loanAmmount,numberOfyears);
		double TotalPayment = computeTotalPayment(monthlyPayment,numberOfyears);
		System.out.println("Interest Rate    Monthly Payment    Total Payment");
		
		do{System.out.printf("%.3f%%%20.2f%20.2f\n",(STARTING_INTEREST_RATE*100),monthlyPayment,TotalPayment);
			monthlyPayment = computeMonthlyPayment(loanAmmount,numberOfyears);
			TotalPayment = computeTotalPayment(monthlyPayment,numberOfyears);
			STARTING_INTEREST_RATE = STARTING_INTEREST_RATE +0.0025;
		}while(STARTING_INTEREST_RATE<ENDING_INTEREST_RATE);
		
	}


	
	private static double computeTotalPayment(double monthlyPayment, int numberOfyears) {
		return monthlyPayment*(numberOfyears*NUMBER_OF_MONTH_PER_YEAR);
	}
	
	private static double computeMonthlyPayment(double loanAmount, double numberOfyears) {
	    double monthlyInterestRate = STARTING_INTEREST_RATE / NUMBER_OF_MONTH_PER_YEAR;
	    double totalNumberOfPayments = numberOfyears * NUMBER_OF_MONTH_PER_YEAR;
	    return (loanAmount * monthlyInterestRate) / (1 - Math.pow(1 + monthlyInterestRate, -totalNumberOfPayments));
	}

	public static double readDoubleInput() {
		Scanner input = new Scanner(System.in);
		return input.nextDouble();
	}
	
	public static int readIntegerInput() {
		Scanner input = new Scanner(System.in);
	    return input.nextInt();
	}
	
	public static void prompt(String messageToPrompt) {
		System.out.printf("%s",messageToPrompt);
	}
}