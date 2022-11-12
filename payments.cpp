#include <iostream>
#include <ctime>
#include "payments.h"

using namespace std;

Payment::Payment(int payment_id, int loan_id, double amnt):
	payment_id(payment_id), loan_id(loan_id), amount(amnt)
{
	cout << "Generating Payment Object ID#" << payment_id << endl;
	
	if (amnt > 0){
		amount = amnt;
	}
	date_created = time(0);
	last_updated = time(0);
}

Payment::~Payment(){
	cout << "Destroying Payment Object ID#" << payment_id << endl;
}

void Payment::details(paymentDetails& details){
	details.payment_id = payment_id;
	details.loan_id = loan_id;
	details.amount = amount;

	details.date_created = ctime(&date_created);
	details.last_updated = ctime(&last_updated);
}
