
#include "puzzle.h"

main()
{
	Puzzle a;
	chtype c, n;

	while(1)
	{	c = getchar();
		switch(c)
		{   
/* move up */	    case 'w':
		    case 'k': a.moveup();
				break;
/* move left */	    case 'a':
		    case 'h': a.moveleft();
				break;
/* move down */	    case 's':
		    case 'j': a.movedown();
				break;
/* move right */    case 'd':
		    case 'l': a.moveright();
				break;
/* insert note */   case 'n': n = getchar();
			      a.insertnote(n);
				break;
/* insert number */ default : a.insert(c);
		}
	}
}
