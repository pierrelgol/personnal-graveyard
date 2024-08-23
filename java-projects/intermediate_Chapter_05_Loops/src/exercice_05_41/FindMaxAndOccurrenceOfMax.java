package exercice_05_41;

public class FindMaxAndOccurrenceOfMax {
	
	public static void main(String[] args) {
		
		int number = 3525550;
		
		String number_str = Integer.toString(number);
		
		int max = 0;
		int potentialMax = 0;
		int maxOccurence = 0;
		
		for(int i = 0; i<=number_str.length()-1; i++) {
			potentialMax = number_str.charAt(i)-'0';
			System.out.println(potentialMax);
			if(max<potentialMax) {
				max = potentialMax;
			}
		}
		for(int i = 0; i<=number_str.length()-1; i++) {
			potentialMax = (int)number_str.charAt(i)-'0';
			if(max==potentialMax) {
				maxOccurence++;
			}
		}
		System.out.println(max+" appear : "+maxOccurence);
		
	}

}
