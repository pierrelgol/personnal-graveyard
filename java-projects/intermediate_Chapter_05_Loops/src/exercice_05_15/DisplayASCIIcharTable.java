package exercice_05_15;

public class DisplayASCIIcharTable {
	
	static int numberOfCharPerLine = 10;
	static int currentNumberOfCharPerLine = 0;
	public static void main(String[] args) {
		generateCharTableForAllASCII();
	}

	private static void generateCharTableForAllASCII() {
		for(int i = '!'; i<'~'+1; i++) {
			if(currentNumberOfCharPerLine<=numberOfCharPerLine) {
				System.out.printf(" %c ",(char)i);
				currentNumberOfCharPerLine++;
			}else {
				currentNumberOfCharPerLine = 0;
				System.out.println();
			}
		}
		
	}

}
