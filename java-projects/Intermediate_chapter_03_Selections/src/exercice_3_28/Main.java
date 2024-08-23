package exercice_3_28;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = center (x,y) coordinates, width and height for first retangle (r1), and center (x,y) coordinates, width and height for second retangle (r2)

    //output = is the second rectangle (r2) contained within the first rectangle (r1) or not ?

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter r1's center x,y coordinates, width and height");

    //storing user input for r1
    double x1 = input.nextDouble();
    double y1 = input.nextDouble();

    double r1Width = input.nextDouble();
    double r1Height = input.nextDouble();

    //prompting user for input
    System.out.println("Enter r2's center x,y coordinates, width and height");

    //storing user input for r2
    double x2 = input.nextDouble();
    double y2 = input.nextDouble();

    double r2Width = input.nextDouble();
    double r2Height = input.nextDouble();

    //computing if center (x2,y2) coordinates are within r1's area
    double horizontalBoundR1 = Math.abs(x1 + (r1Width / 2.0));
    double verticalBoundR1 = Math.abs(y1 + (r1Height / 2.0));
    boolean r2CoordinatesAreInR1Area = (x2 <= horizontalBoundR1) && (y2 <= verticalBoundR1);

    //computing r2 bounds to determine if r2 bounds are within r1 bounds
    double horizontalBoundR2 = Math.abs(x2 + (r2Width / 2.0));
    double verticalBoundR2 = Math.abs(y2 + (r2Height / 2.0));
    boolean r2BoundsWithinR1 = (horizontalBoundR2 <= horizontalBoundR1) && (verticalBoundR2 <= verticalBoundR1);

    //computing overlaping boolean
    boolean r2OverlapR1 = x1 - r1Width / 2 < x2 + r2Width / 2 && x1 + r1Width / 2 > x2 - r2Width / 2
        && y1 - r1Height / 2 < y2 + r2Height / 2 && y1 + r1Height / 2 > y2 - r2Height / 2;

    //printing output
    if (r2CoordinatesAreInR1Area && r2BoundsWithinR1) {
      System.out.println("r2 is inside r1");
    } else if (!r2BoundsWithinR1) {
      System.out.println("r2 " + (r2OverlapR1 ? "overlaps r1" : "does not overlap r1"));
    }
    input.close();

  }

}
