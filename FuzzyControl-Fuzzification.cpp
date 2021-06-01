#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Since the last digit of my school number is even (4), i used triangular membership function formula.
	//Variable declaration
	float e, ec; //e is the Error input, ec is the Eror change input.
	float ude1, ude2, ude3, ude4; // ude variables are the Membership values of Errors for each Rule (Rule1, Rule2, Rule3, Rule4).
	float udec1, udec2, udec3, udec4; //udec variables are the Membership values of Eror Changes for each Rule.
	float min1, min2, min3, min4; // Intersection of sets
	float I; // Control Input
	int r1_midpoint = -2; //Assigning Midpoints of the Control Input Graphs for each Rule.
	int r2_midpoint = 0;
	int r3_midpoint = 2;
	int r4_midpoint = 4; 
	
	// Getting the error and error change input:
	printf("Hatayi giriniz: \n");
	scanf("%f", &e);
	printf("Hata degisimini giriniz: \n");
	scanf("%f", &ec);


    // Setting limits for Rule1
    
	if (e>=-2 && e<=2 && ec>=0 && ec<=4) 	
	{
	    if(e<=0) // ude calculations for Rule1
		{
			ude1 = ((e+2)/2);
			printf("Rule1: \n ");
			printf("Membership Value For Error: %f \n ", ude1);
		}
		else
		{
			ude1 = (e-2)/(-2);
			printf("Rule1: \n ");
			printf("Membership Value For Error: %f \n ", ude1);
		}
		if ( ec<=2 ) //udec calculation for Rule1
		{
			udec1 = (ec/2);
			printf("Membership Value For Error Change: %f \n ", udec1);
		}
		else
		{
			udec1 = (ec-4)/(-2);
			printf("Membership Value For Error Change: %f \n ", udec1);
		}
		if (ude1>udec1) // Intersection of sets
		{
			min1 = udec1;
			printf("Intersection: %f \n Midpoint: %d \n", min1, r1_midpoint);
		}
		else
		{
			min1 = ude1;
			printf("Intersection: %f \n Midpoint: %d \n", min1, r1_midpoint);

		}
	}
	else
	{
		printf("Value can not be applied to Rule1. \n ");
	}
	
	
	// Setting limits for Rule2
	
	if(e>=-2 && e<=2 && ec>=-2 && ec<=2) 
	{
		if(e<=0) // ude calculations for Rule2
		{
			ude2 = ((e+2)/2);
			printf("Rule2: \n ");
			printf("Membership Value For Error: %f \n ", ude2);
		}
		else
		{
			ude2 = (e-2)/(-2);
			printf("Rule2: \n ");
			printf("Membership Value For Error: %f \n ", ude2);
		}
		if(ec<=0) //udec calculation for Rule2
		{
			udec2 = ((ec+2)/2);
			printf("Membership Value For Error Change: %f \n ", udec2);
		}
		else
		{
			udec2 = (ec-2)/(-2);
			printf("Membership Value For Error Change: %f \n ", udec2);
		}
		if(ude2>udec2) //Intersection of sets
		{
		    min2 = udec2;
			printf("Intersection: %f \n Midpoint: %d \n", min2, r2_midpoint);
		}
		else
		{
			min2 = ude2;
			printf("Intersection: %f \n Midpoint: %d \n", min2, r2_midpoint);
		}
	}
	else
	{
		printf("Value can not be applied to Rule2. \n ");
	}
	
	
    // Setting limits for Rule3

    if(e>=-4 && e<=0 && ec>=-4 && ec<=0)
	{
		if(e<=-2) //ude calculations for Rule3
		{
			ude3 = ((e+4)/2);
			printf("Rule3: \n ");
			printf("Membership Value For Error: %f \n ", ude3);
		}
		else
		{
			ude3 = (e)/(-2);
			printf("Rule3: \n ");
			printf("Membership Value For Error: %f \n ", ude3);
		}
		if(ec<=0) //udec calculations for Rule3
		{
			udec3 = ((ec+4)/2);
			printf("Membership Value For Error Change: %f \n ", udec3);
		}
		else
		{
			udec3 = (ec)/(-2);
			printf("Membership Value For Error Change: %f \n ", udec3);
		}
		if(ude3>udec3) //Intersection of sets
		{
		    min3 = udec3;
			printf("Intersection: %f \n Midpoint: %d \n", min3, r3_midpoint);
		}
		else
		{
			min3 = ude3;
			printf("Intersection: %f \n Midpoint: %d \n", min3, r3_midpoint);
		}
	}
	else
	{
		printf("Value can not be applied to Rule3. \n ");
	}


    // Setting limits for Rule4

    if(e>=-4 && e<=0 && ec>=-2 && ec<=2)
	{
		if(e<=-2) //ude calculations for Rule4
		{
			ude4 = ((e+4)/2);
			printf("Rule4: \n ");
			printf("Membership Value For Error: %f \n ", ude4);
		}
		else
		{
			ude4 = (e)/(-2);
			printf("Rule4: \n ");
			printf("Membership Value For Error: %f \n ", ude4);
		}
		if(ec<=0) //udec calculations for Rule4
		{
			udec4 = ((ec+2)/2);
			printf("Membership Value For Error Change: %f \n ", udec2);
		}
		else
		{
			udec4 = (ec-2)/(-2);
			printf("Membership Value For Error Change: %f \n ", udec4);
		}
		if(ude4>udec4) //Intersection of sets
		{
			min4 = udec4;
		    printf("Intersection: %f \n Midpoint: %d \n", min4, r4_midpoint);
		}
		else
		{
			min4 = ude4;
			printf("Intersection: %f \n Midpoint: %d \n", min4, r4_midpoint);
		}
	}
	else
	{
		printf("Value can not be applied to Rule4. \n ");
	}	
	
	I = ((min1)*(r1_midpoint)+(min2)*(r2_midpoint)+(min3)*(r3_midpoint)+(min4)*(r4_midpoint))/(min1+min2+min3+min4); // Control input calculation
	printf("Control Input Value: %f", I);
}	

