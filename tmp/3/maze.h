
#include <iostream>
//
#define WIDTH 20
#define HEIGHT 20

struct cell
{
	bool north, east, south, west;
	bool visited;
	int x,y;
};

class Maze
{

private:
	cell maze[WIDTH][HEIGHT];

public:
	//constructor & deconstructor
	Maze();
	~Maze();
	//methods
	void drawMaze();
	void drawCell();

	//
	void nextCell();

	//booleans for 'if there is a wall'
	bool nborder(int i, int j); //North
	bool sborder(int i, int j); //South
	bool eborder(int i, int j); //East
	bool wborder(int i, int j); //West

	cell* nborder(int i, int j);
	cell* sborder(int i, int j);
	cell* eborder(int i, int j);
	cell* wborder(int i, int j);
};
