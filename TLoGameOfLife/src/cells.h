/*
 *  cells.h
 *  openFrameworks
 *
 *  Created by Levky on 26/10/2010.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CELLS_H
#define	CELLS_H
#include <vector>
#include "cell.h"

class cells {
	public:
		int numCells;
		int maxX;
		int maxY;
		vector<cell*> pCells;
		cells(int num, int tmaxX, int tmaxY);
		vector<cell*> getCells();
		void update();
		void draw();
};

#endif