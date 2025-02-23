// Write a program to check the input characters for uppercase, lowercase, number of digits and other characters. Display appropriate message.

#include <stdio.h>
#include <ctype.h>
#define MAX 100

void checkCharacters(char str[],int n){
    char upperCase[MAX];
    char lowerCase[MAX];
    char digits[MAX];
    char specialChar[MAX];

    int uppercase = 0, lowercase = 0, digit = 0, special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            upperCase[uppercase]=str[i];
            uppercase++;
        } else if (islower(str[i])) {
            lowerCase[lowercase]=str[i];
            lowercase++;
        } else if (isdigit(str[i])) {
            digits[digit]=str[i];
            digit++;
        } else if (str[i] != '\n') {
            specialChar[special]=str[i];
            special++;
        }
    }

    printf("Upper Case : ");
    for (int i = 0; i < uppercase; i++)
    {
        printf("%c",upperCase[i]);
    }
    printf("\nLower Case : ");
    for (int i = 0; i < lowercase; i++)
    {
        printf("%c",lowerCase[i]);
    }
    printf("\nDigits : ");
    for (int i = 0; i < digit; i++)
    {
        printf("%c",digits[i]);
    }

    printf("\nNumber of digits : %d",digit);

    printf("\nSpecial Characters: ");
    for (int i = 0; i < special; i++)
    {
        printf("%c",specialChar[i]);
    }
}
int main(){

    char str[MAX];
    int n;
    printf("Enter the number of characters to be entered: ");
    scanf("%d", &n);
    printf("Enter the characters: ");
    scanf("%s", str);
    checkCharacters(str, n);
    return 0;
}