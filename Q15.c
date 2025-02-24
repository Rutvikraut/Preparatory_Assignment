#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 30

int notContainsCharacter(char* s, char ch);
int main(int argc, char const *argv[])
{
    char* str = (char*)calloc(SIZE, sizeof(char));
    char* new_str = (char*)calloc(SIZE, sizeof(char));
    char* chr = (char*)calloc(SIZE, sizeof(char));
    int* cnt = (int*)calloc(SIZE, sizeof(int));
    printf("Enter a string: ");
    fgets(str, SIZE, stdin);
    int k = 0;
    int count = 0;

    for (int i = 0, j = 0; i < strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\n')
            continue;
        else
            new_str[j++] = toupper(str[i]);
    }

    for(int i = 0; i < strlen(new_str); i++) {
        if (notContainsCharacter(chr,new_str[i]))
            chr[k++] = new_str[i];
    }
    // printf("%s\n", new_str);
    // printf("%s\n", chr);

    for (int i = 0; i < strlen(chr); i++) {
        count = 0;
        for (int j = 0; j < strlen(new_str); j++) {
            // printf("%c %c\n", chr[i], new_str[j]);
            if (chr[i] == new_str[j])
                count++;
            cnt[i] = count;
        }
    }
    char temp;
    int alt;

    for (int i = 0; i < strlen(chr) - 1; i++) {
        for (int j = i + 1; j < strlen(chr); j++) {
            if (chr[i] > chr[j]) {
                temp = chr[i];
                chr[i] = chr[j];
                chr[j] = temp;
                alt = cnt[i];
                cnt[i] = cnt[j];
                cnt[j] = alt;
            } 
        }
        //printf("%c %d\n", chr[i], cnt[i]);
    }

    for (int i = 0; i < strlen(chr); i++) {
        printf("%c: %d\n", chr[i], cnt[i]);
    }

    return 0;
}

int notContainsCharacter(char* s, char ch) {
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ch) 
            return 0;
        return 1;
}
