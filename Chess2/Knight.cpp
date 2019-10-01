/*
 * Knight.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */

#include "Knight.h"

Knight::Knight(PieceColor color)
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

char Knight::getName() const
{
	return name;
}
