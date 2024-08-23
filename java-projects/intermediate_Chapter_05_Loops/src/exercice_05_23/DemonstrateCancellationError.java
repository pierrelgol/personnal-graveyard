package exercice_05_23;

public class DemonstrateCancellationError {
	
	static int n = 50000;
	
	public static void main(String[] args) {
		
		double leftToRight = computeLeftToRight();
		double rightToLeft = computeRightToLeft();
		if(leftToRight>rightToLeft) {
			System.out.printf("%f L is bigger than R %f",leftToRight,rightToLeft);
		}else {
			System.out.printf("%f R is bigger than L %f",rightToLeft,leftToRight);
		}
	}


	private static double computeLeftToRight() {
		double x = 1;
		for(int i = 1; i<n; i++) {
			x += (1/i);
		}
		return x;
	}
	private static double computeRightToLeft() {
		double x = 1;
		for(int i = 50000; i>0; i--) {
			x += (1/i);
		}
		return x;
	}

}
