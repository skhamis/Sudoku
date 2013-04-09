#ifndef PUZZLE_H
#define PUZZLE_H

#include <curses.h>

class Puzzle
{
 public:

/* constructors */
Puzzle();
~Puzzle();

/* mutators */
	/* inserts number at current position */
void insert(char c);
	/* inserts a note in current square */
void insertnote(char c);
	/* moves cursor in specified direction */	
void moveup(void);
void movedown(void);
void moveleft(void);
void moveright(void);

 private:

int row, col;
WINDOW *wnd;

/* helper functions */

	/* draws a row */
void drawrow(int i);
	/* draws a row with horizontal line */
void drawhor(int i);
	/* draws a border */
void drawbold(int i);


};

#endif
