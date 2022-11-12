#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include <string>

using namespace std;

struct Customer_Details{
	int customer_id;
	string name;
	string gender;
	string email_address;
	string location_address;
	string date_of_birth;
	string date_created;
	string last_updated;
};
typedef Customer_Details customerDetails;

class Customer{
	int customer_id;
	string first_name;
	string middle_name;
	string last_name;
	string gender;
	string email_address;
	string location_address;
	string date_of_birth;
	time_t date_created;
	time_t last_updated;
public:
	Customer(
		int customer_id, string first_name, string middle_name, 
		string last_name, string gender, string email_address, 
		string date_of_birth, string location_address);
	~Customer();
	void details(customerDetails& details);
};

#endif
