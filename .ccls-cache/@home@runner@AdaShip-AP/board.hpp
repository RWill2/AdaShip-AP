#pragma once
#include <vector>
#include "constants.hpp"
#include "ships.hpp"

#ifndef board_h
#define board_h

class Board{
  public:
    //void setWidth(int width){width_ = width;}
    //int getWidth(void){return width_;}
    //void setHeight(int height){height_ = height;}
    //int getHeight(void){return height_;}
    Board();
    void printPlayerBoard();
    void printTargetBoard();
    bool placeShip(int num, int x, int y, bool isHorizontal);
    

  private:
    char gameBoard[boardWidth][boardHeight];
    std::vector <Ships> shipPos;
    //int width_;
    //int height_;
};

#endif