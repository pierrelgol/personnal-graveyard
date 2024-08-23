package exercice_05_29;


public class DisplayCalendar {
	
	public static void main(String[] args) {
		
		//note to me : Junk code, your stupid, not much clever than a monkey but it work (ish)
		// if someone see this i can't use array yet because the chapter require to use loop
		
		int year = 2016;
		int startingDay = 2;
		int numberOfDays = 365;
		if(isLeapYear(year)) {
			numberOfDays = 366;
		}
		int monthCount = 1;
		int monthLength = 0;
		int dayPerWeek = 1;

		while(monthCount<=12) {
			
			printHeaderFor(getStringOfCurrentMonth(monthCount),year);
			monthLength = lengthOfCurrentMonth(monthCount,year);
		for(int i = 1; i <monthLength+1; i++) {
			if(monthCount == 1) {while(startingDay!=0) { System.out.printf("        "); startingDay--;dayPerWeek++;}}
			if(dayPerWeek%7==0) {
				System.out.printf("%4d    \n",i);
				dayPerWeek=1;
			}else {
				System.out.printf("%4d    ",i);
				dayPerWeek++;
			}
		}
		dayPerWeek=1;
		monthCount++;
		
	}
		
	}



	private static void printHeaderFor(String currentMonthString, int year) {
		System.out.printf("\n\n%24s %d\n",currentMonthString,year);
		System.out.println(" ----------------------------------------------------");
		System.out.print(" Sun     Mon     Tue     Wed     Thu     Fry     Sat  \n\n");
	}



	private static String getStringOfCurrentMonth(int monthCount) {
		switch(monthCount) {
		case 1  : return"January";
		case 2  : return"February";
		case 3  : return"March";
		case 4  : return"April";
		case 5  : return"May"; 
		case 6  : return"June"; 
		case 7  : return"July"; 
		case 8  : return"August";
		case 9  : return"September";
		case 10  : return"October";
		case 11 : return"November"; 
		case 12 : return"December"; 
		}
		return null;
	}



	private static int lengthOfCurrentMonth(int monthCount, int year) {
		switch(monthCount) {
		case 1  : return 31;
		case 2  : return (isLeapYear(year) ? 29 : 28);
		case 3  : return 31;
		case 4  : return 30;
		case 5  : return 31;
		case 6  : return 30;
		case 7  : return 31;
		case 8  : return 31;
		case 9  : return 30;
		case 10 : return 31;
		case 11 : return 30;
		case 12 : return 31;
		}
		return 0;
		
	}



	private static boolean isLeapYear(int year) {
		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	}

}
