package exercice_04_02;

import java.util.Scanner;

public class Main {
	
	static final double EARTH_RADIUS_IN_KM = 6371.01;
	
	public static void main(String[] args) {
		
		//input = two points longitude/latitude
		
		//output = distance between them on earth
		
		//instantiating Scanner
		Scanner input = new Scanner(System.in);
		
		//prompting user for input
		System.out.println("Enter point 1 (latitude/longitude) in degrees : ");
		System.out.println("Enter point 2 (latitude/longitude) in degrees : ");
		
		//storing user input
			//point N1
			double latitude1 = Math.toRadians(input.nextDouble());
			double longitude1 = Math.toRadians(input.nextDouble());
			//point N2
			double latitude2 = Math.toRadians(input.nextDouble());
			double longitude2 = Math.toRadians(input.nextDouble());
		
		//computing output using great circle formula
			double distanceOfTwoPointsOnASphere = 
					EARTH_RADIUS_IN_KM*Math.acos(Math.sin(latitude1)*Math.sin(latitude2)+Math.cos(latitude1)*Math.cos(latitude2)*Math.cos(longitude1-longitude2));
		
		//displaying output
			System.out.println("The distance between the two points relative to earth is "+ distanceOfTwoPointsOnASphere+" km");
			
		input.close();
		
	}

}
