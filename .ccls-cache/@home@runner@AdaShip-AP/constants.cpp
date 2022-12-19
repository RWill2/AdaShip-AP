#include "headersReq.hpp"

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

