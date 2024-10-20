#include <stdio.h>

// Function to validate name
int isValidName(char name[]) {
    for(int i = 0; name[i] != '\0'; i++) {
        if(!((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') || name[i] == ' ')) {
            return 0;
        }
    }
    return 1;
}

// Function to validate email
int isValidEmail(char email[]) {
    int atSymbol = 0;
    for(int i = 0; email[i] != '\0'; i++) {
        if((email[i] >= 'A' && email[i] <= 'Z') || (email[i] >= 'a' && email[i] <= 'z') || 
           (email[i] >= '0' && email[i] <= '9') || email[i] == '.' || email[i] == '_' || email[i] == '-') {
            continue;
        } else if(email[i] == '@') {
            atSymbol++;
        } else {
            return 0;
        }
    }
    return atSymbol == 1;
}

// Function to validate phone number
int isValidPhoneNumber(char phone[]) {
    int i = 0;
    if(phone[0] == '+') {
        i++;
    }
    for(; phone[i] != '\0'; i++) {
        if(!((phone[i] >= '0' && phone[i] <= '9') || phone[i] == ' ' || phone[i] == '-')) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char name[100], email[100], phone[100];
    
    printf("Enter your name: ");
    gets(name);
    if(!isValidName(name)) {
        printf("Invalid name\n");
        return 1;
    }
    
    printf("Enter your email: ");
    gets(email);
    if(!isValidEmail(email)) {
        printf("Invalid email\n");
        return 1;
    }
    
    printf("Enter your phone number: ");
    gets(phone);
    if(!isValidPhoneNumber(phone)) {
        printf("Invalid phone number\n");
        return 1;
    }
    
    printf("Valid inputs:\nName: %s\nEmail: %s\nPhone: %s\n", name, email, phone);
    return 0;
}
