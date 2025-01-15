#include"MidFielderPlayer.h"
double MidFielderPlayer::CalculatePaymentForThisYear()
{
	double payment = paymentPerYear + (paymentPerAssist * assistCount);
	return payment;
}
int MidFielderPlayer::getAssistCount()
{
	return assistCount;
}
MidFielderPlayer::MidFielderPlayer(const string& n, int a, double pY, double pA) :FootballPlayer(n, a, pY)
{
	paymentPerAssist = pA;
}
void MidFielderPlayer::Press()
{
	cout << name << " is pressing.." << endl;
}
void MidFielderPlayer::setAssistCount(int a)
{
	assistCount = a;
}
void MidFielderPlayer::TryThroughBall( Player* player)
{
	cout << name << "is tring a through ball to " <<player->getName()<<endl;
}