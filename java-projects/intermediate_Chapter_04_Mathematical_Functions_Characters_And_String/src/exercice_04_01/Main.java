package exercice_04_01;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		// input = length from the centre of the pentagon to a vertex

		// output = area of the pentagon round up two decimal

		// instantiating Scanner
		Scanner input = new Scanner(System.in);

		// prompting user for input
		System.out.println("Enter the length from the center of the pentagon to the vertex : ");

		// storing user input
		double r = input.nextDouble();

		// computing output
		double side = 2*r*Math.sin(Math.PI/5);
		double pentagonArea = 5*Math.pow(side, 2)/(4*Math.tan(Math.PI/5));

		// displaying output
		System.out.printf("The area of the pentagon is : %.2f",pentagonArea);
		
		input.close();
	}

}
