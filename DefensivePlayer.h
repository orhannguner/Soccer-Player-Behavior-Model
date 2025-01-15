#pragma once
#include"FootballPlayer.h"
using namespace std;
class DefensivePlayer:public FootballPlayer
{
private:
	double paymentPerMatch;
	int PlayedMatchCount;
public:
	double CalculatePaymentForThisYear();
	void Defense();
	DefensivePlayer(const string& name, int age, double paymentPerYear, double paymentPerMatch);
	int getPlayedMatchCount();
	void setPlayedMatchCount(int playedMatchCount);
	void TripUp( Player* player);
	~DefensivePlayer();


};