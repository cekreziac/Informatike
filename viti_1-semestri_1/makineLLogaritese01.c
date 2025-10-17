/*Shkruani nje program qe merr nga perdoruesi 2 numra dhe nje karakter ( +, -, * , /, %) dhe printon vleren ne baze te karakterit:

Shembull: 

Shkruaj numrin e pare: 34
Shkruaj numrin e dyte: 8
Zgjidh karakterin (+, -, , /, %): +

34 + 8 = 42

ose 

Shkruaj numrin e pare: 2.5
Shkruaj numrin e dyte: 2
Zgjidh karakterin (+, -,, /, %): *

2.5 * 2 = 5.0

Author: Arber Cekrezi
Date: 17 / 10 / 2025
*/

#include <stdio.h>

int	main()
{
	float	numri_1;
	float	numri_2;
	char	operator;

	printf("Shkruani numrin e pare: ");
	scanf("%f", &numri_1);
	printf("Shkruani karakterin e operatorit (+, -, *, /, %%): ");
	scanf(" %c", &operator);
	printf("Shkruani numrin e dyte: ");
	scanf("%f", &numri_2);

	if (operator == '+')
		printf("\n%.2f + %.2f = %.2f\n", numri_1, numri_2, numri_1 + numri_2);
	else if (operator == '-')
		printf("\n%.2f - %.2f = %.2f\n", numri_1, numri_2,numri_1 - numri_2);
	else if (operator == '*')
		printf("\n%.2f * %.2f = %.2f\n", numri_1, numri_2, numri_1 * numri_2);
	else if (operator == '/')
	{
		if (numri_2 == 0)
			printf("Numri i dyte nuk duhet te jete 0.\n");
		else
			printf("\n%.2f / %.2f = %.2f\n", numri_1, numri_2, numri_1 / numri_2);
	}
	else if (operator == '%')
		printf("\n%.2f %% %.2f = %d\n", numri_1, numri_2, (int)numri_1 % (int)numri_2);
	return (0);
}	
