package exercice_05_22;

import java.util.Scanner;

public class LoanAmortizationSchedule {
	
	static int NUMBER_OF_MONTH_PER_YEAR = 12;
	
	public static void main(String[] args) {
		
		prompt("Enter loan ammount : ");
		double loanAmmount = readDoubleInput();
		prompt("Enter loan duration in year :");
		int numberOfYears = readIntegerInput();
		prompt("Enter yearly interest rate :");
		
		
		double yearlyInterestRate = readDoubleInput()/100.0;
		double monthlyInterestRate = computeMonthlyInterestRate(yearlyInterestRate);
	    double totalNumberOfPayments = computeNumberOfPayments(numberOfYears);
		double monthlyPayment = computeMonthlyPayment(loanAmmount,monthlyInterestRate,totalNumberOfPayments);
		System.out.println(monthlyPayment);
		double balance = computeTotalPayment(monthlyPayment,numberOfYears);
		System.out.println(balance);
		double interest =0;
		double principal = 0;

		int paymentCount = 1;
		while(paymentCount<=totalNumberOfPayments) {
			
			interest = balance*monthlyInterestRate;
			principal = monthlyPayment-interest;
			balance = balance - (interest+principal);
			System.out.printf("%d%10.2f%10.2f%10.2f\n",paymentCount,interest,principal,balance);
			
			paymentCount++;
		}
	
	}

	private static double computeNumberOfPayments(int numberOfYears) {
		return numberOfYears * NUMBER_OF_MONTH_PER_YEAR;
	}

	private static double computeMonthlyInterestRate(double yearlyInterestRate) {
		return yearlyInterestRate / NUMBER_OF_MONTH_PER_YEAR;
	}

	private static double computeMonthlyPayment(double loanAmount, double monthlyInterestRate, double totalNumberOfPayments) {
	    return (loanAmount * monthlyInterestRate) / (1 - Math.pow(1 + monthlyInterestRate, -totalNumberOfPayments));
	}
	
	private static double computeTotalPayment(double monthlyPayment, int numberOfyears) {
		return monthlyPayment*(numberOfyears*NUMBER_OF_MONTH_PER_YEAR);
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
			System.out.printf("%s\n",messageToPrompt);
		}
	}