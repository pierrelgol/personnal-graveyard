package exercice_05_27;

public class DisplayLeapYear {
	
	
	public static void main(String[] args) {
		
		int startingYear = 2014;
		int endigYear = 2114;
		int numberOfLeapYear = 0;
		int numberPerline = 0;
		
		while(startingYear<=endigYear) {
			
			if(isLeapYear(startingYear)) {
				numberOfLeapYear++;
				if(numberPerline<=10) {
					System.out.printf("%d ",startingYear);
					numberPerline++;
				}else{
					System.out.printf("%d\n",startingYear);
					numberPerline=0;
				}
			}startingYear++;
			
		}
		System.out.println("between 2014 and 2114 there is "+numberOfLeapYear+" leap years");

	}

	private static boolean isLeapYear(int year) {
		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		
	}

}
