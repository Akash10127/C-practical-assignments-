#include <stdio.h>
#include <string.h>

int main() {
    char stored_username[] = "admin";
    char stored_password[] = "1234";
    
    char input_username[50];
    char input_password[50];
    
    printf("Enter Username: ");
    scanf("%s", input_username);
    
    printf("Enter Password: ");
    scanf("%s", input_password);
    
    if (strcmp(input_username, stored_username) == 0 && strcmp(input_password, stored_password) == 0) {
        printf("Login Successful.\n");
    } else {
        printf("Invalid Login.\n");
    }
    
    return 0;
}