/*
 * Knight.h
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */
#include "Piece.h"

#ifndef KNIGHT_H_
#define KNIGHT_H_

class Knight: public Piece {
public:
	Knight(PieceColor color);
	char getName() const override;
	virtual ~Knight() = default;
private:
	char name;
};

#endif /* KNIGHT_H_ */
