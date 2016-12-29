#include <stdio.h>
#include <stdlib.h>
#define MEMBER_FILE "members.txt"
#define MAX_LEN (100+7)

void execute_me() {
	printf("Pretty easy, huh?\n");
}

void add_member() {
	printf("Please enter your first and last name (e.g. \"Ben Bitdiddle\"): ");

	char first_name[MAX_LEN];
	char last_name[MAX_LEN];
	scanf("%s %s", first_name, last_name);

	FILE* member_list = fopen(MEMBER_FILE,"a");
	fprintf(member_list, "%s %s\n", first_name, last_name);
	fclose(member_list);

	printf("You have been added to the REClub list.\n");
}

void view_members() {
	FILE* member_list = fopen(MEMBER_FILE,"r");

	if (!member_list) {
		printf("There are currently no members.\n");
		return;
	}

	char first_name[MAX_LEN];
	char last_name[MAX_LEN];

    printf("The current members are:\n\n");
	while (fscanf(member_list, "%s %s", first_name, last_name) == 2)
		printf("%s %s\n", first_name, last_name);
    printf("\nPress any key...\n");

    while (getchar() != '\n');
    getchar();
}

void display_menu_text() {
	printf("Welcome to the automated REClub sign-in sheet.\n");
	printf("What would you like to do?\n");
	printf("1) Join REClub\n");
	printf("2) View current members\n");
	printf("3) Exit\n");
}

int get_user_choice() {
	char* str_choice;
	scanf("%ms", &str_choice);

	int choice = atoi(str_choice);

	if (choice < 1 || choice > 3) {
		printf("Invalid choice.\n");
		free(str_choice);
		return -1;
	}

    return choice;
}

int main() {
    while (1) {
        display_menu_text();
        int choice = get_user_choice();

        if (choice == 1)
            add_member();
        else if (choice == 2)
            view_members();
        else if (choice == 3)
            break;
    }

    printf("Exiting...\n");
	return 0;
}
