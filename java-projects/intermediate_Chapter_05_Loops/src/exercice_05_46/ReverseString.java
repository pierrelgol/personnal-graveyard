package exercice_05_46;

import java.util.Scanner;

public class ReverseString {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter a string :");
		
		String str = input.next();
		System.out.print(str+" in reverse is :");
		for(int i = str.length()-1; i>=0; ) {
			System.out.printf("%c",str.charAt(i));
			i--;
		}
		
		
	}

}
