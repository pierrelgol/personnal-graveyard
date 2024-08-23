package exercice_3_01;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = a, b, c

    //output = roots of quadratic expression 

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user
    System.out.println("Enter a value for a, b, c :");

    //storing user input
    double a = input.nextDouble();
    double b = input.nextDouble();
    double c = input.nextDouble();

    //computing roots of quadratic expression

    double r1 = (-b + Math.pow(Math.pow(b, 2) - (4 * a * c), 0.5)) / (2 * a);

    double r2 = (-b - Math.pow(Math.pow(b, 2) - (4 * a * c), 0.5)) / (2 * a);

    //choosing output based on the roots found in the quadratic expression tested
    if (r1 != 0 && r2 != 0 && r1 != r2 && !Double.isNaN(r1)) {

      System.out.println("the roots of the quadractic expression for : A = " + a + ", B = " + b + ", C = " + c
          + " is : R1 = " + r1 + ", R2 = " + r2);

    } else if (r1 != 0 && r2 != 0 && r1 == r2 && !Double.isNaN(r1)) {

      System.out.println(
          "the roots of the quadractic expression for : A = " + a + ", B = " + b + ", C = " + c + " is : R = " + r1);

    } else {
      System.out.println("The quadratic expression has no real roots");
    }

    input.close();

  }

}
