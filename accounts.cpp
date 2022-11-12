#include <ctime>
#include <iostream>

#include "accounts.h"

using namespace std;

Account::Account(
		int acct_id, const int bank_id, const int customer_id): 
	acct_id(acct_id), bank_id(bank_id), customer_id(customer_id)
{
	cout << "Creating Account Object ID# " << acct_id << endl;
	acct_balance = 0.0;
	date_created = time(0);
	last_updated = time(0);
}

Account::~Account(){
	cout << "Destroying Account Object ID#" << acct_id << endl;
}

bool Account::withdraw(const double amount){
	//unsuccessful by default
	bool successful = false;

	if (acct_balance - amount >= 0){
		acct_balance -= amount;
		successful = true;
	}
	return successful;
}

void Account::deposit(const double amount){
	acct_balance += amount;
}

void Account::details(accountDetails& details){
	details.acct_id = acct_id;
	details.bank_id = bank_id;
	details.customer_id = customer_id;
	details.acct_balance = acct_balance;
}
