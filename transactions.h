#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <ctime>

using namespace std;

struct Transaction_Details{
	int transaction_id;
	int acct_id;
	double amount;
	bool debit;

	string date_created;
	string last_updated;
};
typedef Transaction_Details transactionDetails;


class Transaction{
	int transaction_id;
	int acct_id;
	double amount;
	bool debit;

	time_t date_created;
	time_t last_updated;
public:
	Transaction(int transaction_id, int acct_id, bool debit, double amount);
	~Transaction();
	void details(transactionDetails& details);
};

#endif
