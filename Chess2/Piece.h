/*
 * Piece.h
 *
 *  Created on: Sep 30, 2019
 *      Author: student
 */

#ifndef PIECE_H_
#define PIECE_H_

enum class PieceColor {
	White,
	Black
};

class Piece {
public:
	Piece(PieceColor color);

	virtual char getName() const ;
	auto getColor() const -> PieceColor;

	//bool isPosibleMove( from , to);
	virtual ~Piece() ;

private:
	PieceColor color;
};

#endif /* PIECE_H_ */
