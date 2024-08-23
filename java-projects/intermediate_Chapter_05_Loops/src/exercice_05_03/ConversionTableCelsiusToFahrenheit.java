package exercice_05_03;

public class ConversionTableCelsiusToFahrenheit {
	
	public static void main(String[] args) {
		displayTableHeader();
		displayConversionTable();
		
	}

	private static void displayTableHeader() {
		System.out.printf("Celcius       Fahrenheit");
	}

	private static void displayConversionTable() {
		for(int i = 0; i<100; i++) {
			System.out.printf("\n%-4d%20.2f",i,((i*1.0)*9/5+32));
		}
	}

}
