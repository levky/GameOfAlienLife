/*
 *  cell.h
 *  openFrameworks
 *
 *  Created by Levky on 26/10/2010.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CELL_H
#define CELL_H
#include "ofMain.h"

class cell{
public:

	cell();
	int dx;
	int dy;
	int x;
	int y;
	int hit;
	int R;
	int G;
	int B;
	int maxX;
	int maxY;
	
	void addhit();
	int getNextX();
	int getNextY();
	void setPosition(int tx, int ty);
	void setDirection(int tx, int ty);
	void changeDirection();
	void update(int maxX, int maxY);
	void draw();
};

#endif