#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int player(){
    char one = 'C';
    char two = 'h';
    char three = 'a';
    char four = 'r';
    char five = 'l';
    char six = 'i';
    char seven = 'e';
    
    printf("- %c%c%c%c%c%c%c -",one,two,three,four,five,six,seven);
    int const hpfull = 100;
    int hp = hpfull;
    printf("\nHP | %i/%i\n", hp, hpfull);
}

int main(){
    
    int health = 50;
    
    int action;
    int firstenc;
    player();
    
    for(;;){
        int taken;
        if(firstenc == 0){
            printf("- Monster -");
            printf("\nHP | %i/50\n", health);
            printf("\nA monster has appeared, strike it down!\n");
            firstenc = 1;
        }
        else{
            printf("- Monster -");
            printf("\nHP | %i/50\n", taken);
            printf("\nIt menacingly stares back at you...\n");
        }
        printf("1 - Slice | 2 - Punch\nAction: ");
        scanf("%i", &action);
        printf("\n\n");
        if(action==1 || action==2){
            int sec = time(0);
            srand(sec);
            int randm = rand();
            int num = randm % 30;
            printf("%i NÚMERO RANDOMIZADO", num);
            int taken;
            taken = health - num;
            printf("\n%i NÚMERO RANDOMIZADO AGORA", num);
        }
    }
}