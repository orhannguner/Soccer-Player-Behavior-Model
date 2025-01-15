#include<iostream>
#include"FootballPlayer.h"
FootballPlayer::FootballPlayer(const string& n, int a, double p):Player(a,n)
{
	paymentPerYear = p;
}
double FootballPlayer::getPaymentPerYear()
{
	return paymentPerYear;
}
void FootballPlayer:: Pas(  Player* player )
{
	
	cout << name << " pass to "   << player->getName() << endl;
}
void FootballPlayer::setPaymentPerYear(double pA)
{
	paymentPerYear = pA;
}
void FootballPlayer::Shot()
{
	cout << name << " is shotting" << endl;
}

