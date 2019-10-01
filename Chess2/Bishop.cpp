/*
 * Bishop.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */

#include "Bishop.h"

Bishop::Bishop(PieceColor color)
: Piece(color)
{
	if (color == PieceColor::White) {
		name = 'P';
	}
	else
	{
		name = 'p';
	}
	//name = (color == PieceColor::White) ? "P" : "p";
}

char Bishop::getName() const
{
	return name;
}
