CCC = g++
CCFLAGS = -ansi

sudoku: sudoku.o puzzle.o
	$(CCC) -o sudoku sudoku.o puzzle.o -lcurses

puzzle.o: puzzle.h

sudoku.o: puzzle.h

clean:
	rm -f *.o

real_clean: clean
	rm -f sudoku

