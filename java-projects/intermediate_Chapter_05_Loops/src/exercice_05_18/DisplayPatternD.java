package exercice_05_18;

import myLibrary.Helper;

public class DisplayPatternD extends Helper {

	static char ch = '*';
	static int numberOfLine = 6;

	public static void main(String[] args) {
		promptHeader("  Pattern D\n");
		promptPatternD();
	}

	private static void promptPatternD() {
		for (int i = 1; i <= numberOfLine; i++) {
			System.out.println();
			for (int j = 1; j <= numberOfLine; j++) {
				if (j >= i) {
					printChar(ch);
				} else {
					printChar(' ');
				}
			}
		}

	}

	public static void promptHeader(String messageToPrompt) {
		System.out.printf("%s", messageToPrompt);
	}

}