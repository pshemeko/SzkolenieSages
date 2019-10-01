/*
 * Pawn.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */

#include "Pawn.h"

Pawn::Pawn(PieceColor color)
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



char Pawn::getName() const
{
	return name;
}
