package exercice_05_05;

public class ConversionTableCelsiusAndFahrenheit {
	public static void main(String[] args) {
		displayTableHeader();
		displayConversionTableCelciusToFahrenheit(0,20);
	}


	private static void displayTableHeader() {
		System.out.printf("Celcius       Fahrenheit    |    Fahrenheit       Celcius");
	}

	private static void displayConversionTableCelciusToFahrenheit(int i1, int j) {
		int i = i1;
		if(i<=100) {
			System.out.printf("\n%-4d%20.2f",i,((i*1.0)*9/5+32));
			i++;
			displayConversionTableFahrenheitToCelcius(i,j);
		}
	}
	private static void displayConversionTableFahrenheitToCelcius(int i, int j2) {
		int j = j2;
		if(j<=270) {
			System.out.printf("    |    %-4d%20d",j,((j-32)*5/9));
			j+=5;
			displayConversionTableCelciusToFahrenheit(i,j);
		}else {
			displayConversionTableCelciusToFahrenheit(i,j);
		}
		
		
	}

}