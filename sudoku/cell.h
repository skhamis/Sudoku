#ifndef CELL_H
#define CELL_H

#define BLANK 0


class Cell
{

public:

Cell(int ans, bool given); // Constructor, given a number, inputs it into the cell (blank if given nothing)





private:

int ncount; //counts the number of notes currently in the cell
int number; //Current number in that cell
int answer; //Number that is "supposed" to be in that cell (solution)
bool fgiven; //flag for if the number is a given or not


};


#endif
