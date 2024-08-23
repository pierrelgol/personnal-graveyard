package exercice_2_04;

import java.util.Scanner;

public class Main {

  final static double SQUARE_METERS_TO_PING_RATIO = 0.3025;

  public static void main(String[] args) {

    //instantiating scanner object called input 

    Scanner input = new Scanner(System.in);

    //asking user to input value

    System.out.println("Enter a value for square meters : ");

    //storing user input
    double squareMeters = input.nextDouble();

    //storing output
    double ping = squareMeters * SQUARE_METERS_TO_PING_RATIO;

    //displaying output
    System.out.println(squareMeters + " is equal to " + ping + " ping(s)");
    
    input.close();

  }
}
