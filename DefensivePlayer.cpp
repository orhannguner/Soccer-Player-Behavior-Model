#include"DefensivePlayer.h"
DefensivePlayer::DefensivePlayer(const string &n, int a, double pY, double pM) :FootballPlayer(n, a, pY)
{
	paymentPerMatch = pM;
}
double DefensivePlayer::CalculatePaymentForThisYear()
{
	return paymentPerYear + (paymentPerMatch * PlayedMatchCount);
}
void DefensivePlayer::Defense()
{
	cout << name << " is pressing" << endl;
}
void DefensivePlayer::setPlayedMatchCount(int a)
{
	PlayedMatchCount = a;
}
int DefensivePlayer::getPlayedMatchCount()
{
	return PlayedMatchCount;
}
void DefensivePlayer::TripUp( Player* player)
{
	cout << name << " is tripping up " <<player->getName()<<endl;
}