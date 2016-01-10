import cv2
import numpy as np

from move import Move

class Board:

    def __init__(self):
        # Create new window for the board
        cv2.namedWindow('boardClass', cv2.WINDOW_AUTOSIZE)

        self.frame = np.zeros((500, 500, 3), np.uint8)

        for i in range(10):
            for j in range(10):
                cv2.rectangle(self.frame, (i*50,j*50),((i+1)*50-1,(j+1)*50-1), (255,255,255), 1)

    def setStartBoard(self):
        self.board = ["x"] * 50
        for i in range(20):
            self.board[i] = 'w'
            self.board[i+30] = 'b'

    def showBoard(self):
        # Copy the board
        board = list(self.board)

        for j in range(10):
            for i in range(10):
                if ((i+j) % 2 == 0):
                    if self.board:
                        char = self.board.pop()

                        if (char == 'b'):
                            cv2.circle(self.frame, (50*i+25, 50*j+25), 20, (255,0,0), 2)

                        elif (char == 'w'):
                            cv2.circle(self.frame, (50*i+25, 50*j+25), 20, (255,255,255), 2)

                        else:
                            cv2.circle(self.frame, (50*i+25, 50*j+25), 20, (0,0,0), 2)

        cv2.imshow('boardClass', self.frame)

    def saveBoard(self, name):
        print "Saving board to file"

    def loadBoard(self, name):
        print "Loading board from file"

    def getBoardString(self):
        return self.board

    def doMove(self, move):
        print "Doing move"

    def getMoves(colors):
        moves = []

        for key, tile in self.board:
            if tile in colors:
                #check down
                if key > 5:
                    #check left
                    if (key % 5) != 0:
                        if board[key-6] == 'x':
                            moves.append(Move((key-6, tile), (key, tile)))

                    #check right
                    if ((key+1) % 5) != 0:
                        if board[key-4] == 'x':
                            moves.append(Move((key-4, tile), (key, tile)))

                #check up
                if key < 45:
                    #check left
                    if (key % 5) != 0:
                        if board[key+4] == 'x':
                            moves.append(Move((key+4, tile), (key, tile)))

                    #check right
                    if ((key+1) % 5) != 0:
                        if board[key+6] == 'x':
                            moves.append(Move((key+6, tile), (key, tile)))

    def getForcedMoves(colors, enemy):
        for key, tile in self.board:
            if tile in colors:
                #check down
                if key > 10:
                    #check left
                    if ((key-1) % 5) != 0:
                        if board[key-6] in enemy:
                            if board[key-11] == 'x':
                                moves.append(Move((key-11, tile), [(key, tile), (key-6, board[key-6])]))

                    #check right
                    if ((key+2) % 5) != 0:
                        if board[key-4] in enemy:
                            if board[key-9] == 'x':
                                moves.append(Move((key-9, tile), [(key, tile), (key-4, board[key-4])]))

                #check up
                if key < 40:
                    #check left
                    if ((key-1) % 5) != 0:
                        if board[key+4] in enemy:
                            if board[key+9] == 'x':
                                moves.append(Move((key+9, tile), [(key, tile), (key+4, board[key+4])]))

                    #check right
                    if ((key+2) % 5) != 0:
                        if board[key+6] in enemy:
                            if board[key+11] == 'x':
                                moves.append(Move((key+11, tile), [(key, tile), (key+6, board[key+6])]))