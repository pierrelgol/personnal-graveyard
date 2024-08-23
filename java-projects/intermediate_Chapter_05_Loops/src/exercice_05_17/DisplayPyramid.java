package exercice_05_17;

import myLibrary.Helper;

public class DisplayPyramid extends Helper{
	
	public static void main(String[] args) {
		prompt("Enter an integer :");
		int numberOfLine = readIntegerInput();
		int fillFrom = 1;
		while(numberOfLine!=fillFrom) {
			for(int i = numberOfLine; i>fillFrom; i--) {
				printInteger(i);
			}printInteger(fillFrom);
			for(int j = fillFrom+1; j<numberOfLine; j++) {
				printInteger(j);
			}
			System.out.print("\n");
			numberOfLine -=1;
		} printInteger(fillFrom);
	}

}
