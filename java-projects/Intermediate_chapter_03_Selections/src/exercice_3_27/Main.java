package exercice_3_27;

import java.util.Scanner;

public class Main {

  //initialisation of triangle edges coordinates constant variables

  // A point (origin)
  static final double X1 = 0;
  static final double Y1 = 0;

  // B point 
  static final double X2 = 0;
  static final double Y2 = 100;

  // C point
  static final double X3 = 200;
  static final double Y3 = 0;

  //computing B C slope
  static final double BC_SLOPE = (Y3 - Y2) / (X3 - X2);

  public static void main(String[] args) {

    //input = N point coordinates format [X,Y]

    //output = boolean value indicating if given point is within a right triangle where right angle is in (0 , 0)
    //         and the two other points are (0 , 100) & (200 , 0).

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter a point of coordinates X, Y");

    //storing user inputs

    //N coordinates
    double x = input.nextDouble();
    double y = input.nextDouble();

    //computing BNslope
    System.out.println(BC_SLOPE);
    double BNslope = (y - Y2) / (x - X2);
    System.out.println(BNslope);

    //verifying that x and y are in the same quadrant of the plane as the triangle
    boolean isInSameQuadrant = (x >= 0) && (y >= 0);
    System.out.println(isInSameQuadrant);
    boolean isWithinTriangle = (isInSameQuadrant) && (BNslope < BC_SLOPE);

    //displaying matching output
    if (isInSameQuadrant && isWithinTriangle) {
      System.out.println("The point is in the triangle");

    } else {
      System.out.println("The point is not in the triangle");
    }

    input.close();

  }

}