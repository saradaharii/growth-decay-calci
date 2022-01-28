#include<stdio.h>
#include<math.h>
int main()
{
	printf("\t\t*************************************************************************************\n\n");
	printf("\t\t\t\t\tNATURAL DECAY AND GROWTH CALCULATOR\a\n\n");
	printf("\t\t*************************************************************************************\n\n");
	menu();
}
menu()
{
	int a;
	printf("\n\n1. To calculate the amount of substance present at time T.\n");
	printf("2. To calculate the time when the amount of substance is given.\n");
	printf("3. To calculate the initial amount of substance present.\n");
	printf("\nEnter your choice:  ");
	scanf("%d",&a);
	switch(a)
	{
		case 1: remaining_sub();
		break;
		case 2: time();
		break;
		case 3: initial();
		break;
		default: printf("\n ERROR!!\nCHOOSE A CORRECT OPTION.");
	}
}
remaining_sub()
{
int b;
double x0,t1,x1,t2,c,k,x2;

	 	printf("\n\nEnter the initial amount of the substance:\n");
	 	scanf("%lf",&x0);
	 	printf("Enter the amount of substance remaining after time t1:\n");
	 	scanf("%lf",&x1);
	 	printf("Enter the value of t1:\n");
	 	scanf("%lf",&t1);
	 	printf("Enter the value of t2:\n");
	 	scanf("%lf",&t2);
	 	if(x1>x0)
	 	{
		c=x0;
		k=(log(x1/x0)/t1);
		x2=(c*(exp(k*t2)));
	    }
	    else
	    {
		c=x0;
		k=-(log(x1)-log(x0))/t1;
		x2=(c*(exp(-(k*t2))));
	}  printf("***************************************************");
		printf("\nAMOUNT OF SUBSTANCE PRESENT AFTER TIME %.2lf = %.1lf\n",t2,x2);
		printf("**************************************************");
		printf("\n\nENTER 1 TO DISPLAY MAIN MENU, ELSE ENTER 0:   ");
		scanf("%d",&b);
		if(b==1)
	    menu();
}
time()
{
int b;
double x0,t1,x1,t2,c,k,x2;
	 	printf("\n\nEnter the initial amount of the substance:\n");
	 	scanf("%lf",&x0);
	 	printf("Enter the amount of substance remaining after time t1:\n");
	 	scanf("%lf",&x1);
	 	printf("Enter the value of t1:\n");
	 	scanf("%lf",&t1);
	 	printf("Enter the amount of subtance present after time t2:\n");
	 	scanf("%lf",&x2);
	 	if(x0<x1)
	 	{
		c=x0;
		k=(log(x1/x0)/t1);
		t2=(log(x2/c)/k);
      	}
	 	else{
		c=x0;
		k=-(log(x1/x0)/t1);
		t2=-(log(x2/c)/k);
		}
		printf("***************************************************");
		printf("\n\nTIME AFTER WHICH THE %.2lf substance in present =%.2lf\n\n",x2,t2);
		printf("***************************************************\n\n");  
		printf("\n\nENTER 1 TO DISPLAY MAIN MENU, ELSE ENTER 0:     ");
		scanf("%d",&b);
		if(b==1)
        menu();
}
initial()
{
	int b;
	double x1,x2,t1,t2,x0,a;
		printf("Enter the amount of substance remaining after time t1:\n");
	 	scanf("%lf",&x1);
	 	printf("Enter the value of t1:\n");
	 	scanf("%lf",&t1);
	 	printf("Enter the amount of subtance after time t2:\n");
	 	scanf("%lf",&x2);
	 	printf("Enter the value of t2:\n");
	    scanf("%lf",&t2);
        a=((t1*log(x2))-(t2*log(x1)))/(t1-t2);
	    x0=exp(a);
		printf("***************************************************");
		printf("\nINITIAL AMOUNT OF SUBSTANCE PRESENT=%.2lf\n\n",x0);
		printf("***************************************************\n");  
		printf("\n\nENTER 1 TO DISPLAY MAIN MENU, ELSE ENTER 0:     ");
		scanf("%d",&b);
		if(b==1)
        menu();
}
