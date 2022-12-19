#pragma once

#ifndef ships_hpp
#define ships_hpp

class Ships{
  public:
    //void addShipName(std::string newShipName){shipName_.push_back(newShipName);};
    //void addShipSize(int newShipSize){shipSize_.push_back(newShipSize);};
    Ships(std::string name, int size, int x, int y, bool horizontal, bool sunk);
    std::string getName();
    int getSize();
    int getX();
    int getY();
    bool getHorizontal();
    bool getSunk();
    void setPosition(int x, int y, bool horizontal);
    bool setHit(int hitX, int hitY);

  private:
    //std::vector <std::string> shipName_;
    //std::vector <int> shipSize_;
    std::string shipName;
    int shipSize;
    int xCoOrd;
    int yCoOrd;
    bool isHorizontal;
    bool isSunk;
    char* shipSquares;
};

#endif