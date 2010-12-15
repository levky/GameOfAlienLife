/*
 *  cell.cpp
 *  openFrameworks
 *
 *  Created by Levky on 26/10/2010.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "cell.h"

cell::cell(){
	hit=0;
	x=0;
	y=0;
	dx=0;
	dy=0;
	R=200;
	G=100;
	B=100;
}

void cell::addhit() {
	hit++;
}

int cell::getNextX(){
	return x+dx;
}

int cell::getNextY(){
	return y+dy;
}

void cell::setPosition(int tx, int ty){
	x = tx;
	y = ty;
}

void cell::setDirection(int tx, int ty){
	dx = tx;
	dy = ty;
}

void cell::changeDirection(){
	dx*=-1;
	dy*=-1;
}

void cell::update(int tmaxX, int tmaxY) {
	maxX = tmaxX;
	maxY = tmaxY;
	if (x<=0 || x>=maxX)
		dx*=-1;
	if (y<=0 || y>=maxY)
		dy*=-1;
	x+=dx;
	y+=dy;
}

void cell::draw() {
	int w = ofGetWidth()/maxX;
	int h = ofGetHeight()/maxY;
	ofSetColor(R,G,B);
	ofCircle(w/2+x*w, h/2+y*h,(w+h)/2);
}