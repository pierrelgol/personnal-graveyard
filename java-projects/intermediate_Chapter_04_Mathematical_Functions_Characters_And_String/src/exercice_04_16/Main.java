package exercice_04_16;

import java.util.Random;

//input = random integer
//output =

public class Main {
	
	public static void main(String[] args) throws InterruptedException {
		while(1>0) {
			displayRandomLowerCaseLetter();
			Thread.sleep(5);
		}
		
	}

	private static void displayRandomLowerCaseLetter() {
		Random random = new Random();
		System.out.println((char)random.nextDouble(97, 123));
		
	}

}
