#pragma once

#ifndef constants_hpp
#define constants_hpp

const std::string configFile = "adaship_config.ini";

const int boardWidth = 10;
const int boardHeight = 10;
const int tiles = 100;

const std::vector <std::string> shipNames = {"Battleship","Destroyer","Submarine","Patrol Boat","Submarine"};
const std::vector <int> shipSizes = {5,3,3,2,3};

const char HIT = 'X';
const char MISS = 'O';
const char WATER = '.';
const char SHIP = '-';

#endif