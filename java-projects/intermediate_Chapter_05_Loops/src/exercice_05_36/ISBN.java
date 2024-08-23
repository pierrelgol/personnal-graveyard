package exercice_05_36;

import java.util.Scanner;

public class ISBN {
	
	public static void main(String[] args) {

	    //input = ISBN 9 as integer

	    //output = ISBN 10

	    //instantiating scanner
	    Scanner input = new Scanner(System.in);

	    //prompting user for input
	    System.out.println("Enter ISBN 9 as integer :");

	    //storing user input
	    String isbn9 = input.next();
	    
	  //computing tenth digit
	    int tenthDigit = 0;

	    
	    //isolating each digit
	    for(int i = 0; i<isbn9.length(); i++) {
	    	tenthDigit += (i+1)*Integer.parseInt(isbn9, i, i+1, 10);
	    	System.out.println(tenthDigit);
	    }

	    tenthDigit = tenthDigit%11;
	    

	    //output ISBN10
	    if (tenthDigit == 10) {
	      System.out.println(isbn9.charAt(0) + "" + isbn9 + "X");
	    } else {
	      int isbn10 = Integer.parseInt(isbn9) * 10 + tenthDigit;
	      System.out.println(isbn9.charAt(0) + "" + isbn10);
	    }

	    input.close();

	  }

}
