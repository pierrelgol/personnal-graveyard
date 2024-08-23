package exercice_05_10;

public class NumberDivisibleBy3and4from100to1000 {

	static final int START_AT = 100;
	static final int END_AT = 1000;
	static final int NUMBER_PER_LINE = 10;

	public static void main(String[] args) {
		printNumberDivisibleBy3And4();
	}

	private static void printNumberDivisibleBy3And4() {
		int number = 0;
		int count = 0;
		for (int i = START_AT; i < END_AT; i++) {
			number = i;
			if(count<NUMBER_PER_LINE) {
				if (number % 3 == 0 && number % 4 == 0) {
					System.out.printf("%d ", number);
					count++;
				}
			}else {
				count=0;
				System.out.println();
			}

			}
		}
	}

