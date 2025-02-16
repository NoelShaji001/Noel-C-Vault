#include<stdio.h>
int main() {
    float C,F,temp;
    char userInput;
    printf("Celcius or Fahrenheit.Which one would \nyou like to convert the temperature to: ");
    printf("\n\nNote: 'F' for Fahrenheit and 'C' for Celsius.Please input the correct terms.");
    scanf(" %c",&userInput);
    printf("Enter the temperature: ");
    scanf("%f",&temp);
    if(toupper(userInput)=='C'){
        C=(((temp-32.00)*5.00)/9.00);
        printf("\nTemperature in Celcius is :%.4f⁰C",C);
    }
    else if(toupper(userInput)=='F'){
        F=((9.00*temp)/5.00)+32.00;
        printf("\nThe temperature in Fahrenheit is %.4fF",F);
    }else{
        printf("\nInvalid Entry");    
    }
    return 0;
}    
        