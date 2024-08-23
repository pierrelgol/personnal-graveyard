package listing_04_02;

import java.util.Scanner;

public class OrderTwoCities {

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);

		// prompt the user for input
		System.out.println("Enter Two cities' name : ");

		// storing user input
		String city1 = input.next();
		String city2 = input.next();

		// checking input validity
		boolean inputIsValid = city1.matches("[A-Za-z]+") && city2.matches("[A-Za-z]+");

		// sorting input by alphabetical order

		if (inputIsValid) {
			if (city1.compareTo(city2) < 0) {
				System.out.println("The cities alphabetical order are " + city1 + ", " + city2);
			}else {
				System.out.println("The cities alphabetical order are " + city2 + ", " + city1);
			}
		}
		input.close();

	}

}
