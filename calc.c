#include<stdio.h>
#include<math.h>
void add(int,int);
void sub(int,int);
void mul(float,float);
void div(int,int);
void rem(int,int);
void addmatrix(int arr[50],int);

void mulmatrix(int arr[],int);

int main(){
    int n;
    int num;
    int num2;
    int num3;
    int num4;
    float degree, radian,cm,km,meter,celsius,kelvin,fahrenheit;
           float PI = 3.14159;
     int r,c, i, j,k, matrix[10][10], transpose[10][10], matrix2[10][10],multi[10][10],ndays,week,year,days;
    printf("Press The Number for the Action You Want to perform :\n");
    printf("Press 1 for operations on number.\nPress 2 for operations on matrix.\nPress 3 for operations on trigonometric functions.\nPress 4 for unit conversion.\n");

    scanf("%d",&n);

    switch(n){

        case 1:
        
        printf("Select the operation you want to perform on numbers.\nPress 1 for addition.\nPress 2 for subtraction.\nPress 3 for multiplication\nPress 4 for Quotient.\nPress 5 for remainder.\n");
        scanf("%d",&num);

        switch(num){
            float n1,n2;
            
            case 1: 
            printf("Enter two numbers:\n");
            scanf("%f %f",&n1,&n2);
            add(n1,n2);
            break;

            case 2:
            printf("Enter two numbers:\n");
            scanf("%f %f",&n1,&n2);
            sub(n1,n2);
            break;

            case 3:
            printf("Enter two numbers:\n");
            scanf("%f %f",&n1,&n2);
            mul(n1,n2);
            break;

            case 4:
            printf("Enter the dividend:\n");
            scanf("%f",&n1);
            printf("Enter the divisor:\n");
            scanf("%f",&n2);
            div(n1,n2);
            break;

            case 5:
            printf("Enter the dividend:\n");
            scanf("%d",&n1);
            printf("Enter the divisor:\n");
            scanf("%d",&n2);
            
	          rem(n1,n2);
            
            break;

        }
        break;
        

        case 2: 

        printf("Select the operation you want to perform on a matrix:\nPress 1 to find transpose of a matrix.\nPress 2 for multiplication of matrix.\n");
        scanf("%d",&num2);

        switch(num2){
          
          case 1:
             
             printf("Enter rows and columns :\n");
             scanf("%d%d", &r, &c);
             printf("Enter elements of the matrix\n");
             for (i= 0; i < r; i++)
             for (j = 0; j < c; j++)
             scanf("%d", &matrix[i][j]);
             for (i = 0;i < r;i++)
             for (j = 0; j < c; j++)
             transpose[j][i] = matrix[i][j];
             printf("Transpose of the matrix\n");
              for (i = 0; i< r; i++) {
               for (j = 0; j<c ; j++)
              printf("%d\t", transpose[i][j]);
              printf("\n");
   
              }
              break;

           case 2:
             
  
          printf("enter the number of row=");    
          scanf("%d",&r);    
          printf("enter the number of column=");    
          scanf("%d",&c);    
           printf("enter the first matrix element=\n");    
           for(i=0;i<r;i++)    
          {     
           for(j=0;j<c;j++)    
            {    
          scanf("%d",&matrix[i][j]);    
             }    
           }    
             printf("enter the second matrix element=\n");    
            for(i=0;i<r;i++)    
            {    
            for(j=0;j<c;j++)    
             {    
            scanf("%d",&matrix2[i][j]);    
              }    
            }    
    
           printf("multiply of the matrix=\n");    
           for(i=0;i<r;i++)    
            {    
          for(j=0;j<c;j++)    
          {    
           multi[i][j]=0;    
          for(k=0;k<c;k++)    
           {    
           multi[i][j]+=matrix[i][k]*matrix[k][j];    
            }    
           }    
           }    
              
           for(i=0;i<r;i++)    
             {    
           for(j=0;j<c;j++)    
           {    
           printf("%d\t",multi[i][j]);    
             }    
            printf("\n");    
             }  
             break;   



          }
       break;
         

         
      case 3:
      printf("Select the trigonometric function you wan to perform\n1.degree to sin\n2.Degree to cos\n3.Degree to tan\n4.Degree to cosec\n5.Degree to sec\n6.Degree to cot.\n");
      scanf("%d",&num3);

      

          switch(num3){
          
            case 1:
           
  
             printf("Enter angle in degree\n");  
             scanf("%f",&degree);  
  
              radian = degree * (PI / 180.0);  
  
             printf("Sin(%f) = %f\n", degree, sin(radian)); 
             break; 
   
            case 2:
    
  
             printf("Enter angle in degree\n");  
             scanf("%f",&degree);  
  
             radian = degree * (PI / 180.0);  
             printf("Cos(%f) = %f\n", degree, cos(radian));
              break;


            case 3:
             printf("Enter angle in degree\n");  
             scanf("%f",&degree); 
             radian = degree * (PI / 180.0); 
             printf("Tan(%f) = %f\n", degree, tan(radian));
             break;

             case 4:
             printf("Enter angle in degree\n");  
             scanf("%f",&degree);  
             radian = degree * (PI / 180.0); 

             printf("Cosec(%f) = %f\n", degree, 1/sin(radian));
             break;

             case 5:

             printf("Enter angle in degree\n");  
            scanf("%f",&degree);
            radian = degree * (PI / 180.0); 
            printf("Sec(%f) = %f\n", degree, 1/cos(radian));  
            break;

            case 6:
             printf("Enter angle in degree\n");  
             scanf("%f",&degree);
            radian = degree * (PI / 180.0); 
             printf("Cot(%f) = %f\n", degree, 1/tan(radian));
             break;
  
  
     
      }
      break;

    case 4:

      printf("Select the unit type of unit conversion:\n1.length(from cm to other)\n2.temperature(from celsius to other)\n3.Calender(from days to other)\n");
      scanf("%d",&num4);

      switch(num4){
      
      case 1:
      
       printf("Enter length in centimeter: ");
       scanf("%f", &cm);
       meter = cm / 100.0;
       km    = cm / 100000.0;

       printf("Length in Meter = %.2f m \n", meter);
       printf("Length in Kilometer = %.2f km", km);
       break;

       case 2:

       printf("Enter temperature in Celsius: ");
       scanf("%f", &celsius);

       fahrenheit = (celsius * 9 / 5) + 32;
       kelvin= 273.15 + celsius;

      printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
      printf("%.2f Celsius =%.2f Kelvin",celsius,kelvin);
      break;

      case 3:
      

      printf("Enter the number of days\n");
    scanf("%d", &ndays);
    year = ndays / 365;
    week =(ndays % 365) / 7;
    days =(ndays % 365) % 7;
    printf ("%d is equivalent to %d years, %d weeks and %d days",ndays, year, week, days);
      break;

       }

            
    }
    
  


return 0;
    }


void add(int a, int b){
	float sum;
sum = a+b;
  printf("The sum is %.2f",sum);
}


void sub(int a, int b){
	float subt;
	subt= a-b;
	printf("The subtraction of two numbers is %0.2f",subt);
}




void mul(float a,float b){
	float mul;
	mul = a*b;
	printf("The multiplication is %0.8f",mul);
}

void div(int a, int b){
	float div;
	div = a/b;
	printf("The Qotient is %.2f",div);
}

void rem(int a, int b){
	int rem;
	rem= a % b;
	printf("The remainder of the division is %d",rem);
}
 

