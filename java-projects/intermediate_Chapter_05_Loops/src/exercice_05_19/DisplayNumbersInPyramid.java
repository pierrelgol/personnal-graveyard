package exercice_05_19;

public class DisplayNumbersInPyramid {

	static int pyramidHeight = 8;
	static int pyramidWidth = 15;
	static int currentFloor = 0;
	static int currentWidth = 1;

	public static void main(String[] args) {
		displayNumbersInPyramid();
	}

	private static void displayNumbersInPyramid() { // works V0.1
		int x = 1;
		for (int i = 8; i > 0; i--) {
			System.out.println();
			for (int k = 1; k <= pyramidWidth; k++) {

				if (k == i) {
					System.out.printf("%4d", x);
					for (int l = 1; l < currentWidth; l++) {
						System.out.printf("%c", (char) 32);
						while (l < ((currentWidth + 1) / 2)) {
							x = x * 3;
							System.out.printf("%c", (char) 32);
							System.out.printf("%4d", x);
							System.out.printf("%c", (char) 32);
							l++;
						}
						x = x / 3;
						System.out.printf("%c", (char) 32);
						System.out.printf("%4d", x);

					}
				} else {
					System.out.printf("%c%c%c%c%c%c", (char) 32, (char) 32, (char) 32, (char) 32, (char) 32, (char) 32);
				}

			}
			currentWidth += 2;
		}

	}
}