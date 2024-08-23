package exercice_05_06;

public class ConversionTableSquareMeterPing {
	
	public static void main(String[] args) {
		displayTableHeader();
		displayTable();
	}


	private static void displayTableHeader() {
		System.out.println("Ping          Square meter    |    Square meter          Ping");
	}
	private static void displayTable() {
		for(int i = 0; i<15; i++) {
			System.out.printf("\n%d%24.2f    |%6d%24.2f",(i*5+10),computePingToSqrtMeter(i*5+10),(i*5+30),computeSqrtMeterToPing(i*5+30));
		}
	}
	private static double computePingToSqrtMeter(int index) {
		return index*3.305;
	}

	private static double computeSqrtMeterToPing(int i) {
		return i/3.305;
	}

}
