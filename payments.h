#ifndef PAYMENTS_H
#define PAYMENTS_H

#include <string>
#include <ctime>

using namespace std;

struct Payment_Details{
	int payment_id;
	int loan_id;
	double amount;

	string date_created;
	string last_updated;
};
typedef Payment_Details paymentDetails;

class Payment{
	int payment_id;
	int loan_id;
	double amount;

	time_t date_created;
	time_t last_updated;

public:
	Payment(int payment_id, int loan_id, double amount);
	~Payment();
	void details(paymentDetails& details);
};

#endif
