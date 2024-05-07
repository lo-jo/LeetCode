#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mergeAlternately(char * word1, char * word2){
    char *str;
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int totallen = len1 + len2;
    str = malloc(sizeof(char) * totallen + 1);
    int i = 0;
    int j = 0;
    int y = 0;
    while (word1[i]){
        str[y] = word1[i];
        if (word2[j] != '\0'){
            str[y + 1] = word2[j];
            j++;
            y ++; 
        }
        i++;
        y++;
    }
    if (len2 > len1){
        while(word2[i]){
            str[y] = word2[i];
            y++;
            i++;
            printf("y %d", y);
        }
    }
    str[y] = '\0';
    printf("RESULT IS : %s\n", str);
    return str;

}

int main(int argc, char **argv){
    (void)argc;
    (void)argv;

    mergeAlternately("abcd", "pq");
    printf("AHHAA");
}