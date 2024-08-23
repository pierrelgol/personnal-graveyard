package listing_05_10;

import java.util.Scanner;

public class FutureTuition {
	
	//input = initial year tuition price / yearly inflation rate
	//output = number of years ti'll tuition fee his doubled
	
	public static void main(String[] args) {
		
		//instantiating scanner
		Scanner input = new Scanner(System.in);
		
		//prompting user for input
		System.out.println("What is your current tuition price ?");
		
		//storing user input
		double tuitionPrice = input.nextDouble();
		
		//prompting user for input
		System.out.println("What is the annual inflation rate of your tuition ?");
		
		//storing user input
		double inflationRate = 1 + (input.nextDouble()/100.0);
		input.close();
		
		//computing number of years to double tuition
		double doubleTuitionPrice = tuitionPrice*2;
		int numberOfYearTillDouble = 0;
		
		while(tuitionPrice <= doubleTuitionPrice) {
			tuitionPrice = tuitionPrice *inflationRate;
			numberOfYearTillDouble++;
		}
		System.out.println("The tuition price will double in "+numberOfYearTillDouble+" year(s)");
		
		
	}

}
