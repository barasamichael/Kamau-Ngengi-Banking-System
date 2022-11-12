#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <ctime>
#include <string>

using namespace std;

struct Bank_Details{
	int bank_id;
	string title;
	string email_address;
	string location;
	string phone_no;
	string status;
	string date_created;
	string last_updated;
};
typedef Bank_Details bankDetails;


class Bank{
	int bank_id;
	string title;
	string email_address;
	string location;
	string phone_no;
	string status;

	time_t date_created;
	time_t last_updated;

public:
	Bank(int bank_id, string title, string email_address, string location, string phone_no, string status);
	~Bank();
	void details(bankDetails& details);
};

#endif
