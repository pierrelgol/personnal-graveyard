package exercice_3_24;

import java.util.Random;

public class Main {

  public static void main(String[] args) {

    //input = none

    //output = randomly picked card from a tradiational 52 card deck, with Rank and suit

    //instantiating random
    Random random = new Random();

    //generating random Rank, and Suit
    int randomCardRank = random.nextInt(1, 13);
    int randomCardSuit = random.nextInt(3) + 1;

    String rank = "";
    String suit = "";

    //mathing rank to generate appropriate output
    switch (randomCardRank) {
    case 1:
      rank = "Ace";
      break;
    case 2:
      rank = "2";
      break;
    case 3:
      rank = "3";
      break;
    case 4:
      rank = "4";
      break;
    case 5:
      rank = "5";
      break;
    case 6:
      rank = "6";
      break;
    case 7:
      rank = "7";
      break;
    case 8:
      rank = "8";
      break;
    case 9:
      rank = "9";
      break;
    case 10:
      rank = "10";
      break;
    case 11:
      rank = "Jack";
      break;
    case 12:
      rank = "Queen";
      break;
    case 13:
      rank = "King";
      break;
    }
    //mathing suit to generate appropriate output
    switch (randomCardSuit) {
    case 1:
      suit = "Club";
      break;
    case 2:
      suit = "Diamonds";
      break;
    case 3:
      suit = "Hearts";
      break;
    case 4:
      suit = "Spades";
      break;
    }
    
    //prompting user output
    System.out.println("The card you picked is "+rank+" of "+suit);

  }

}
