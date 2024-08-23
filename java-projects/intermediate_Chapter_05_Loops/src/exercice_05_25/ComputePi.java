package exercice_05_25;

public class ComputePi {
	
	public static void main(String[] args) throws InterruptedException{
		
		double Pi = 4.0;
		double i = 1;
		long z = 1;
		double x = 1.0;
		int iterations = 10000000;
		
		while(z <= iterations) {
			if(i == 1) {
				x = x - (1.0/(z+2));
				i = 0;
			} else {
				x = x + (1.0/(z+2));
				i = 1;
			}	
			z = z + 2;
			Pi = 4.0*(1-x);
		}
		
		Pi = (4.0-Pi);
		System.out.printf("%.15f \n", Pi); // display 15 decimal places
	}
}
