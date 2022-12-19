#pragma once

class configuration{
  public:
    static configuration *getInstance(const int &boardWidth = 10, const int &boardHeight = 10);

    int boardWidth() const;

    int boardHeight() const;

    void setBoard(int width, int height);

  protected:
    int boardWidth_;
    int boardHeight_;

  private:
    configuration(const int boardWidth, const int boardHeight);
    static configuration* inst_;
};