/*
 *  cells.cpp
 *  openFrameworks
 *
 *  Created by Levky on 26/10/2010.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "cells.h"

cells::cells(int num, int tmaxX, int tmaxY) {
	numCells = num;
	maxX = tmaxX;
	maxY = tmaxY;
	for (int i = 0; i < num; i++) {
		pCells.push_back(new cell());
		pCells.back()->setPosition(ofRandom(0,maxX),ofRandom(0,maxY));
		pCells.back()->setDirection(ofRandom(-1.5,1.5),ofRandom(-1.5,1.5));
	}
}

vector<cell*> cells::getCells(){
	return pCells;
}

void cells::update() {
	for (int i = 0; i < numCells; i++) {
		for (int j = 0; j < numCells; j++) {
			if (pCells[i]->getNextX() == pCells[j]->getNextX() && pCells[i]->getNextY() == pCells[j]->getNextY()) {
				pCells[i]->changeDirection();
			}
		}
	}
}

void cells::draw(){
	for (int i = 0; i < numCells; i++) {
		pCells[i]->draw();
	}	
}