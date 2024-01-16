
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
};

int main() {
    struct Team fullstack;

    fullstack.lead.firstname = (char *) malloc(20 * sizeof(char));
    printf("Enter the lead's firstname: ");
    scanf("%s", fullstack.lead.firstname);

    fullstack.lead.lastname = (char *) malloc(20 * sizeof(char));
    printf("Enter the lead's lastname: ");
    scanf("%s", fullstack.lead.lastname);

    printf("Enter the lead's ID: ");
    scanf("%d", &fullstack.lead.id);

    printf("Enter the last four digits of lead's SSN: ");
    scanf("%d", &fullstack.lead.ssn);

    fullstack.lead.title = (char *) malloc(20 * sizeof(char));
    printf("Enter the lead's title: ");
    scanf("%s", fullstack.lead.title);

    fullstack.partner.firstname = (char *) malloc(20 * sizeof(char));
    printf("\nEnter the partner's firstname: ");
    scanf("%s", fullstack.partner.firstname);

    fullstack.partner.lastname = (char *) malloc(20 * sizeof(char));
    printf("Enter the partner's lastname: ");
    scanf("%s", fullstack.partner.lastname);

    printf("Enter the partner's ID: ");
    scanf("%d", &fullstack.partner.id);

    printf("Enter the last four digits of partner's SSN: ");
    scanf("%d", &fullstack.partner.ssn);

    fullstack.partner.title = (char *) malloc(20 * sizeof(char));
    printf("Enter the partner's title: ");
    scanf("%s", fullstack.partner.title);

    printf("\n\nEmployee information for %s %s:\nID: %d\nSSN: %d\nTitle: %s Engineer\n",
           fullstack.lead.firstname, fullstack.lead.lastname, fullstack.lead.id,
           fullstack.lead.ssn, fullstack.lead.title);

    printf("\n\nEmployee information for %s %s:\nID: %d\nSSN: %d\nTitle: %s Engineer\n",
           fullstack.partner.firstname, fullstack.partner.lastname, fullstack.partner.id,
           fullstack.partner.ssn, fullstack.partner.title);

    // Don't forget to free the allocated memory
    free(fullstack.lead.firstname);
    free(fullstack.lead.lastname);
    free(fullstack.lead.title);
    free(fullstack.partner.firstname);
    free(fullstack.partner.lastname);
    free(fullstack.partner.title);

    return 0;
}
