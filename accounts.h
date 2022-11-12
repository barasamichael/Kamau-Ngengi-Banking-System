#ifndef ACCOUNTS_H
#define ACCOUNTS_H

struct Account_Details{
	int acct_id;
	int bank_id;
	int customer_id;
	int acct_balance;
};

typedef Account_Details accountDetails;

class Account{
	int acct_id;
	double acct_balance;

	time_t date_created;
	time_t last_updated;

	/* Foreign Keys */
	int bank_id; //class Bank
	int customer_id; //class Customer
	
	public:
	//constructor
	Account(const int customer_id, const int bank_id, int acct_id);

	//destructor
	~Account();

	void deposit(double amount);
	bool withdraw(double amount);
	void details(accountDetails& details);
};
#endif
