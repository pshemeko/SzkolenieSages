 /*
 * Rok.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */

#include "Rook.h"

Rook::Rook(PieceColor color)
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

char Rook::getName() const
{
	return name;
}
