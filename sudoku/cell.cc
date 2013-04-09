#include "cell.h"





Cell::Cell(int ans, bool given) : ncount(0), answer(ans), fgiven(given)
{	if(fgiven)
		number = answer;
	
	else
		number = BLANK;
}


