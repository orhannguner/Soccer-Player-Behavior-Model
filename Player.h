#include<iostream>
#include<string>
using namespace std;

class Player {
protected:
	string name;
	int age;
public:
	int getAge();
	const string& getName();
	Player(int age , const string& name);
	~Player();
	enum Direction { SOUTH, EAST, WEST, NORTH, NORTH_EAST, NORTH_WEST, SOUTH_EAST, SOUTH_WEST };
    void Move(Direction direction);
	void moveEast();
	void moveWest();
	void moveSouth();
	void moveNorth();
	void moveNorthEast();
	void moveNorthWest();
	void moveSouthEast();
	void moveSouthWest();



};

