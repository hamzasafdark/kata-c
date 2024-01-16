#include <stdio.h>
#include <stdlib.h>


struct Employee {
	char *lastname;
	char *firstname; 
	int  id;
        int  ssn;
	char *title;	
};

struct Team {
	struct Employee lead;
	struct Employee partner;
} Employee; 

int main() {

	struct Team fullstack;

	fullstack.lead.firstname = (char *) malloc (20*sizeof(char));
	printf("Enter the employee's firstname: ");
	scanf("%s", *fullstack.lead.firstname);

	
	fullstack.lead.lastname = (char *) malloc (20*sizeof(char));
	printf("Enter the employee's lastname: ");
	scanf("%s", *fullstack.lead.lastname);

	
	fullstack.lead.eid = (int *) malloc (20*sizeof(int));
	printf("Enter the employee's ID: ");
	scanf("%d", *fullstack.lead.id);

	printf("Enter the last four digits of employee's ssn: ");
	scanf("%d", *fullstack.lead.ssn);

	
	fullstack.lead.title = (char *) malloc (20*sizeof(char));
	printf("Enter the employee's title: ");
	scanf("%s", *fullstack.lead.title);


	fullstack.partner.firstname = (char *) malloc (20*sizeof(char));
	printf("Enter the employee's firstname: ");
	scanf("%s", *fullstack.partner.firstname);

	
	fullstack.partner.lastname = (char *) malloc (20*sizeof(char));
	printf("Enter the employee's lastname: ");
	scanf("%d", *fullstack.partner.lastname);

	
	fullstack.partner.eid = (int *) malloc (20*sizeof(int));
	printf("Enter the employee's ID: ");
	scanf("%d", *fullstack.partner.id);


	
	fullstack.lead.title = (char *) malloc (20*sizeof(char));
	printf("Enter the employee's title: ");
	scanf("%s", *fullstack.partner.title);

	printf("Employee information for %s %s:\nID: %d\nSSN: %d\nTitle: %s", fullstack.lead.firstname, 
	fullstack.lead.lastname, fullstack.lead.id, fullstack.lead.ssn, fullstack.lead.title);

	printf("Employee information for %s %s:\nID: %d\nSSN: %d\nTitle: %s", fullstack.partner.firstname, 
	fullstack.partner.lastname, fullstack.partner.id, fullstack.partner.ssn, fullstack.partner.title);

	return 0;
}
