package exercice_04_07;

import java.util.Scanner;

//input = radius of a circle centred in (0,0)
//output = position of every corner point (P1, P2, P3, P4, P5) of a pentagon bond to the circle with P2 being at the 0 o'Clock position

public class Main {
	
	private static int i = 1;
	
	public static void main(String[] args) {
		askForInput();
	}
	
	private static void askForInput() {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the raidus of the circle :");
		storeUserInput(input.nextDouble());
		input.close();
	}
	
	private static void storeUserInput(double source) {
		double circleRadius = source;
		computeBondedPentagonCornerPointXYCoordinates(circleRadius);
	}

	private static void computeBondedPentagonCornerPointXYCoordinates(double circleRadius) {
		double P1x = computeXPosition(circleRadius);
		double P1y = computeYPosition(circleRadius);
		double P4x = computeXPosition(circleRadius);
		double P4y = computeYPosition(circleRadius);
		double P5x = computeXPosition(circleRadius);
		double P5y = computeYPosition(circleRadius);
		double P3x = computeXPosition(circleRadius);
		double P3y = computeYPosition(circleRadius);
		double P2x = computeXPosition(circleRadius);
		double P2y = computeYPosition(circleRadius);
		displayOutput(P1x, P1y, P2x, P2y, P3x, P3y, P4x, P4y, P5x, P5y);
	}

	// a pentagon has 5 corner being bonded to a circle with P2 being at the 0 o'Clock position this mean that the angle from the circle origin is 360/1
	// P1 is 360/5, P5 is 360/4, P4 is 360/3, P3 is 360/2

	private static double computeXPosition(double circleRadius) {
	double x = circleRadius * Math.cos(Math.toRadians(72 * getI()));
		return x;
	}
	private static double computeYPosition(double circleRadius) {
		double y = circleRadius * Math.sin(Math.toRadians(72 * getI()));
		increaseI();
			return y;
	}
	
	private static void displayOutput(double p1x, double p1y, double p2x, double p2y, double p3x, double p3y, double p4x, double p4y, double p5x, double p5y) {
		System.out.printf(
		"The pentagon bounded corner points coordinates are :"+
		" P1 (%.2f,%.2f) ; P2 (%.2f,%.2f) ; P3 (%.2f,%.2f) ; P4 (%.2f,%.2f) ; P5 (%.2f,%.2f)"
		,p1x,p1y,p2x,p2y,p3x,p3y,p4x,p4y,p5x,p5y);
		
	}

	public static int getI() {
		return i;
	}

	public static void increaseI() {
		i = i+1;
	}


}
