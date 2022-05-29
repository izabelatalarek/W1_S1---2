#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

	int number = 0;
	unsigned int radius = 0;
	const double PI = 3.1415926;
	double circlePerimeter =0, circleField =0;
	unsigned int a, b, c, d, height;
	unsigned int triangleField = 0;
	unsigned int pT = 0;
	int x1, x2, x3, x4, y1, y2, y3, y4;


	while (number != 6)
	{

		printf(" 1.Circle\n 2.Rectangle\n 3.Triangle\n 4.Trapeze\n 5.Cartesian coordinate system\n 6. Exit\n ");

		printf("Type number to choose a figure, cartesian coordinate system o 6 to exit: ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1:

			printf("Set radius lenght: ");
			scanf_s("%d", &radius);

			printf(" The perimeter of circle is:  %lf\n", 2 * PI * radius);
			printf("The field of this circle is: %lf\n", PI * radius * radius);

			break;

		case 2: printf("Set a side length: \n");
			scanf_s("%d", &a);

			printf("Set b side length: \n");
			scanf_s("%d", &b);

			printf(" The perimeter of this rectangle is: %d", 2 * a + 2 * b);
			printf(" The field of this rectangle is: %d", a * b);

			break;

		case 3: printf("Set a side length: \n");
			scanf_s("%d", &a);

			printf("Set b side length: \n");
			scanf_s("%d", &b);

			printf("Set c side length: \n");
			scanf_s("%d", &c);

			printf(" The perimeter of this triangle is: %d\n", a + b + c);

			pT = (a + b + c) / 2;

			triangleField = sqrt(pT * (pT - a) * (pT - b) * (pT - c));

			printf(" The field of this rectangle is: %d\n", triangleField);

			break;


		case 4: printf("Set a side length: \n");
			scanf_s("%d", &a);

			printf("Set b side length: \n");
			scanf_s("%d", &b);

			printf("Set c side length: \n");
			scanf_s("%d", &c);

			printf("Set d side length: \n");
			scanf_s("%d", &d);

			printf(" The perimeter of this trapeze is: %d\n", a + b + c + d);
			printf("To calculate field of this trapeze, set its height:  ");
			scanf_s("%d", &height);

			printf("The field of this trapeze is: %d", (((a + b) * height) / 2));


			break;

		case 5: printf(" Choose the number of figure: \n 1.Circle\n 2.Rectangle\n 3.Triangle\n 4.Trapeze\n");

			scanf_s("%d", &number);

			if (number == 1)
			{
				printf("x1: ");
				scanf_s("%d", &x1);
				printf("y1: ");
				scanf_s("%d", &y1);
				printf("x2: ");
				scanf_s("%d", &x2);
				printf("y2: ");
				scanf_s("%d", &y2);


				radius = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), .5);

				printf(" The perimeter of circle is:  %lf\n", 2 * PI * radius);
				printf("The field of this circle is: %lf\n", PI * (pow(radius, 2)));
			}

			if (number == 2)
			{
				printf("x1: ");
				scanf_s("%d", &x1);
				printf("y1: ");
				scanf_s("%d", &y1);
				printf("x2: ");
				scanf_s("%d", &x2);
				printf("y2: ");
				scanf_s("%d", &y2);
				printf("x3: ");
				scanf_s("%d", &x3);
				printf("y3: ");
				scanf_s("%d", &y3);
				printf("x4: ");
				scanf_s("%d", &x4);
				printf("y4: ");
				scanf_s("%d", &y4);

				a = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), .5);
				b = pow(pow((x3 - x2), 2) + pow((y3 - y1), 2), .5);

				printf(" The perimeter of this rectangle is: %d", 2 * a + 2 * b);
				printf(" The field of this rectangle is: %d", a * b);
			}

				if (number == 3)
				{
					printf("x1: ");
					scanf_s("%d", &x1);
					printf("y1: ");
					scanf_s("%d", &y1);
					printf("x2: ");
					scanf_s("%d", &x2);
					printf("y2: ");
					scanf_s("%d", &y2);
					printf("x3: ");
					scanf_s("%d", &x3);
					printf("y3: ");
					scanf_s("%d", &y3);


					a = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 0.5);
					b = pow(pow((x3 - x2), 2) + pow((y3 - y2), 2), 0.5);
					c = pow(pow((x3 - x1), 2) + pow((y3 - y1), 2), 0.5);


					triangleField = 0.25 * pow(pow(pow(a, 2) + pow(b, 2) + pow(c, 2), 2) - 2 * (pow(a, 4) + pow(b, 4) + pow(c, 4)), 0.5); //calculating field by using heron formula

					printf(" The perimeter of this triangle is: %d\n", a + b + c);
					printf(" The field of this rectangle is: %d\n", triangleField);
				}

				if (number == 4)
				{
					printf("x1: ");
					scanf_s("%d", &x1);
					printf("y1: ");
					scanf_s("%d", &y1);
					printf("x2: ");
					scanf_s("%d", &x2);
					printf("y2: ");
					scanf_s("%d", &y2);
					printf("x3: ");
					scanf_s("%d", &x3);
					printf("y3: ");
					scanf_s("%d", &y3);
					printf("x4: ");
					scanf_s("%d", &x4);
					printf("y4: ");
					scanf_s("%d", &y4);

					a = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), .5);
					b = pow(pow((x3 - x2), 2) + pow((y3 - y2), 2), .5);
					c = pow(pow((x4 - x3), 2) + pow((y4 - y3), 2), 0.5);
					d = pow(pow((x4 - x1), 2) + pow((y4 - y1), 2), .5);

					printf(" The perimeter of this trapeze is: %d\n", a + b + c + d);
					printf("To calculate field of this trapeze, set its height:  ");
					scanf_s("%d", &height);

					printf("The field of this trapeze is: %d", (((a + b) * height) / 2));
				}

		case 6: exit(0);

		default: printf("Choose a proper number\n");
		}

		
	}
	return 0;
}