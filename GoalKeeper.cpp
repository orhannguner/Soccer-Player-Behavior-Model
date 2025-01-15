#include"GoalKeeper.h"
double GoalKeeper::CalculatePaymentForThisYear()
{
	return paymentPerYear;
}
void GoalKeeper::FlyAndTryCatch()
{
	cout << name << " is flying and trying to catch the ball " << endl;
}
GoalKeeper::GoalKeeper(const string &n, int a, double pY) :FootballPlayer(n, a, pY)
{

}
