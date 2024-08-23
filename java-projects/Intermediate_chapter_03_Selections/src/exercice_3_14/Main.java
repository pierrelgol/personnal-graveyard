package exercice_3_14;

import java.util.Scanner;

public class Main {
  
  public static void main(String[] args) {
    
    //input = guess for heads or tails
    
    //output = boolean value
    
    //generating random number
    double headsOrTails = Math.random();

    boolean isHeads = headsOrTails<0.5;
    boolean isTails = headsOrTails>0.5;
    
    //instantiating scanner
    Scanner input = new Scanner(System.in);
    
    //prompting user for input
    System.out.println("Take a guess ! heads or tails ? (heads = 0, tails = 1)");
    int guess = input.nextInt();
    
    if(guess == 0 && isHeads ) {
      System.out.println("Good guess ! the coin is heads is : "+isHeads);
    }else if(guess == 1 && !isHeads){
      System.out.println("Good guess ! the coin is tails is : "+isTails);
    }else {
      System.out.println("sorry fam ! wrong guess the coin was : "+(isHeads ? "heads" : "tails"));
    }

    
    input.close();
    
  }

}
