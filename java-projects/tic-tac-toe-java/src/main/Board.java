package main;

public class Board {
	
    static final int BOARD_SIZE = 3;

    Cell[][] board = new Cell[BOARD_SIZE][BOARD_SIZE];

    public Board() {
        fillBoard();
    }

    public void fillBoard() {
        int row;
        int col;

        for(row = 0; row < BOARD_SIZE; row++) {
            for(col = 0; col < BOARD_SIZE; col++) {
                this.board[row][col] = new Cell();
            }
        }
    }

    public Cell getCell(int row, int col) {
        return this.board[row][col];
    }

}
