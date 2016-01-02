#ifndef BOARD_H
#define BOARD_H

#include <string>

/*
 Class that handles the data for the board
 init: creates a board with standard setup
 or a saved setup if specified
*/
class Board
{
private:
    //Board is actually 10 by 10 but half of the tiles are always empty
	std::string board;

protected:
	int removePiece(int location);

    int setPiece(int location, char piece);

	char getPieceAtLocation(int location);

public:
    static const char WHITE = 'w';
    static const char WHITE_CROWN = 'W';
    static const char BLACK = 'b';
    static const char BLACK_CROWN = 'B';

	Board();
    Board(std::string representation);
};

#endif
