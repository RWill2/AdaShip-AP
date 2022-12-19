#include "headersReq.hpp"

// class Board{
//     public:
//       void setWidth(int width){width_ = width;}
//       int getWidth(void){return width_;}
//       void setHeight(int height){height_ = height;}
//       int getHeight(void){return height_;}

//     private:
//       int width_;
//       int height_;
// };

/*void buildBoard(int boardWidth, int boardHeight){
  for(int i = 0; i < boardWidth; i++){
    for(int j = 0; j < boardHeight; j++){
      std::cout << "*";
    }
  }
}*/

/*int intToAscii(int num){
  return '0' + num;
}*/

Board::Board(){
  for(int i = 0; i < boardHeight; i++){
    for(int j = 1; j < boardWidth; j++){
      gameBoard[i][j] = WATER;
    }
  }
}

void Board::printPlayerBoard(){
  std::cout << "  A B C D E F G H I J\n";
  for (int a = 0; a < boardWidth; a++){
    //std::cout << intToAscii(a+65);
    for(int b = 1; b < boardHeight; b++){
      std::cout << b << " ";
      std::cout << gameBoard[a][b] << " ";
    }
    std::cout << std::endl;
  }
}

void Board::printTargetBoard(){
  std::cout << "  A B C D E F G H I J\n";
  for (int a = 0; a < boardWidth; a++){
    //std::cout << intToAscii(a+65);
    for(int b = 1; b < boardHeight; b++){
      std::cout << b << " ";
      std::cout << gameBoard[a][b] << " ";
    }
    std::cout << std::endl;
  }
}

bool Board::placeShip(int num, int x, int y, bool isHorizontal){
  if(x > boardWidth || y > boardHeight){
    return false;
  } else if(shipPos[num].getX() >= 0 && shipPos[num].getY() >= 0){
    return false;
  }else
    for(int c = 0; c < shipPos[num].getSize(); c++){
      if((isHorizontal && gameBoard[y][x+c] != WATER ) || (!isHorizontal && gameBoard[y+c][x] != WATER)){
        return false;
      }
      if((isHorizontal && (x + c) >= boardWidth) || (!isHorizontal && (y + c) >= boardHeight)){
        return false;
      }
    }
    for(int d = 0; d < shipPos[num].getSize(); d++){
      if(isHorizontal){
        gameBoard[y][x + d] = SHIP;
      }
      else{
        gameBoard[y + d][x] = SHIP;
      }
    }
  
  
}
