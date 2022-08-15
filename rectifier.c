#include<stdio.h>
#include <math.h>
int main()

{

float vrms,vpk1,vpk2,frq,imp,cap1,cap2,vrip,res1;
int a;
printf("enter the number of diodes");
scanf("%d",&a);
printf("enter the RMS voltage");
scanf("%f",&vrms);
if(a==2)

{

printf("enter frequency is=");
scanf("%f",&frq);
printf("enter capacitance(in 10^-6)=");
scanf("%f",&cap1);
printf("enter resistance of the shunt used");
scanf("%f",&res1);
cap2=cap1*0.000001;
vpk1=vrms*1.414-0.7;
imp=1/(2*3.14*frq*cap2);
vrip=imp/(sqrt((imp*imp)+(res1*res1)));
printf("it's a single phase rectifier\n");
printf("the peak voltage in forward bias case is=%f \n",vpk1);
printf("the ripple voltage is=%f \n",vrip);

}

else if(a==4)

{

vpk2=vrms*1.414-0.7 ;   
printf("It is a bridge wave rectifier\n");
printf("the peak voltage is=%f",vpk2);

}

else

{

printf("ERROR");

}

}



































