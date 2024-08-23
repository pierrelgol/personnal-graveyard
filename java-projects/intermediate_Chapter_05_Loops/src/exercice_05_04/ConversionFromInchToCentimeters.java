package exercice_05_04;

public class ConversionFromInchToCentimeters {

	public static void main(String[] args) {
		displayTableHeader();
		displayConversionTable();

	}

	private static void displayTableHeader() {
		System.out.printf("Inch       Centimeters");
	}

	private static void displayConversionTable() {
		for (int i = 0; i < 11; i++) {
			System.out.printf("\n%-4d%18.2f", i, (i * 2.54));
		}
	}
}