/*
 ============================================================================
 Name        : name2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	

    // char name[] = "Kolade";
    // printf("My name is %s\n",name);

	int sayBirthday(){
        printf("September, 2023");
		return 1;
	}

    void sayBirthday2(char name[], char month[]){
        printf("Your Name is %s \t",name);
        printf("Your birthday is %s \n",month);
        // return 1;
    }


    sayBirthday2("Kolade","July");
    sayBirthday2("Richard","September");
    sayBirthday2("Michael","January");
    // sayBirthday2("January");
    // sayBirthday2("January");

    // Char[] greetUser(){
    //     return "Hello user";
    // }
sayBirthday();






    return 0;
}
