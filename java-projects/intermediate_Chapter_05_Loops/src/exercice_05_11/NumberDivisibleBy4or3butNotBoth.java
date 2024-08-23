package exercice_05_11;

public class NumberDivisibleBy4or3butNotBoth {

		static final int START_AT = 100;
		static final int END_AT = 200;
		static final int NUMBER_PER_LINE = 10;

		public static void main(String[] args) {
			printNumberDivisibleBy3orButNotBoth4();
		}

		private static void printNumberDivisibleBy3orButNotBoth4() {
			int number = 0;
			int count = 0;
			for (int i = START_AT; i < END_AT; i++) {
				number = i;
				if(count<NUMBER_PER_LINE) {
					if (number % 3 == 0 ^ number % 4 == 0) {
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
