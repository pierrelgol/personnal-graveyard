package exercice_3_19;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = three coordinates in the format x,y

    //output = perimeter of triangle if coordinates form valid triangle

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for value
    System.out.println("Enter 3 set of coordinates (X,Y) for the points A,B,C :");
    
    //point A :
    double aX = input.nextDouble();
    double aY = input.nextDouble();

    //point B :
    double bX = input.nextDouble();
    double bY = input.nextDouble();

    //point C :
    double cX = input.nextDouble();
    double cY = input.nextDouble();

    //computing each sides length
    double sideAB = computeLength(aX, aY, bX, bY);
    double sideAC = computeLength(aX, aY, cX, cY);
    double sideBC = computeLength(bX, bY, cX, cY);

    //verifying validity of coordinates to form triangle
    boolean coordinatesFormTriangle = (sideAB + sideAC) > sideBC && (sideBC + sideAC) > sideAB && (sideAB + sideBC) > sideAC;

    if (coordinatesFormTriangle) {
      computePerimeterOfTriangle(sideAB, sideAC, sideBC);
    } else {
      System.out.println("The coordinates don't form a triangle, the perimeter cannot be computed");
    }
    input.close();
  }

  //method to improve readability
  static void computePerimeterOfTriangle(double sideAB, double sideAC, double sideBC) {
    System.out.println("The perimeter of the triangle is : " + (sideAB + sideAC + sideBC));
  }

  //method to simplify code and improve readability
  static double computeLength(double Nx1, double Ny1, double Nx2, double Ny2) {
    return Math.sqrt(Math.pow(Nx2 - Nx1, 2) + Math.pow(Ny2 - Ny1, 2));

  }

}
