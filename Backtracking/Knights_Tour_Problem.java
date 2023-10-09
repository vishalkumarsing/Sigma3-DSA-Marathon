/*
Question - Given an mxn chessboard, if the position (x,y) of the knight is given, find the path which covers all the blocks of the chessboard without repeating.

 */

import java.util.*;
public class Knights_Tour_Problem {
    public static void main(String[] args) {
        int n = 8;
        int row = 1;
        int col = 2;

        int arr[][] = new int[n][n];

        printKnightsTour(arr, row, col, 1);
    }

    public static void printKnightsTour(int[][] chess, int row, int col, int move) {

        if (row < 0 || col < 0 || row >= chess.length || col >= chess.length || chess[row][col] > 0) {
            return;

        } else if (move == chess.length * chess.length) {
            chess[row][col] = move;
            displayBoard(chess);
            chess[row][col] = 0;
            return;
        }

        chess[row][col] = move;
        printKnightsTour(chess, row - 2, col + 1, move + 1);
        printKnightsTour(chess, row - 1, col + 2, move + 1);
        printKnightsTour(chess, row + 1, col + 2, move + 1);
        printKnightsTour(chess, row + 2, col + 1, move + 1);
        printKnightsTour(chess, row + 2, col - 1, move + 1);
        printKnightsTour(chess, row + 1, col - 2, move + 1);
        printKnightsTour(chess, row - 1, col - 2, move + 1);
        printKnightsTour(chess, row - 2, col - 1, move + 1);
        chess[row][col] = 0;
    }

    public static void displayBoard(int[][] chess) {
        for (int i = 0; i < chess.length; i++) {
            for (int j = 0; j < chess[0].length; j++) {
                System.out.print(chess[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println();
    }
}