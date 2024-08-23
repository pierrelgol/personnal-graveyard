package exercice_05_07;

public class ComputeFutureTuitionPrice {
	static double TUITION_PRICE = 10000;
	final static int ANNUAL_INFLATION_RATE = 6;
	final static int STARTING_YEAR = 0;


	public static void main(String[] args) {
		double tuitionPriceIn10Years = computeFutureTuitionPrice(10);
		double priceOfTuition =  computeFutureTuitionPrice(1)+computeFutureTuitionPrice(1)+computeFutureTuitionPrice(1)+computeFutureTuitionPrice(1);
		System.out.println(priceOfTuition);
	}

	private static double computeFutureTuitionPrice(int numberOfYearsForward) {
		while (STARTING_YEAR < numberOfYearsForward) {
			TUITION_PRICE = TUITION_PRICE * (1 + (ANNUAL_INFLATION_RATE / 100.0));
			numberOfYearsForward--;
		}
		return TUITION_PRICE;
	}
}
