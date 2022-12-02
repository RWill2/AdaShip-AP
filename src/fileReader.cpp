#include "../headers/headersReq.h"

struct udt_split{
  std::string left;
  std::string right;
};

udt_split stringSplitter(std::string lineFile, std::string delimeter){
  std::string search = lineFile;
  udt_split split;
  split.left = "";
  split.right = "";

  std::size_t splitPos = search.find(delimeter);
  if(splitPos > 0 && splitPos < search.length()){
    split.left = lineFile.substr(0,splitPos);
    split.right = lineFile.substr(splitPos + delimeter.length(), std::string::npos);
  }

  return split;
}

void readFile(std::string file){
  //std::cout << "IN";
  std::string line;
  std::ifstream fileobject;
  udt_split split;
  Board boardConfig;
  Ships shipsConfig;

  fileobject.open(file);
  while(!fileobject.eof()){
    getline(fileobject, line); 
    split = stringSplitter(line, ":");
    if(split.left == "Board"){
      split = stringSplitter(split.right, "x");
      boardConfig.setWidth(std::stoi(split.left));
      boardConfig.setHeight(std::stoi(split.right));
      //std::cout << split.left << std::endl;
      //std::cout << split.right << std::endl;
    }
    else if(split.left == "Boat"){
      split = stringSplitter(split.right, ",");
      shipsConfig.addShipName(split.left);
      shipsConfig.addShipSize(std::stoi(split.right));
      //std::cout << split.left << std::endl;
      //std::cout << split.right << std::endl;
    }
  }
  fileobject.close();
}