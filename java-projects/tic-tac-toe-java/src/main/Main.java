package main;

import java.util.Scanner;

public class Main {
	
	private static final int MAX_NUM_MOVES = 9;
	private static int gameState = 1;
	private static int turnCount = 0;
	  
	public static void main(String[] args) {
		Board board = new Board();
		Player player1 = new Player("Player 1", 'X');
		Player player2 = new Player("Player 2", 'O');
		startGame(board, player1, player2);
	}
	
	public static void startGame(Board board, Player player1, Player player2) {
		player1.setIsTurn(true);
		player2.setIsTurn(false);
		
		while(gameState == 1) {
		  printBoard(board);
		  playTurn(player1, player2, board);
		  
		}
	}
	
	public static void playTurn(Player p1, Player p2, Board board) {
	    Scanner scanner = new Scanner(System.in);

	    if(turnCount == MAX_NUM_MOVES)
	    {
	      System.out.println("This is a draw");
	    }
	    
	    if (p1.getIsTurn()) {
	        System.out.printf("It's %s's turn. Enter row and column (e.g. 1 2): ", p1.getName());
	        int row = scanner.nextInt();
	        int col = scanner.nextInt();
	        board.getCell(row, col).setRepresentation(String.format("[%c]", p1.getPlayerSymbol()));
	        p1.setIsTurn(false);
	        p2.setIsTurn(true);
	        if(IsPlayerWinning(board, p1))
	        {
	        	System.out.println("P1 won the game gg");
	        	printBoard(board);
	        	scanner.close();
	        	gameState = 0;
	        }
	    } else {
	        System.out.printf("It's %s's turn. Enter row and column (e.g. 1 2): ", p2.getName());
	        int row = scanner.nextInt();
	        int col = scanner.nextInt();
	        board.getCell(row, col).setRepresentation(String.format("[%c]", p2.getPlayerSymbol()));
	        p1.setIsTurn(true);
	        p2.setIsTurn(false);
	        if(IsPlayerWinning(board, p2))
	        {
	        	System.out.println("P2 won the game gg");
	        	printBoard(board);
	        	scanner.close();
	        	gameState = 0;
	        }
	    }
	    turnCount++;
	}

	
	public static void printBoard(Board board) {
		int row;
		int col;
		
		for(row = 0; row < Board.BOARD_SIZE; row++) {
			for(col = 0; col < Board.BOARD_SIZE; col++) {
				System.out.printf(" %s ", board.getCell(row, col).getRepresentation());
			}
			System.out.println("\n");
		}
	}
	
	public static boolean IsPlayerWinning(Board board, Player player) {
	    boolean isWinning = false;

	    // Check rows
	    for (int i = 0; i < Board.BOARD_SIZE; i++) {
	        isWinning = true;
	        for (int j = 0; j < Board.BOARD_SIZE; j++) {
	            if (board.getCell(i, j).getRepresentation().charAt(1) != player.getPlayerSymbol()) {
	                isWinning = false;
	                break;
	            }
	        }
	        if (isWinning) {
	            return true;
	        }
	    }

	    for (int i = 0; i < Board.BOARD_SIZE; i++) {
	        isWinning = true;
	        for (int j = 0; j < Board.BOARD_SIZE; j++) {
	            if (board.getCell(j, i).getRepresentation().charAt(1) != player.getPlayerSymbol()) {
	                isWinning = false;
	                break;
	            }
	        }
	        if (isWinning) {
	            return true;
	        }
	    }

	    isWinning = true;
	    for (int i = 0; i < Board.BOARD_SIZE; i++) {
	        if (board.getCell(i, i).getRepresentation().charAt(1) != player.getPlayerSymbol()) {
	            isWinning = false;
	            break;
	        }
	    }
	    if (isWinning) {
	        return true;
	    }

	    isWinning = true;
	    for (int i = 0; i < Board.BOARD_SIZE; i++) {
	        if (board.getCell(i, Board.BOARD_SIZE - 1 - i).getRepresentation().charAt(1) != player.getPlayerSymbol()) {
	            isWinning = false;
	            break;
	        }
	    }
	    if (isWinning) {
	        return true;
	    }

	    return false;
	}

}
