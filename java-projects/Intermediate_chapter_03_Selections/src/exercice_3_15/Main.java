package exercice_3_15;

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    //input = three digit integer

    //output = prize amount if two digit integer match lottery integer

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //generating 3 digit pseudo-random number
    int lottery = (int) (Math.random() * 1000);

    //isolating each digit for comparaison purposes
    int lotteryFirstDigit = lottery / 100;
    int lotterySecondDigit = (lottery / 10) - lotteryFirstDigit*10;
    int lotteryThirdDigit = lottery % 10;

    //prompting user to enter a three digit integer
    System.out.println("Enter a three digit integer eg.(68, 34, 29...) : ");
    System.out.println(lottery);

    //storing user input
    int guess = input.nextInt();

    //iloating each digit for comparaison purposes
    int guessFirstDigit = guess / 100;
    int guessSecondDigit = (guess / 10)-guessFirstDigit*10;
    int guessThirdDigit = guess % 10;

    //conditional evaluation of matching values and printing appropriate output
    if (guess == lottery) {

      System.out.println("Well done !!! you won the big prize of 12,000 $ !");

    } else if ((guessFirstDigit == lotteryFirstDigit || guessFirstDigit == lotterySecondDigit || guessFirstDigit == lotteryThirdDigit)
        && (guessSecondDigit == lotteryFirstDigit || guessSecondDigit == lotterySecondDigit || guessSecondDigit == lotteryThirdDigit)
        && (guessThirdDigit == lotteryFirstDigit || guessThirdDigit == lotterySecondDigit || guessThirdDigit == lotteryThirdDigit)) {

      System.out.println( "Well done !!! you have matching number but not in the correct order you won the second prize of 5,000 $ !");

    } else if ((guessFirstDigit == lotteryFirstDigit || guessFirstDigit == lotterySecondDigit || guessFirstDigit == lotteryThirdDigit)
        || (guessSecondDigit == lotteryFirstDigit || guessSecondDigit == lotterySecondDigit || guessSecondDigit == lotteryThirdDigit)
        || (guessThirdDigit == lotteryFirstDigit || guessThirdDigit == lotterySecondDigit || guessThirdDigit == lotteryThirdDigit)) {

      System.out.println("You have one matching digit you won the third prize of 2,000$");

    } else {
      System.out.println("No matching numbers you loose !");
    }

    input.close();

  }

}
