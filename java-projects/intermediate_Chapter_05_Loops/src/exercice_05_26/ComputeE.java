package exercice_05_26;

public class ComputeE {

	public static void main(String[] args) throws InterruptedException {
		double e = 1.0;
		double item = 1.0;
		for (int i = 2; i < 10001; i++) {
			e = e + item;
			if (i >= 2) {
				item = item / i;
			}
		}
		
		System.out.printf("%.15f \n",e);

	}

}
