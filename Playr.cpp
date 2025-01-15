#include"Player.h"
Player::Player(int a, const string& n)
{
	name = n;
	age = a;
}
const string& Player::getName()
{
	return name;
}
int Player::getAge()
{
	return age;
}

void Player::Move(Direction direction)
{
	switch (direction)
	{
	case SOUTH:
	{
		moveSouth();
		break;
	}
	case NORTH:
	{
		moveNorth();
		break;
	}
	case EAST:
	{
		moveEast();
		break;
	}
	case WEST:
	{
		moveWest();
		break;
	}
	case SOUTH_WEST:
	{
		moveSouthWest();
		break;
	}
	case SOUTH_EAST:
	{
		moveSouthEast();
		break;
	}
	case NORTH_WEST:
	{
		moveNorthWest();
		break;
	}
	case NORTH_EAST:
	{
		moveNorthEast();
		break;
	}

	}

}
void Player::moveEast()
{
	cout << name << " is moving to East" << endl;
}
void Player::moveWest()
{
	cout << name << " is moving to West" << endl;
}
void Player::moveNorth()
{
	cout << name << " is moving to North" << endl;
}
void Player::moveSouth()
{
	cout << name << " is moving to South" << endl;
}
void Player::moveSouthEast()
{
	cout << name << " is moving to SouthEast" << endl;
}
void Player::moveNorthEast()
{
	cout << name << " is moving to NorthEast" << endl;
}
void Player::moveNorthWest()
{
	cout << name << " is moving to NorthWest" << endl;
}
void Player::moveSouthWest()
{
	cout << name << " is moving to SouthWest" << endl;
}






