#include "headersReq.hpp"
#include "ships.hpp"

Ships::Ships(std::string name, int size, int x, int y, bool horizontal, bool sunk){
  shipName = name;
  shipSize = size;
  xCoOrd = x;
  yCoOrd = y;
  isHorizontal = horizontal;
  isSunk = sunk;
  shipSquares = new char[shipSize];
  for(int j = 0; j < shipSize; j++){
    shipSquares[j] = SHIP;
  }
}
  std::string Ships::getName(){
    return shipName;
  };
  int Ships::getSize(){
    return shipSize;
  };
  int Ships::getX(){
    return xCoOrd;
  };
  int Ships::getY(){
    return yCoOrd;
  };
  bool Ships::getHorizontal(){
    return isHorizontal;
  };
  bool Ships::getSunk(){
    return isSunk;
  };
  void Ships::setPosition(int x, int y, bool horizontal){
    xCoOrd = x;
    yCoOrd = y;
    isHorizontal = horizontal;
  };
  bool Ships::setHit(int hitX, int hitY){
    if((isHorizontal & (hitX < xCoOrd || hitX >= xCoOrd+shipSize || hitY != yCoOrd))||(!isHorizontal & (hitY < yCoOrd || hitY >= yCoOrd+shipSize || hitX != xCoOrd))){
      return false;
    }
    else{
      if(isHorizontal){
        shipSquares[hitX - xCoOrd] = HIT;
      }
      else{
        shipSquares[hitY - yCoOrd] = HIT;
      }
    }

    for(int i = 0; i < shipSize; i++){
      if(shipSquares[i] == SHIP){
        isSunk = false;
      }
      else{
        isSunk = true;
      }
    }
  };