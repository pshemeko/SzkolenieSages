/*
 * Rok.h
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */
#include "Piece.h"

#ifndef ROK_H_
#define ROK_H_

class Rook : public Piece{
public:
	Rook(PieceColor color);
	char getName() const override;
	virtual ~Rook() = default;
private:
	char name;
};
#endif /* ROK_H_ */
