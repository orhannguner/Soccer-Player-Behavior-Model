#pragma once
#include "FootballPlayer.h"
class ForwardPlayer:public FootballPlayer
{
private:
	int goalCount;
	double paymentPerGoal;
public:
	double CalculatePaymentForThisYear();
	ForwardPlayer(const string& name, int age, double paymentPerYear,double paymentPerGoal);
	int getGoalCount();
	void setGoalCount(int goalCount);
	void ThrowYourSelf();
	void TryDribblePast( Player* player);
	~ForwardPlayer();

};

