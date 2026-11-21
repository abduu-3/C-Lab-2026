# include<stdio.h>
int main()
{	
	float a;	
	float b;
	float c;
	float d;
	float e;
	float sum;
	float p;
	printf("HELLO ! \nENTER YOUR MATHS MARK : ");
	scanf("%f",&a);
	printf("ENTER YOUR PHYSICS MARK : ");
	scanf("%f",&b);
	printf("ENTER YOUR CHEMISTRY MARK : ");
	scanf("%f",&c);
	printf("ENTER YOUR ENGLISH MARK : ");
	scanf("%f",&d);
	printf("ENTER YOUR AI MARK : ");
	scanf("%f",&e);
	sum=a+b+c+d+e;
	p=sum/5;
	printf("TOTAL MARK : %f \n",sum);
	printf("PERCENTAGE : %f \n",p);
	return 0;

}
