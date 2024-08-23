package exercice_05_18;

import myLibrary.Helper;

public class DisplayPatternB extends Helper {

	static char ch = '*';
	static int numberOfLine = 6;

	public static void main(String[] args) {
		promptHeader("  Pattern B\n");
		promptPatternB();
	}

	private static void promptPatternB() {
		for (int i = numberOfLine; i >= 1; i--) {
			System.out.println();
			for (int j = 1; j <= i; j++) {
				if (j <= i) {
					printChar(ch);
				} else {
					printChar(' ');
				}
			}
		}
		System.out.println("\n");
	}

	public static void promptHeader(String messageToPrompt) {
		System.out.printf("%s", messageToPrompt);
	}

}