// This program converts temperature from Celsius to Fahrenheit using a function

#include <stdio.h>

float to_fahrenheit (float celcius){
    return (9.0 / 5.0 ) * celcius + 32 ; 
}

int main(){
    
    float c;
    printf("Enter the temperature (in *C) : ");
    scanf("%f",&c);
    
     float ans = to_fahrenheit(c);
     printf("Temperature (in *F) : %.1f",ans);

     return 0;
}
