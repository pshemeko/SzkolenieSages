/*
 * King.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */

#include "King.h"

King::King(PieceColor color)
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

char King::getName() const
{
	return name;
}
