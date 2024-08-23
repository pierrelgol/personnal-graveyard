package exercice_04_05;

import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		
		//input = number of sides / sides length
		
		//output = area of the polygon 
		
		//instantiating Scanner
		Scanner input = new Scanner(System.in);
		
		//prompting user for input
		System.out.println("Enter the number of side to compute :");
		
		//storing user input
		int numberOfSide = (int)input.nextDouble();
		
		//prompting user for input
		System.out.println("Enter the length of side to compute :");
		
		//storing user input
		double lengthOfSide = input.nextDouble();

		//checking input validity
		boolean inputIsValid = numberOfSide >= 4 && lengthOfSide > 0;
		
		//computing output
		if(inputIsValid) {
			computeAreaOfPolygon(numberOfSide,lengthOfSide);
		}else {
			System.out.println("Input is Invalid");
		}
		input.close();
	}
	//displaying output
	private static void computeAreaOfPolygon(int numberOfSide, double lengthOfSide) {
		double areaOfpolygon = numberOfSide*Math.pow(lengthOfSide, 2)/(4*Math.tan(Math.PI/numberOfSide));
		System.out.printf("The area of polygon is %.2f",areaOfpolygon);
	}

}
