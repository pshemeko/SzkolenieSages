/*
 * King.h
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */
#include "Piece.h"

#ifndef KING_H_
#define KING_H_

class King :public Piece{
public:
	King(PieceColor color);
	char getName() const override;
	virtual ~King() = default;
private:
	char name;
};

#endif /* KING_H_ */
