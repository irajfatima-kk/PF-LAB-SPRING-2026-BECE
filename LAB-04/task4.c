#include <stdio.h>
#include <string.h>
int main() {
    char username[20], password[20];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "user") == 0 && strcmp(password, "7890") == 0)
        printf("Connected Successfully\n");
    else
        printf("Connection Failed\n");

    return 0;
}
