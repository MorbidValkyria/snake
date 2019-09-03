#include <iostream>
#include <vector>
#include <ncurses.h>
#include <cstdlib>
#include <unistd.h>
#ifndef SNAKE_H
#define SNAKE_H

#endif

struct snakepart
{
	int x, y;
	snakepart(int col, int row);
	snakepart();
};

class snakeclass
{
	int points, del, maxwidth, maxheight;
	char direction, partchar, edge, snack;
	bool get;
	snakepart food;
	std::vector<snakepart> snake;
	void placefood();
	bool collision();
	void movesnake();
public:
	snakeclass();
	~snakeclass();
	// should be called explicitly outside the class
	void start();
	
};