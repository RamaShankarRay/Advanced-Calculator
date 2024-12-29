//Ramashankar Ray-12-30-2024
#include<stdio.h>
#include<math.h>
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
float division(int a,int b);
void matrixAdd(int matrix1[2][2], int matrix2[2][2], int result[2][2]);
void matrixSubtract(int matrix1[2][2],int matrix2[2][2],int result[2][2]);
void matrixMultiply(int matrix1[2][2],int matrix2[2][2],int result[2][2]);
void matrixDivision(int matrix1[2][2], int matrix2[2][2],int result[2][2]);
int power(int base,int pow);
float root(int base, int value);
void printPrime(int range1, int range2);
void printComposite(int range1,int range2);
void printOdd(int range1, int range2);
void printEven(int range1,int range2);
void findOddEven(int num);
void findPrimeComposite(int num);
void numberToWord();
int reverse(int num);
int factorial(int num);
void tablePrinter(int num);
int result[2][2];
int main(){
    int a,b,base,pow,value,range1,range2,num;
    int matrix1[2][2];
    int matrix2[2][2];
    int option;
    printf("\n\n\n........................................................................ADVANCED CALCULATOR................................................................\n\n\n");
    printf("\n1. Simple Addition ");
    printf("\t2. Simple Subtraction ");
    printf("\t3. Simple Multiplication ");
    printf("\t4. Simple Division ");
    printf("\t5. Matrix Addition ");
    printf("\t6. Matrix Subtraction ");
    printf("\n7. Matrix Multiply ");
    printf("\t8. Matrix Division ");
    printf("\n9. Power Operation ");
    printf("\t10. Root Finder ");
    printf("\t11. Prime NumPrinter         ");
    printf("\t12. Composite Printer ");
    printf("\t13. Odd Printer ");
    printf("\t14. Even Printer\t\t\t ");
    printf("\t15. OddEven Finder ");
    printf("\t16. PrimeCom Finder ");
    printf("\t17. NumberToWord Converter ");
    printf("\t18. Reverse Printer ");
    printf("\t19. Factorial Finder ");
    printf("\t20. Table Printer ");

printf(".\n...............................................................................................................................................................\n\n\n");
printf("Please Choose a Option (1-20): ");
scanf("%d",&option);

switch(option){
case 1:
         printf("\n\tEnter first Number: ");
         scanf("%d",&a);
         printf("\tEnter Second Number:" );
         scanf("%d",&b);
         printf("\n\t%d + %d = %d",a,b,add(a,b));
         break;

case 2: printf("\n\tEnter first Number: ");
        scanf("%d",&a);
        printf("\tEnter Second Number: ");
        scanf("%d",&b);
        printf("\n\t%d - %d = %d",a,b,subtract(a,b));
        break;

case 3: printf("\n\tEnter fist Number: ");
        scanf("%d",&a);
        printf("\tEnter Second Number: ");
        scanf("%d",&b);
        printf("\n\t%d * %d = %d",a,b,multiply(a,b));
        break;

case 4: printf("\n\tEnter first Number: ");
        scanf("%d",&a);
        printf("\tEnter Second Number: ");
        scanf("%d",&b);
        printf("\n\t%d / %d = %f",a,b,division(a,b));
        break;

case 5: printf("\n\t \"Please Enter Data For Matrix in Row Order.\"\n\n ");
        printf("\t\nEnter Data For First Matrix: ");
        for(int i=0;i<2;i++){
            printf("\n\t Enter Data For row%d: \n",i+1);
            for(int j=0;j<2;j++){
                printf("\t Enter Data For Position %d,%d: : ",i,j);
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("\t\nEnter Data For Second Matrix: ");
        for(int i=0;i<2;i++){
            printf("\n\t Enter Data For row%d : \n",i+1);
            for(int j=0;j<2;j++){
           printf("\t Enter Data For Position %d,%d: : ",i,j);
                scanf("%d",&matrix2[i][j]);
            }
        }
        matrixAdd(matrix1,matrix2,result);
        printf("\n\tResult is Here (Addition): \n");
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("\t%d",result[i][j]);
            }
            printf("\n");
        }
        break;

case 6: printf("\n\t \"Please Enter Data For Matrix in Row Order.\"\n\n ");
        printf("\t\nEnter Data For First Matrix: ");
        for(int i=0;i<2;i++){
            printf("\n\t Enter Data For row%d: \n",i+1);
            for(int j=0;j<2;j++){
                printf("\t Enter Data For Position %d,%d: : ",i,j);
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("\t\nEnter Data For Second Matrix: ");
        for(int i=0;i<2;i++){
            printf("\n\t Enter Data For row%d : \n",i+1);
            for(int j=0;j<2;j++){
           printf("\t Enter Data For Position %d,%d: : ",i,j);
                scanf("%d",&matrix2[i][j]);
            }
        }
        matrixSubtract(matrix1,matrix2,result);
        printf("\n\tResult is Here (Subtraction): \n");
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("\t%d",result[i][j]);
            }
            printf("\n");
        }
        break;

case 7: printf("\n\t \"Please Enter Data For Matrix in Row Order.\"\n\n ");
        printf("\t\nEnter Data For First Matrix: ");
        for(int i=0;i<2;i++){
            printf("\n\t Enter Data For row%d: \n",i+1);
            for(int j=0;j<2;j++){
                printf("\t Enter Data For Position %d,%d: : ",i,j);
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("\t\nEnter Data For Second Matrix: ");
        for(int i=0;i<2;i++){
            printf("\n\t Enter Data For row%d : \n",i+1);
            for(int j=0;j<2;j++){
           printf("\t Enter Data For Position %d,%d: : ",i,j);
                scanf("%d",&matrix2[i][j]);
            }
        }
        matrixMultiply(matrix1,matrix2,result);
        printf("\n\tResult is Here (Subtraction): \n");
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("\t%d",result[i][j]);
            }
            printf("\n");
        }
        break;

case 8:  printf("\n\t \"Please Enter Data For Matrix in Row Order.\"\n\n ");
        printf("\t\nEnter Data For First Matrix: ");
        for(int i=0;i<2;i++){
            printf("\n\t Enter Data For row%d: \n",i+1);
            for(int j=0;j<2;j++){
                printf("\t Enter Data For Position %d,%d: : ",i,j);
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("\t\nEnter Data For Second Matrix: ");
        for(int i=0;i<2;i++){
            printf("\n\t Enter Data For row%d : \n",i+1);
            for(int j=0;j<2;j++){
           printf("\t Enter Data For Position %d,%d: : ",i,j);
                scanf("%d",&matrix2[i][j]);
            }
        }
        matrixDivision(matrix1,matrix2,result);
        printf("\n\tResult is Here (Subtraction): \n");
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("\t%d",result[i][j]);
            }
            printf("\n");
        }
        break;

case 9: printf("\n\tEnter Base: ");
        scanf("%d",&base);
        printf("\t\nEnter Power: ");
        scanf("%d",&pow);
        printf("\n\t %d^%d = %d",base,pow,power(base,pow));
        break;

case 10: printf("\n\tEnter Base: ");
         scanf("%d",&base);
         printf("\n\tEnter Root Value: ");
         scanf("%d",&value);
         printf("\n\t%drooT(%d) = %f",value,base,root(base,value));
         break;

case 11: printf("\n\tEnter Initial Range: ");
          scanf("%d",&range1);
          printf("\n\tEnter Final Range: ");
          scanf("%d",&range2);
          printPrime(range1,range2);
          break;

case 12: printf("\n\tEnter Initial Range: ");
          scanf("%d",&range1);
          printf("\n\tEnter Final Range: ");
          scanf("%d",&range2);
          printComposite(range1,range2);
          break;

case 13: printf("\n\tEnter Initial Range: ");
          scanf("%d",&range1);
          printf("\n\tEnter Final Range: ");
          scanf("%d",&range2);
          printOdd(range1,range2);
          break;

case 14: printf("\n\tEnter Initial Range: ");
          scanf("%d",&range1);
          printf("\n\tEnter Final Range: ");
          scanf("%d",&range2);
          printEven(range1,range2);
          break;

case 15: printf("\n\tEnter a Number: ");
         scanf("%d",&num);
         findOddEven(num);
         break;

case 16: printf("\n\tEnter a Number: ");
         scanf("%d",&num);
         findPrimeComposite(num);
         break;

 case 17: numberToWord();
         break;

case 18: printf("\n\tEnter a Number: ");
         scanf("%d",&num);
         printf("\n\tThe Reverse Of %d is: %d",num,reverse(num));
         break;

case 19: printf("\n\tEnter a Number: ");
         scanf("%d",&num);
         printf("\n\tFactorial Of %d is: %d",num,factorial(num));
         break;

case 20: printf("\n\tEnter a Number: ");
         scanf("%d",&num);
         tablePrinter(num);
         break;

default: printf("\n\t\aError Data Entry ... Try Again..");
}
printf("\n\n\n");
    return 0;   
}

int add(int a,int b){ // addition function
    return a+b;
}

int subtract(int a,int b){ //subtraction function
    return a-b;
}

int multiply(int a,int b){ //multiplication function
    return a*b;
}

float division(int a,int b){  //division function
    return a/b;
}

void matrixAdd(int matrix1[2][2],int matrix2[2][2], int result[2][2]){ // Matrix Addition Function
    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                result[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
}

void matrixSubtract(int matrix1[2][2],int matrix2[2][2],int result[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
}

void matrixMultiply(int matrix1[2][2],int matrix2[2][2],int result[2][2]){ // Matrix Multiplication Function
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;  // Initialize result matrix element to 0
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j]; 
            }
        }
    }
}

void matrixDivision(int matrix1[2][2], int matrix2[2][2],int result[2][2]){
    //I have to define this function.
}

int power(int base,int pow){ //Power Function
    for(int i=1;i<pow;i++){
        base*=base;
    }
    return base;
}

float root(int base,int value){ //Root Function
float x = base;
    int iterations = 1000;
    float precision = 0.00001;
    
    for (int i = 0; i < iterations; i++) {
        float newX = x - ((pow(x, value) - base) / (value * pow(x, value - 1)));
        
        if (fabs(newX - x) < precision) {
            break;
        }
        
        x = newX;
    }
    
    return x;
}


void printPrime(int range1, int range2){ // Prime Number Printing in a range Function
int count=0;
printf("\n\tHere is The List of Prime Number from %d to %d : \n\t",range1,range2);
for(int i=range1;i<=range2;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            count++;
        }
    }
    if(count==0){
        printf("%d ",i);
    }
    count=0;
}
}

void printComposite(int range1,int range2){ // Composite Number Printer in a Range Function
   int count=0;
   printf("\n\tHere is The List of Composite Number from %d to %d : \n\t",range1,range2);
   for(int i=range1;i<=range2;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            printf("%d ",i);
        }
        count=0;
    }
   }
}

void printOdd(int range1, int range2){// Odd Number in range Printing Function
   printf("\n\tHere is The List of Odd Number from %d to %d : \n\t",range1,range2);
  for(int i=range1;i<=range2;i++){
    if(i%2!=0){
        printf("%d ",i);
    }
  }
}

void printEven(int range1,int range2){// Even Number in range Printing Function
  printf("\n\tHere is The List of Even Number from %d to %d : \n\t",range1,range2);
  for(int i=range1;i<=range2;i++){
    if(i%2==0){
        printf("%d ",i);
    }
  }
}
void findOddEven(int num){ // Odd-Even Finder Function
  if(num%2==0){
    printf("\n\t\"%d is an Even Number.\"",num);
  }else{
        printf("\n\t\"%d is an Odd Number.\"",num);

  }
}

void findPrimeComposite(int num){ //prime & Composite finder Function
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==0){
        printf("\n\t\"%d is a Prime Number.\"",num);
    }else{     
         printf("\n\t\"%d is a Composite Number.\"",num);
    }
}

int reverse(int num){
    //number digit reversing function.
    int a=num; int remainder=0;
    while(a!=0){
        remainder=remainder*10+(a%10);
        a=(int)a/10;
    }
    return remainder;
}

int factorial(int num){
    //factorial printer function
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}

void tablePrinter(int num){
    //table printer function
    printf("\n\tTable Of %d : \n",num);
    for(int i=1;i<=10;i++){
        printf("\n\t%d * %d = %d ",num,i,num*i);
    }
    printf("\n..............................................\n\n");
}

void numberToWord(){
int num;
    printf("\n\tEnter a number (0 - 99999): ");
    scanf("%d", &num);

    char *digit[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *multiple[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char *teen[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    printf("\n\t");
    if (num < 0 || num > 99999) {
        printf("\n\tEntered Invalid Data!\n");
        return;
    }

    if (num == 0) {
        printf("\n\tZero\n");
        return;
    }

    // Handle thousands
    if (num >= 1000) {
        int thousands = num / 1000;
        num = num % 1000;
        printf("%s Thousand ", digit[thousands]);
    }

    // Handle hundreds
    if (num >= 100) {
        int hundreds = num / 100;
        num = num % 100;
        printf("%s Hundred ", digit[hundreds]);
    }

    // Handle numbers from 10 to 19
    if (num >= 10 && num <= 19) {
        printf("%s\n", teen[num - 10]);
        return;
    }

    // Handle tens (20 - 99)
    if (num >= 20) {
        int tens = num / 10;
        num = num % 10;
        printf("%s", multiple[tens]);
        if (num != 0) {
            printf("-%s\n", digit[num]);
        } else {
            printf("\n");
        }
        return;
    }

    // Handle single digits (0-9)
    if (num >= 0 && num <= 9) {
        printf("%s\n", digit[num]);
        return;
    }
}
