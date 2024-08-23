package exercice_04_06;

import java.util.Random;

public class Main {

	static final double CIRCLE_RADIUS = 40;

	public static void main(String[] args) {

		// input = three random points on a circle of radius 40

		// output = angles formed by the triangle made by the three random points

		// instantiating random number generator
		Random random = new Random();

		// generating three random angles for each point
		double p1AngleInRad = Math.toRadians(random.nextDouble(0, (Math.PI * 2)));
		double p2AngleInRad = Math.toRadians(random.nextDouble(0, (Math.PI * 2)));
		double p3AngleInRad = Math.toRadians(random.nextDouble(0, (Math.PI * 2)));

		// computing points coordinates
		double p1x = Math.cos(p1AngleInRad) * CIRCLE_RADIUS;
		double p1y = Math.sin(p1AngleInRad) * CIRCLE_RADIUS;

		double p2x = Math.cos(p2AngleInRad) * CIRCLE_RADIUS;
		double p2y = Math.sin(p2AngleInRad) * CIRCLE_RADIUS;

		double p3x = Math.cos(p3AngleInRad) * CIRCLE_RADIUS;
		double p3y = Math.sin(p3AngleInRad) * CIRCLE_RADIUS;

		// computing sides of the triangle
		double sideAlength = computeDistanceBetweenTwoPointsXY(p1x, p1y, p2x, p2y);
		double sideBlength = computeDistanceBetweenTwoPointsXY(p1x, p1y, p3x, p3y);
		double sideClength = computeDistanceBetweenTwoPointsXY(p1x, p1y, p2x, p2y);

		// to find the angle we need to use the SSS method by computing the two angles
		// using the
		// law of Cosines (c^2 = a^2 + b^2 − 2ab cos(C)) and subtracting it to 180 to
		// find the last angle
		// because one of the property of a triangle is that the sum of it's angle is
		// always equal to 180°

		computeAnglesOfTriangleUsingCosinesLaw(sideAlength, sideBlength, sideClength);

	}

	private static double computeDistanceBetweenTwoPointsXY(double source1x, double source1y, double source2x,
			double source2y) {
		return Math.sqrt((Math.pow(source2x - source1x, 2) + (Math.pow(source2y - source1y, 2))));
	}

	private static void computeAnglesOfTriangleUsingCosinesLaw(double A, double B, double C) {
		double angleABinDegrees = Math.toDegrees(Math.pow(Math.cos(((Math.pow(B, 2) + Math.pow(C, 2) - Math.pow(A, 2))/(2*B*C))), -1));
		double angleBCinDegrees = Math.toDegrees(Math.pow(Math.cos(((Math.pow(C, 2) + Math.pow(A, 2) - Math.pow(B, 2))/(2*C*A))), -1));
		double angleCA = 180 -angleBCinDegrees -angleABinDegrees;
		displayOutput(angleABinDegrees,angleBCinDegrees,angleCA);
	}

	private static void displayOutput(double angleABinDegrees, double angleBCinDegrees, double angleCA) {
		System.out.printf("The angles formed by the randomly generated points are A : %.2f , B : %.2f , C : %.2f ",angleABinDegrees,angleBCinDegrees,angleCA);
		
	}

}
