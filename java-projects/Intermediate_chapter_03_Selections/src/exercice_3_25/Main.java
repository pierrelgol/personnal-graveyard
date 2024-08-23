package exercice_3_25;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = two lines of coordinates  ( x1 , y1 ) , ( x2 , y2 ) & ( x3 , y3 ) ,( x4 , y4 )

    //output = computing intersection

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("Enter the value for the coordinates of your two segments : ( x1 , y1 ) , ( x2 , y2 ) & ( x3 , y3 ) ,( x4 , y4 )");

    //storing first Point coordinates
    double x1 = input.nextDouble();
    double y1 = input.nextDouble();

    //storing second Point coordinates
    double x2 = input.nextDouble();
    double y2 = input.nextDouble();

    //storing third Point coordinates
    double x3 = input.nextDouble();
    double y3 = input.nextDouble();

    //storing fourth Point coordinates
    double x4 = input.nextDouble();
    double y4 = input.nextDouble();

    /*                  Computing intersection equation using Cramer's rule to compute 2 x 2 linear equation
     * 
     *      Cramer's rule:
     *  
     *      In linear algebra, Cramer's rule is an explicit formula for the solution of a system of linear equations with as many equations as unknowns,
     *      valid whenever the system has a unique solution. It expresses the solution in terms of the determinants of the (square) coefficient matrix 
     *      and of matrices obtained from it by replacing one column by the column vector of right-sides of the equations.
     * 
     * 
     *      initial equation to solve intersection of two segment is :
     * 
     *      (y1 - y2)x - (x1-x2)y = (y1 - y2)x1 - (x1 - x2)y1
     *      (y3 - y4)x - (x3-x4)y = (y3 - y4)x3 - (x3 - x4)y3
     * 
     *      Cramer's rule to compute 2 x 2 linear equation :
     * 
     *      a*x + b*y = e             x = e*d - b*f / a*d - b*c
     *      c*x + d*y = f             y = a*f - e*c / a*d - b*c
     *      
     *      points coordinates need to be converted accordingly to be used in Cramer's rule because this is the simplest way to compute the solution,
     *      based on my current knowledge, this is also a requirement by the book
     */

    //conversion to Cramer's rule variable name/value
    double a = y1 - y2;
    double b = x1 - x2;
    double c = y3 - y4;
    double d = x3 - x4;

    //computing 'e' value
    double e = a * x1 - b * y1;
    //computing 'f' value
    double f = c * x3 - d * y3;

    //computing solution for intersectionnability of user inputed segments
    double x = ((e * d) - (b * f)) / ((a * d) - (b * c));
    double y = ((a * f) - (e * c)) / ((a * d) - (b * c));
    
    double formatedX = (int) (x*100000)/100000.0; //rounding using truncating mechanic of int casting
    double formatedY = (int) (y*100000)/100000.0; //rounding using truncating mechanic of int casting

    //checking boolean isParallel if Cramer's rule equation yields no solution the segments are parallel
    boolean isParallel = Double.isInfinite(x) && Double.isInfinite(y);

    //prompting user
    System.out.println((isParallel ? "The two lines are parallel " : "The intersecting point is at (" + formatedX + formatedY + ")"));

    input.close();

  }

}