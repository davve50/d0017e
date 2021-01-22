#include <stdio.h>
#include <stdlib.h>


#if 0
//Task 1
char* substring(char source[], int start, int count, char *result){
    int i = 0;

    while (i < count) {
      result[i] = source[start+i];
      ++i;
    }
    result[i] = '\0';

    return result;
}

int findString(char source[], char character[]){
    int  i=0, j=0;
    char *p3;
    char *p1 = source;
    char *p2 = character;

    for(i = 0; i<strlen(source); i++){
        if(*p1 == *p2){
            p3 = p1;
            for(j = 0;j<strlen(character);j++){
                if(*p3 == *p2){
                    !p3++;p2++;
                }else{
                  break;
                }
            }
            p2 = character;
            if(j == strlen(character)){
                printf("\nSubstring found at index : %d\n",i);
                return i;
            }
        }
        p1++;
    }

  i = -1;
  return i;
}
int main(){
    char result[50];
    substring("two words", 4, 20, result);
    printf("%s\n", result);
    printf("%i\n", findString("two words", "ord"));

}
#endif

#if 0
//Task 2
struct entry{
        int value;
        struct entry *next;
};

void insertEntry(struct entry *newEntry, struct entry *EntryNo ){
    (*newEntry).next = (*EntryNo).next;
    (*EntryNo).next = newEntry;
}

int compareStrings(const char *s1, const char *s2){
    int i=0,answer;
    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        ++i;
    }
    if(s1[i] < s2[i]){
        answer = -1;
    }else if(s1[i] == s2[i]){
        answer = 0;
    }else{
        answer = 1;
    }

    return answer;
}

int main(){
    struct entry n1, n2, n3, n4, newEntry;

    struct entry *listPointer = &n1;
    n1.value = 100;
    n1.next = &n2;
    n2.value = 200;
    n2.next = &n3;
    n3.value = 300;
    n3.next = &n4;
    n4.value = 400;
    n4.next = (struct entry *) 0;

    newEntry.value = 999;

    printf("\nThe list before adding a new entry:\n");
    while ( listPointer != (struct entry*) 0 ){
        printf("%i\n", listPointer->value );
        listPointer = listPointer->next;
    }
    listPointer = &n1;

    insertEntry(&newEntry, &n4);

    printf("\nThe list after adding a new entry:\n");
    while(listPointer != (struct entry*) 0){
        printf("%i\n", listPointer->value );
        listPointer = listPointer->next;
    }

    char *s1 = {'1','2'};
    char *s2 = {'2','4'};

    printf("\n%i",compareStrings(&s1,&s2));


return 0;
}
#endif

#if 0
//Task 3
#define MIN(a,b) ( ((a) < (b)) ? (a) : (b) )
int main(){
    printf("\n%i", MIN(3,2));
    return 0;
}
#endif

#if 1
//Task 4
int main(){
    FILE *inputFile, *outputFile;

    inputFile = fopen ("testIn", "r");
    outputFile = fopen ("testOut", "w");
    if ( inputFile == NULL){
        printf("Data could not be opened!\n");
    }else{
        int c;
        while (EOF != (c = fgetc(inputFile))) {
            fputc(toupper(c), outputFile);
        }
        printf("Data successfully copied!\n");
    }

    fclose(inputFile);
    fclose(outputFile);


    FILE *file1, *file2;
    file1 = fopen ("file1", "r");
    file2 = fopen ("file2", "r");

    char c1[256],c2[256];

    while ((!feof(file1)) || (!feof(file2))) {
        if (!feof(file1)) {
            fgets(c1, sizeof(c1), file1);
            strtok(c1, "\n");
            printf("%s", c1);
            printf(" ");
        }
        if (!feof(file2)) {
            fgets(c2, sizeof(c2), file2);
            strtok(c2, "\n");
            printf("%s", c2);
            printf(" ");
        }
    }

    fclose(file1);
    fclose(file2);
    return 0;
}
#endif
