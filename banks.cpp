#include <iostream>
#include <string>
#include <ctime>

#include "banks.h"

using namespace std;

Bank::Bank(int bank_id, string title, string email_address, 
		string location, string phone_no, string status):
	bank_id(bank_id), title(title), email_address(email_address), 
	location(location), phone_no(phone_no), status(status)
{
	cout << "Generating Bank Object ID# " << bank_id << endl;
	date_created = time(0);
	last_updated = time(0);
}

Bank::~Bank(){
	cout << "Destroying Bank Object ID# " << bank_id << endl;
}

void Bank::details(bankDetails& details){
	details.bank_id = bank_id;
	details.title = title;
	details.email_address = email_address;
	details.location = location;
	details.phone_no = phone_no;
	details.status = status;

	details.date_created = ctime(&date_created);
	details.last_updated = ctime(&last_updated);
}
