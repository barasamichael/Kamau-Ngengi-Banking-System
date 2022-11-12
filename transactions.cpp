#include <iostream>
#include <string>
#include <ctime>

#include "transactions.h"

using namespace std;

Transaction::Transaction(int transaction_id, int acct_id, bool debit, double amount):
	transaction_id(transaction_id), acct_id(acct_id), debit(debit), amount(amount)
{
	cout << "Creating Transaction Object # " << transaction_id << endl;
	if (amount < 0){
		amount = 0;
	}
	date_created = time(0);
	last_updated = time(0);
}


Transaction::~Transaction(){
	cout << "Destroying Account Object #" << transaction_id << endl;
}

void Transaction::details(transactionDetails& details){
	details.transaction_id = transaction_id;
	details.acct_id = acct_id;
	details.amount = amount;
	details.debit = debit;

	details.date_created = ctime(&date_created);
	details.last_updated = ctime(&last_updated);
}
