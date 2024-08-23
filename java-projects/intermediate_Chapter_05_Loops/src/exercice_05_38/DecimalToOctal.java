package exercice_05_38;

public class DecimalToOctal {
	
	public static void main(String[] args) throws InterruptedException {
		
		int decimal = 123;
		System.out.println(Integer.toOctalString(decimal));
		getOctalOfInteger(decimal);

		}

		private static void getOctalOfInteger(int decimal) throws InterruptedException {
			int octal = 0;
			int count = 7;
			int[] octalCode = new int[8];
			while (decimal != 0) {
				Thread.sleep(333);
				System.out.println(decimal);
				octal = decimal % 8;
				decimal = decimal / 8;
				octalCode[count] = octal;
				for (int e : octalCode) {
					Thread.sleep(333);
					System.out.printf("%d ", e);
				}
				count--;
			}

		}

	}
