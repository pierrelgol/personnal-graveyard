package exercice_05_28;

import java.util.Scanner;

public class DisplayTheFirstDayOfEachMonth {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter the year :");
		int year = input.nextInt();
		boolean isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		System.out.println("Enter the day :");
		int dayOfTheWeek = input.nextInt();
		String FirstDayIs = "";
		
		switch(dayOfTheWeek) {
		case 1 : FirstDayIs = "Monday"; break;
		case 2 : FirstDayIs = "Tuesday"; break;
		case 3 : FirstDayIs = "Wednesday"; break;
		case 4 : FirstDayIs = "Thursday"; break;
		case 5 : FirstDayIs = "Friday"; break;
		case 6 : FirstDayIs = "Saturday"; break;
		case 7 : FirstDayIs = "Sunday"; break;
		}
		int monthCount = 1;
		String currentMonth = "January";
		while(monthCount<=12) {

		switch(dayOfTheWeek%7) {
		case 1 : FirstDayIs = "Monday"; break;
		case 2 : FirstDayIs = "Tuesday"; break;
		case 3 : FirstDayIs = "Wednesday"; break;
		case 4 : FirstDayIs = "Thursday"; break;
		case 5 : FirstDayIs = "Friday"; break;
		case 6 : FirstDayIs = "Saturday"; break;
		case 0 : FirstDayIs = "Sunday"; break;
		}
		switch(monthCount) {
		case 1  : dayOfTheWeek += 31; break;
		case 2  : dayOfTheWeek += (isLeapYear ? 29 : 28); break;
		case 3  : dayOfTheWeek += 31; break;
		case 4  : dayOfTheWeek += 30; break;
		case 5  : dayOfTheWeek += 31; break;
		case 6  : dayOfTheWeek += 30; break;
		case 7  : dayOfTheWeek += 31; break;
		case 8  : dayOfTheWeek += 31; break;
		case 9  : dayOfTheWeek += 30; break;
		case 10 : dayOfTheWeek += 31; break;
		case 11 : dayOfTheWeek += 30; break;
		case 12 : dayOfTheWeek += 31; break;
		}
		switch(monthCount) {
		case 1  : currentMonth = "January"; break;
		case 2  : currentMonth = "February"; break;
		case 3  : currentMonth = "March"; break;
		case 4  : currentMonth = "April"; break;
		case 5  : currentMonth = "May"; break;
		case 6  : currentMonth = "June"; break;
		case 7  : currentMonth = "July"; break;
		case 8  : currentMonth = "August"; break;
		case 9  : currentMonth = "September"; break;
		case 10  : currentMonth = "October"; break;
		case 11 : currentMonth = "November"; break;
		case 12 : currentMonth = "December"; break;
		}
		System.out.printf("%s 1, %d is %s\n",currentMonth,year,FirstDayIs);
		monthCount++;
		
		}
	}

}
