package exercice_2_19;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    // input = three points coordinates format (xN,yN)

    // output = computed area of the triangle

    //instantiating scanner object 
    Scanner input = new Scanner(System.in);

    //prompting user to enter inputs
    System.out.println("Enter Three points of coordinate x, y : ");
    System.out.println("First Point x than y");

    //storing inputs
    long x1 = input.nextLong();
    long y1 = input.nextLong();

    //prompting user to enter inputs
    System.out.println("Enter Three points of coordinate x, y : ");
    System.out.println("Second Point x than y");

    //storing inputs
    long x2 = input.nextLong();
    long y2 = input.nextLong();


    //prompting user to enter inputs
    System.out.println("Enter Three points of coordinate x, y : ");
    System.out.println("Third Point x than y");

    //storing inputs
    long x3 = input.nextLong();
    long y3 = input.nextLong();


    //computing sides
    long side1 = (long) Math.sqrt(Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2));
    long side2 = (long) Math.sqrt(Math.pow((x3 - x2), 2) + Math.pow((y3 - y2), 2));
    long side3 = (long) Math.sqrt(Math.pow((x1 - x3), 2) + Math.pow((y1 - y3), 2));

    long s = (side1 + side2 + side3) / 2;

    long area = (long) Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));
    


    //diaplaying area
    System.out.println(area);

    input.close();

  }

}
