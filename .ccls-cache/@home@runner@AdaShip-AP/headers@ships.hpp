#pragma once

#ifndef ships_hpp
#define ships_hpp

class Ships{
  public:
    void addShipName(std::string newShipName){shipName_.push_back(newShipName);};
    void addShipSize(int newShipSize){shipSize_.push_back(newShipSize);};
  private:
    std::vector <std::string> shipName_;
    std::vector <int> shipSize_;
};

#endif