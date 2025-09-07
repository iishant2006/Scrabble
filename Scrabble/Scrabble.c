#include<stdio.h>
#include<string.h> // To import library for uh.. for strlen
#include<ctype.h> //For "toupper"

int main()
{
    int points[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    char input1[30];
    printf("Player 1: ");
    scanf("%s", &input1);
    char input2[30];
    printf("Player 2: ");
    scanf("%s", &input2);
    int score1=0;
    int score2=0;
    
    // For player 1
    for(int i=0; i<strlen(input1); i++){
        char ch=toupper(input1[i]); // To convert lowercase letter to upper.. :/
        int ascii=ch-65; // Ascii of that itteration
        score1+=points[ascii];
    }
    
    //For Player 2
    for(int i=0; i<strlen(input2); i++){
        char ch=toupper(input2[i]);
        int ascii=ch-65;
        score2+=points[ascii];
    }
    printf("Player 1 Scored = %d\n", score1);
    printf("Player 2 Scored = %d\n", score2);
    
    if(score1>score2){
    printf("Player 1 won");
    }
    else if(score2>score1){
    printf("Player 2 won");
    }
    else{
    printf("Tie");}
    return 0;
}
