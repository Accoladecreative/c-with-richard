#include <stdio.h>





int main(){


    const char* greet(){
        
        char name[] = "hello";
        strcat(name," World");
        // return "You are welcome";
        return name;
        
    }
    printf(greet());


    

    void calculateAge(int year){
        int age = 2023 - year;
        printf("Your age is %d\n\n",age);
    }

    


    

    void welcomeuser(char username[]){
        printf("You are welcome, Mr %s\n",username);
    }

    calculateAge(1997);


    welcomeuser("Kolade");
    welcomeuser("RIchard");
    welcomeuser("Michael");
    welcomeuser("Adepoju");




    return 1;
}