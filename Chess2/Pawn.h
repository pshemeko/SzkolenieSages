/*
 * Pawn.h
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */
#include "Piece.h"

#ifndef PAWN_H_
#define PAWN_H_

//pionek
class Pawn : public Piece {
public:
	Pawn(PieceColor color);
	char getName() const override;
	virtual ~Pawn() = default;
private:
	char name;
};

#endif /* PAWN_H_ */
