/*
 * Bishop.h
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */
#include "Piece.h"

#ifndef BISHOP_H_
#define BISHOP_H_

class Bishop: public Piece{
public:
	Bishop(PieceColor color);
	char getName() const override;
	virtual ~Bishop() = default;
private:
	char name;
};

#endif /* BISHOP_H_ */
