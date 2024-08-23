package exercice_3_09;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = ISBN 9 as integer

    //output = ISBN 10

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //prompting user for input
    System.out.println("Enter ISBN 9 as integer :");

    //storing user input
    int isbn9 = input.nextInt();

    //isolating each digit
    int firstDigit = (int) (isbn9 / 1E8);
    int secondDigit = (int) (isbn9 / 1E7);
    int thirdDigit = (int) (isbn9 / 1E6) % 10;
    int fourthDigit = (int) (isbn9 / 1E5) % 10;
    int fithDigit = (int) (isbn9 / 1E4) % 10;
    int sixthDigit = (int) (isbn9 / 1E3) % 10;
    int seventhDigit = (int) (isbn9 / 1E2) % 10;
    int heigthDigit = (int) (isbn9 / 1E1) % 10;
    int nineDigit = (int) (isbn9 / 1) % 10;

    //computing tenth digit
    int tenthDigit = (firstDigit * 1 + secondDigit * 2 + thirdDigit * 3 + fourthDigit * 4 + fithDigit * 5
        + sixthDigit * 6 + seventhDigit * 7 + heigthDigit * 8 + nineDigit * 9) % 11;

    //output ISBN10
    if (tenthDigit == 10) {
      System.out.println(firstDigit + "" + isbn9 + "X");
    } else {
      int isbn10 = isbn9 * 10 + tenthDigit;
      System.out.println(firstDigit + "" + isbn10);
    }

    input.close();

  }

}
