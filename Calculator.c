// This a basic calculator made up of C language
//Made by Dipjyoti

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main () 
{
  
char o;
  
float a, b, s, p, d, e, n = 0;
  
printf
    ("                         WELCOME 2 DE DIPJYOTI CALCULATOR\n\n\n\npress any key to continue ");
  
getch ();
  
system("cls");
  
for (n = 0; n <= 10; n++)
    
    {
      
system("cls");
      
printf ("Enter any two no and use operator either + or - or * or /\n");
      
scanf ("%f%c%f", &a, &o, &b);
      
s = a + b;
      
e = a - b;
      
p = a * b;
      
d = a / b;
      
switch (o)
	
	{
	
case '+':
	  
printf ("%f+%f=%f\n", a, b, s);
	  
break;
	
case '-':
	  
printf ("%f-%f=%f\n", a, b, e);
	  
break;
	
case '*':
	  
printf ("%f*%f=%f\n", a, b, p);
	  
break;
	
case '/':
	  
printf ("%f/%f=%f\n", a, b, d);
	  
break;
	
default:
	  
printf ("Error! Invalide operator\n");
	  
break;
	
}
      
printf ("Press any key to continue\n");
      
getch ();
    
}

}



