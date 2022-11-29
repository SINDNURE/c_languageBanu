////create a username and password and check it with function
//
//#include "stdio.h"
//#include "stdlib.h"
//#include "string.h"
//#include "ctype.h" // for isdigit()
//
//void login(char username[], char password[]) {
//  
//}
//
//int main() {
//    char username[20];
//    char password[20];
//    printf("Enter your username: ");
//    scanf("%s", username);
//    printf("Enter your password: ");
//    scanf("%s", password);
//    login(username, password);
//    return 0;
//}
#include <stdio.h>

#include <string.h>

int main ()

{

char id[50];

User:

printf("Enter your id:\n");

scanf("%s", &id);

if (strcmp(id,"hilmi")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"71")==0)

{

printf("You have successly loged in into G-Mail\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

goto pass;

}

return 0;

}
