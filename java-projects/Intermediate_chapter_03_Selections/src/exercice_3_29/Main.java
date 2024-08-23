package exercice_3_29;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = center (x,y) coordinates and radius for first circle (c1), and center (x,y) coordinates and radius for second circle (c2)

    //output = is the second circle (c2) contained within the first circle (c1) or not ?

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter c1's center x,y coordinates, and radius : ");
    
    //storing user input for c1
    double x1 = input.nextDouble();
    double y1 = input.nextDouble();
    double r1 = input.nextDouble();

    //prompting user for input
    System.out.println("Enter c2's center x,y coordinates, and radius : ");
    
    //storing user input for c2
    double x2 = input.nextDouble();
    double y2 = input.nextDouble();
    double r2 = input.nextDouble();
    
    //computing boolean for containment of c2 inside c1
    double distanceOfCirclesCenters = Math.sqrt((Math.pow(x2-x1,2)+Math.pow(y2-y1, 2)));
    boolean c2IsInsideC1 = distanceOfCirclesCenters<=(r1-r2);
    
    //computing overlaping of c2 & c1
    boolean c2OverlapsC1 = distanceOfCirclesCenters<=(r1+r2);
    
    //printing output
    if (c2IsInsideC1) {
      System.out.println("Circle 2 is inside Cirle 1");
    } else if (!c2IsInsideC1) {
      System.out.println("Circle 2 " + (c2OverlapsC1 ? "overlaps Cirle 1" : "does not overlap Cirle 1"));
    }
    input.close();
    

    input.close();

  }

}
