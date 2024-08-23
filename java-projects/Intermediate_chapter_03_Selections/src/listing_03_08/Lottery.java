package listing_03_08;

import java.util.Scanner;

public class Lottery {

  public static void main(String[] args) {

    //input = two digit integer

    //output = prize amount if two digit integer match lottery integer

    //instantiating scanner
    Scanner input = new Scanner(System.in);

    //generating 2 digit pseudo-random number
    int lottery = (int) (Math.random() * 100);
    

    //isolating each digit for comparaison purposes

    int lotteryFirstDigit = lottery / 10;
    int lotterySecondDigit = lottery % 10;

    //prompting user to enter a two digit integer
    System.out.println("Enter a two digit integer eg.(68, 34, 29...) : ");
    System.out.println(lottery);

    //storing user input
    int guess = input.nextInt();

    //iloating each digit for comparaison purposes

    int guessFirstDigit = guess / 10;
    int guessSecondDigit = guess % 10;

    //conditional evaluation of matching values and printing appropriate output
    if (guess == lottery) {

      System.out.println("Well done !!! you won the big prize of 10,000 $ !");

    } else if (guessFirstDigit == lotterySecondDigit || guessSecondDigit == lotteryFirstDigit) {

      System.out.println(
          "Well done !!! you have matching number but not in the good order you won the second prize of 3,000 $ !");

    } else if (guessFirstDigit == lotteryFirstDigit || guessSecondDigit == lotterySecondDigit
        || guessFirstDigit == lotterySecondDigit || guessSecondDigit == lotteryFirstDigit) {

      System.out.println(
          "You have one matching digit unfortunately not in the right order you won the third prize of 1,000$");

    } else {
      System.out.println("No matching numbers you loose !");
    }
    
    input.close();

  }

}
