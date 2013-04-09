#include <curses.h>
#include "puzzle.h"
#include <ncurses.h>
/************************************************/
/*						*/
/*	Constructors				*/
/*						*/
/************************************************/
Puzzle :: Puzzle() : row(0), col(0)
{
	wnd = initscr();
/* initialize board */
	drawbold(0);
		drawrow(1);
		drawrow(2);
	        drawhor(3);
		drawrow(4);
		drawrow(5);
	        drawhor(6);
		drawrow(7);
		drawrow(8);
	drawbold(9);
		drawrow(10);
		drawrow(11);
	        drawhor(12);
		drawrow(13);
		drawrow(14);
	        drawhor(15);
		drawrow(16);
		drawrow(17);
	drawbold(18);
		drawrow(19);
		drawrow(20);
	        drawhor(21);
		drawrow(22);
		drawrow(23);
	        drawhor(24);
		drawrow(25);
		drawrow(26);
	drawbold(27);

/* initialize cursor starting position */
row = 14;
col = 32;
move(row,col);
refresh();


}

Puzzle :: ~Puzzle()
{	endwin();	}

/************************************************/
/*						*/
/*	Mutators				*/
/*						*/
/************************************************/

void Puzzle :: insert(char c)
{	delch();
	insch(c);
	refresh();
}

void Puzzle :: insertnote(char c)
{
	chtype ch;
	ch = c | A_BOLD;

	move(row-1, col-2);
	delch();
	insch(ch);
	move(row, col);
	refresh();
}

void Puzzle :: moveup(void)
{	/* move cursor to opposite side if end of board is reached */
	if(row == 2)	row = 26;
	else		row -=3;
	move(row,col);
	refresh();
}

void Puzzle :: movedown(void)
{	/* move cursor to opposite side if end of board is reached */
	if(row == 26)	row = 2;
	else		row +=3;
	move(row,col);
	refresh();
}

void Puzzle :: moveleft(void)
{	/* move cursor to opposite side if end of board is reached */
	if(col == 4)	col = 60;
	else		col -=7;
	move(row,col);
	refresh();
}

void Puzzle :: moveright(void)
{	/* move cursor to opposite side if end of board is reached */
	if(col == 60)	col = 4;
	else		col +=7;
	move(row,col);
	refresh();
}


/************************************************/
/*						*/
/*	Helper Functions			*/
/*						*/
/************************************************/
void Puzzle :: drawrow(int i)
{	
	chtype bold = ' ' | A_REVERSE;
	chtype line = '|';
	chtype space = ' ';

	for(int n = 0 ; n < 64 ; n++)
	{

		move(i,col);
		delch();

		if(n%21 == 0)		insch(bold);
		else if(n%7 == 0)	insch(line);
		else			insch(space);
	
		refresh();
		col++;
	}
	col = 0;
}

void Puzzle :: drawhor(int i)
{	
	chtype bold = ' ' | A_REVERSE;
	chtype line = '|';
	chtype hor = '_';

	for(int n = 0 ; n < 64 ; n++)
	{
		move(i,col);
		delch();

		if(n%21 == 0)		insch(bold);
		else if(n%7 == 0)	insch(line);
		else			insch(hor);
	
		refresh();
		col++;
	}
	col = 0;
}

void Puzzle:: drawbold(int i)
{
	chtype dc = ' ' | A_REVERSE;

	for(int n = 0 ; n < 64 ; n++)
	{	
		move(i,col);
		delch();	

					insch(dc);

		refresh();
		col++;
	}	
	col = 0;
}
