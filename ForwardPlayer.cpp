#include<iostream>
#include"ForwardPlayer.h"
using namespace std;
ForwardPlayer::ForwardPlayer(const string &n, int a, double pY, double pG):FootballPlayer(n,a,pY)
{
	paymentPerGoal = pG;

}
double ForwardPlayer::CalculatePaymentForThisYear()
{
	int payment;
	payment = paymentPerYear + (paymentPerGoal * goalCount);
	return payment;
}
void ForwardPlayer::setGoalCount(int goal)
{
	goalCount = goal;
}
int ForwardPlayer::getGoalCount()
{
	return goalCount;
}
void ForwardPlayer::ThrowYourSelf()
{
	cout << name << " is throwing himself.." << endl;
}
void ForwardPlayer::TryDribblePast( Player* player)
{
	cout << name << "is tring a dribble past on "  <<player->getName()<< endl;
}
