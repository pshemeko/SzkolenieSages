/*
 * Queen.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */

#include "Queen.h"

Queen::Queen(PieceColor color)
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

char Queen::getName() const
{
	return name;
}
