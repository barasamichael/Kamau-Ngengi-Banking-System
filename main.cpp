#include <iostream>
#include "customers.h"

using namespace std;

int main(){
	customerDetails customer_temp;

	Customer customer(34, "Barasa", "Michael", "Murunga", "Male", "barasamichael64@gmail.com", "December 20, 2001", "234L Brooklyn, NY, USA");
	customer.details(customer_temp);

	cout << "Customer ID: " << customer_temp.customer_id << endl;
	cout << "Customer Name: " << customer_temp.name << endl;
	cout << "Customer Gender: " << customer_temp.gender << endl;
	cout << "Customer Email Address: " << customer_temp.email_address << endl;
	cout << "Customer Location Address: " << customer_temp.location_address << endl;
	cout << "Customer Date Created: " << customer_temp.date_created << endl;
	cout << "Customer Last updated: " << customer_temp.last_updated << endl;
	
	return (0);
}
