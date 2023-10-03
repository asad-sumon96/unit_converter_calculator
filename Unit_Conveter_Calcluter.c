#include<stdio.h>

//function declear
void temputure();
void lenth();
void currency();


//Main Function
int main(){

    printf("\n***** WELCOME TO UNIT Conveter Calcluter *****\n\n");
    printf("\nPlease Select The Catagory of Conveter\n");


    char catagory;

    //Currency Converter Variable
   

    printf("Temputure (T) \t Lenth (L) \t Currency (C)\n\n");
    scanf("%c", &catagory);

    switch (catagory)
    {
    case 'T':
        temputure();
        break;

    case 'L':
        lenth();
        break;
    case 'C':
        currency();
        break;

    default:
        printf("Sorry! Wrong Keyword Please Input Correct Letter\n");
        break;
    }



return 0;
}

//Temputure Convert Section
void temputure(){

    float celsius, fahrenheit, reaumur, kelvin;
    int chenge;

    printf("Temputure Converssion Calcluter:\n");
    printf("\n1. Celsius -> Fahrenheit\n");
    printf("2. Fahrenheit -> Celsius\n");
    printf("3. Celsius -> Kelvin\n");
    printf("4. Kelvin -> Celsius\n");
    printf("5. Celsius -> Reaumur\n");
    printf("6. Reaumur -> Celsius\n");
    printf("\nPlease inpute your choice\n\n");
    scanf("%d", &chenge);

    switch (chenge)
    {
    case 1:

        printf("Enter The Temputure in Celsius: \n");
        scanf("%f", &celsius);
        fahrenheit= celsius * 9/5 + 32;
        printf("\n%.2f Celsius = %.2f Fahrenheit\n",celsius,  fahrenheit);

        break;
    
    case 2:

        printf("Enter The Temputure in Fahrenheit: \n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("\n%.2f Fahrenheit = %.2f Celsius\n",fahrenheit,  celsius);

        break;

    case 3:

        printf("Enter The Temputure in Celsius: \n");
        scanf("%f", &celsius);
        kelvin = celsius + 273.15;
        printf("\n%.2f Celsius = %.2f Kelvin \n",celsius,  kelvin);

        break;

    case 4:

        printf("Enter The Temputure in Kelvin:\n");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15;
        printf("\n%.2f Kelvin = %.2f Celsius\n", kelvin ,  celsius);

        break;

    case 5:

        printf("Enter The Temputure in Celsius: \n");
        scanf("%f", &celsius);
        reaumur = celsius * 0.8;
        printf("\n%.2f Celsius = %.2f Reaumur \n",celsius,  reaumur);

        break;

    case 6:

        printf("Enter The Temputure in Celsius: \n");
        scanf("%f", &reaumur);
        celsius = reaumur / 0.8;
        printf("\n%.2f Reaumur = %.2f Celsius \n", reaumur,  celsius);

        break;


    default:
        printf("Sorry! Wrong Keyword Please Input Correct Letter\n");
        break;
    }


}

//Lenth Convert Section
void lenth(){


    //Lenth Converter Variable
    float meter, feet, cm, km, mm;
    int chenge;

    printf("Currency Converssion Calcluter:\n");
    printf("\n1. Meter -> Feet\n");
    printf("2. Feet -> Meter\n");
    printf("3. Kilometer -> Meter\n");
    printf("4. Centimeter -> Meter\n");
    printf("5. Millimeter -> Meter\n");
    printf("\nPlease inpute your choice\n\n");
    scanf("%d", &chenge);

switch (chenge)
{
    case 1:      //Meter to Feet
    
    printf("Enter The Lenth in Meter:\n");
    scanf("%f", &meter);
    feet= meter * 3.2808399;
    printf("\n%.2f Meter = %.2f Feet\n",meter,  feet);
    break;

    case 2:      //Feet to Meter
    
    printf("Enter The Lenth in Feet:\n");
    scanf("%f", &feet);
    meter= feet / 3.2808399;
    printf("\n%.2f Feet = %.2f Meter\n",feet,  meter);
    break;

    case 3:      //Km to Meter
    
    printf("Enter The Lenth in Km:\n");
    scanf("%f", &km);
    meter= km * 1000;
    printf("\n%.2f Km = %.2f Meter\n",km,  meter);
    break;

    case 4:      //Cm to Meter
    
    printf("Enter The Lenth in Centimeter:\n");
    scanf("%f", &cm);
    meter= cm / 100;
    printf("\n%.2f Centimeter = %.2f Meter\n",cm,  meter);
    break;


    case 5:      //Mm to Meter
    
    printf("Enter The Lenth in Millimeter:\n");
    scanf("%f", &mm);
    meter= mm / 1000;
    printf("\n%.2f Millimeter = %.2f Meter\n",mm,  meter);
    break;

default:
    printf("Sorry! Wrong Keyword Please Input Correct Letter\n");
    break;
}
}

//Currency Convert Section
void currency(){


    //Currency Converter Variable
    float fcurency, bdt;
    int chenge;

    printf("Currency Converssion Calcluter:\n");
    printf("\n1. BDT -> Dollar\n");
    printf("2. Dollar -> Taka\n");
    printf("3. BDT -> Euro\n");
    printf("4. Euro -> BDT\n");
    printf("5. BDT -> INR\n");
    printf("6. INR -> BDT\n");
    printf("\nPlease inpute your choice\n\n");
    scanf("%d", &chenge);

    switch (chenge)
    {
        
    case 1:      //BDT to USD
    
    printf("Enter The Amount Of BDT You Want Exchange in USD:\n");
    scanf("%f", &bdt);
    fcurency= bdt / 102;
    printf("\n%.2f BDT = %.2f USD\n",bdt,  fcurency);
    break;

    case 2:      //USD to BDT

    printf("Enter The Amount Of Dollar You Want Exchange in BDT:\n");
    scanf("%f", &fcurency);
    bdt = fcurency * 102;
    printf("\n%.2f Dollar = %.2f Taka\n", fcurency, bdt);
        break;

    case 3:    //BDT to Euro

    printf("Enter The Amount Of BDT You Want Exchange in Euro:\n");
    scanf("%f", &bdt);
    fcurency= bdt / 117;
    printf("\n%.2f BDT = %.2f Euro\n", bdt, fcurency);
    break;

    case 4:     //Euro to BDT

    printf("Enter The Amount Of Euro You Want Exchange in BDT:\n");
    scanf("%f", &fcurency);
    bdt = fcurency * 117;
    printf("\n%.2f Euro = %.2f Taka\n", fcurency, bdt);
    break;

    case 5:    //BDT to INR

    printf("Enter The Amount Of BDT You Want Exchange in Rupe:\n");
    scanf("%f", &bdt);
    fcurency= bdt / 1.31;
    printf("\n%.2f BDT = %.2f Rupe\n", bdt, fcurency);
    break;

    case 6:      //INR to BDT
     
    printf("Enter The Amount Of Rupe You Want Exchange in BDT:\n");
    scanf("%f", &fcurency);
    bdt = fcurency * 1.31;
    printf("\n%.2f Rupe = %.2f Taka\n", fcurency, bdt);
    break;


    default:
        printf("Sorry! Wrong Keyword Please Input Correct Letter\n");
    break;
    }

}