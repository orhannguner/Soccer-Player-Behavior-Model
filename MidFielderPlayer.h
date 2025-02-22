#pragma once
#include "FootballPlayer.h"
using namespace std;
class MidFielderPlayer:public FootballPlayer
{
private:
	int assistCount;
	double paymentPerAssist;
public:
	double CalculatePaymentForThisYear();
	int getAssistCount();
	MidFielderPlayer(const string &name, int age, double paymentPerYear, double paymentPerAssist);
	void Press();
	void setAssistCount(int assistCount);
	void TryThroughBall( Player* player);
	~MidFielderPlayer();


};