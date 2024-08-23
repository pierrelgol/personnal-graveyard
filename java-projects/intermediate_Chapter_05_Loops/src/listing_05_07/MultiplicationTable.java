package listing_05_07;

public class MultiplicationTable {
	
	//show case of nested loops

	public static void main(String[] args) {

		System.out.println("Multiplication Table");
		System.out.print("\n    ");
		for (int i = 1; i <= 9; i++) {
			System.out.print("   " + i);
		}
		System.out.println();
		System.out.println("-----------------------------------------");
		for (int i = 1; i <= 9; i++) {
			System.out.print(i + "   |");
			for (int j = 1; j <= 9; j++) {
				System.out.printf(" %2d ", (i * j));
			}
			System.out.println();
		}

	}

}
