package exercice_05_44;

import java.util.Scanner;

public class ByteTobinary {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		byte number = input.nextByte();
		input.close();
		System.out.printf("%08d",Integer.parseInt(Integer.toBinaryString(number)));
	}

}
