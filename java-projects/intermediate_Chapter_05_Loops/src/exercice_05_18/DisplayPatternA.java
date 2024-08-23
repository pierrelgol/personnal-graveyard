package exercice_05_18;

import myLibrary.Helper;

public class DisplayPatternA extends Helper {
	
	static char ch = '*';
	static int numberOfLine = 6;

	public static void main(String[] args) {
		promptHeader("  Pattern A\n");
		promptPatternA();
	}

	private static void promptPatternA() {
		for (int i = 1; i <= numberOfLine; i++) {
			System.out.println();
			for (int j = 1; j <= numberOfLine; j++) {
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
