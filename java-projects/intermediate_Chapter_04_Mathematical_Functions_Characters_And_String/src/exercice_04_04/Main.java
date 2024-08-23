package exercice_04_04;

import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		
		// input = length from the centre of the hexagon to a vertex

				// output = area of the hexagon round up two decimal

				// instantiating Scanner
				Scanner input = new Scanner(System.in);

				// prompting user for input
				System.out.println("Enter the hexagon sides' length :");

				// storing user input
				double side = input.nextDouble();

				// computing output
				double hexagonArea = 6*Math.pow(side, 2)/(4*Math.tan(Math.PI/6));

				// displaying output
				System.out.printf("The area of the hexagonn is : %.2f",hexagonArea);
				
				input.close();
	}

}
