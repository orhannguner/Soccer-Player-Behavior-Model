#pragma once
#include<iostream>
#include "Player.h"
using namespace std;
class FootballPlayer:  public Player
{
protected:
     double paymentPerYear;
public:
	FootballPlayer(const string &name, int age, double paymentPerYear);
	double getPaymentPerYear();
	void Pas( Player* player);
	void setPaymentPerYear(double PaymentPerYear);
	void Shot();
	~FootballPlayer();



};

