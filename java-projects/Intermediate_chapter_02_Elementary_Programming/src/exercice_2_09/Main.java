package exercice_2_09;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    // input = velocityt0,t1 and time span in s

    // output = average acceleration 

    // instantiating Scanner object called input
    Scanner input = new Scanner(System.in);

    //prompting user to enter values 
    System.out.println("Enter velocity at t0 : ");

    // storing value
    double startingVelocity = input.nextDouble();

    //prompting user to enter values 
    System.out.println("Enter velocity at t1 : ");

    // storing value
    double finalVelocity = input.nextDouble();

    //prompting user to enter values 
    System.out.println("Enter time spann in s : ");

    // storing value
    double timeSpan = input.nextDouble();

    // storing value / generating output
    double averageAcceleration = (finalVelocity - startingVelocity) / timeSpan;
    
    
    //formating value
    double output = (int)(averageAcceleration*10000)/10000.0;

    // displaying output
    System.out.println("the average acceleration is : " + output);

    input.close();

  }

}
