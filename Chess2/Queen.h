/*
 * Queen.h
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */
#include "Piece.h"

#ifndef QUEEN_H_
#define QUEEN_H_

class Queen: public Piece {
public:
	Queen(PieceColor color);
	char getName() const override;
	virtual ~Queen() = default;
private:
	char name;
};

#endif /* QUEEN_H_ */
