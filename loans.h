#ifndef LOANS_H
#define LOANS_H

#include <string>

using namespace std;

struct Loan_Details{
	int loan_id;
	int acct_id;
	double amount;

	string date_created;
	string last_updated;
};
typedef Loan_Details loanDetails;


class Loan{
	int loan_id;
	int acct_id;
	double amount;

	time_t date_created;
	time_t last_updated;
public:
	Loan(int loan_id, int acct_id, double amnt);
	~Loan();
	void details(loanDetails& details);

};

#endif
