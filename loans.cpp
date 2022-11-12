#include <iostream>
#include <ctime>
#include <string>

#include "loans.h"

using namespace std;

Loan::~Loan(){
	cout << "Destroying Loan ID# " << loan_id << endl;
}

Loan::Loan(int loan_id, int acct_id, double amnt):
	loan_id(loan_id), acct_id(acct_id)
{
	cout << "Creating Loan Object ID# " << loan_id << endl;
	if (amount > 0){
		amount = amnt;
	} else {
		cout << "Creation of loan unsuccessfull...amount is negative" << endl;
	}

	date_created = time(0);
	last_updated = time(0);
}

void Loan::details(loanDetails& details){
	details.loan_id = loan_id;
	details.acct_id = acct_id;
	details.amount = amount;
	details.date_created = ctime(&date_created);
	details.last_updated = ctime(&last_updated);
}
