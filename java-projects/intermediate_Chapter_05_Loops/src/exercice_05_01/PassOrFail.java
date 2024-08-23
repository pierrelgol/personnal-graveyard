package exercice_05_01;

import java.util.Scanner;

public class PassOrFail {

	public static void main(String[] args) {
		promptUserForJavaScore();
	}
	private static void promptUserForJavaScore() {
		System.out.println("Enter your score :");
		getJavaScoreInput();
	}
	private static void getJavaScoreInput() {
		Scanner input = new Scanner(System.in);
		processScoreInput(input.nextInt());
		input.close();
	}
	private static void processScoreInput(int score) {
		if (score == -1)terminateProgram();
		if (score >= 60)studentPassExam();
		else studentFailedExam();
	}
	private static void terminateProgram() {
		System.exit(1);
	}
	private static void studentFailedExam() {
		System.out.println("You don't pass the exam.");
	}
	private static void studentPassExam() {
		System.out.println("You pass the exam");
	}

}
