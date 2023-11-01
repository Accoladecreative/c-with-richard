#include <stdio.h>





int main(){


    const char* greet(){
        return "You are welcome";
    }
    printf(greet());


    

    void calculateAge(int year){
        int age = 2023 - year;
        printf("Your age is %d",age);
    }

    

    void welcome user(int year){
        int age = 2023 - year;
        printf("Your age is %d",age);
    }

    calculateAge(1997);




    return 1;
}