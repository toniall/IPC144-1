/* -------------------------------------------
Name:Carlos Moyano
Student number:123435174
Email:cmoyano-rugiero@myseneca.ca
Section:RR
Date:30-11-17
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include "contacts.h"
#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


int main (void)
{
    // Declare variables here:
	char input;

	struct Name cont_name;
	struct Adress cont_adress;
	struct Numbers cont_number;


    // Display the title
	

	printf("Contact Management System\n");
	printf("-------------------------\n");


    // Contact Name Input:

	printf("Please enter the contact's first name: ");
	scanf("%30s", cont_name.firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &input);
	if (input == 'y' || input == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", cont_name.middleInitial);
		
	}
	
	printf("Please enter the contact's last name: ");
	scanf("%35s", cont_name.lastName);
	

    // Contact Address Input:



	printf("Please enter the contact's street number: ");
	scanf("%d", &cont_adress.streetNumber);
	;

	printf("Please enter the contact's street name: ");
	scanf("%40s", cont_adress.street);
	

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &input);
	if (input == 'y' || input == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &cont_adress.apartmentNumber);
		
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %10[^\n]", cont_adress.postalCode);
	


	printf("Please enter the contact's city: ");
	scanf("%40s", cont_adress.city);
	


    // Contact Numbers Input:

	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &input);
	if (input == 'y' || input == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%20s", cont_number.cell);
		
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &input);
	if (input == 'y' || input == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", cont_number.home);
		
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &input);
	if (input == 'y' || input == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", cont_number.business);
		
	}

    // Display Contact Summary Details
	
	printf("\nContact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", cont_name.firstName);
	printf("Middle initial(s): %s\n", cont_name.middleInitial);
	printf("Last name: %s\n", cont_name.lastName);
	printf("\n");

	printf("Address Details\n");
	printf("Street number: %d\n", cont_adress.streetNumber);
	printf("Street name: %s\n", cont_adress.street);
	printf("Apartment: %d\n", cont_adress.apartmentNumber);
	printf("Postal code: %s\n", cont_adress.postalCode);
	printf("City: %s\n", cont_adress.city);
	printf("\n");

	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", cont_number.cell);
	printf("Home phone number: %s\n", cont_number.home);
	printf("Business phone number: %s\n", cont_number.business);



    // Display Completion Message

	printf("\nStructure test for Name, Address, and Numbers Done!\n");

    return 0;
}

/*  SAMPLE OUTPUT:
    
Contact Management System
-------------------------
Please enter the contact's first name: Tom
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Wong
Please enter the contact's last name: Song
Please enter the contact's street number: 20
Please enter the contact's street name: Keele
Do you want to enter an appartment number? (y or n): y
Please enter the contact's appartment number: 40
Please enter the contact's postal code: A8A 4J4
Please enter the contact's city: Toronto
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 905-111-6666
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 705-222-7777
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-333-8888

Contact Details
---------------
Name Details
First name: Tom
Middle initial(s): Wong
Last name: Song

Address Details
Street number: 20
Street name: Keele
Apartment: 40
Postal code: A8A 4J4
City: Toronto

Phone Numbers:
Cell phone number: 905-111-6666
Home phone number: 705-222-7777
Business phone number: 416-333-8888

Structure test for Name, Address, and Numbers Done!
*/
