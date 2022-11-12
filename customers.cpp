#include <iostream>
#include <ctime>
#include "customers.h"

using namespace std;

Customer::Customer(
		int customer_id, string first_name, string middle_name, 
		string last_name, string gender, string email_address, 
		string date_of_birth, string location_address):
	customer_id(customer_id), first_name(first_name), middle_name(middle_name), 
	last_name(last_name), gender(gender), email_address(email_address), 
	date_of_birth(date_of_birth), location_address(location_address)
{
	cout << "Creating Customer ID# " << customer_id << endl;
	
	date_created = time(0);
	last_updated = time(0);
}

Customer::~Customer(){
	cout << "Destroying Customer ID# " << customer_id << endl;
}

void Customer::details(customerDetails& details){
	details.customer_id = customer_id;
	details.name = first_name + " " + middle_name + " " + last_name;
	details.gender = gender;
	details.email_address = email_address;
	details.location_address = location_address;
	details.date_of_birth = date_of_birth;
	details.date_created = ctime(&date_created); 
	details.last_updated = ctime(&last_updated); 
}
