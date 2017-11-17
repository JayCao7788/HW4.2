 #include<stdio.h>
 #include<stdlib.h>

#define size 10

int main(void)
{
	int pass, i, tmp ;
	int flag = 0;
	int a[size] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int b[size] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int c[size] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int counter0=0, counter1=0, counter2=0;

	printf("\norigin)\n\n");
	printf("Data items is origine order\n");
	for (i = 0; i < size; i++) {
		printf("%4d", a[i]);
	}

	for (pass = 1; pass < size; pass++){
		for (i = 0; i < size-1; i++){
			if (a[i]>a[i + 1]){
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
			}
			counter0++;
		}						
	}
	printf("\nData items in ascending order\n");

	for (i = 0; i < size; i++){
		printf("%4d", a[i]);
	}
	printf("\n");


//------------------------------------------------a
	printf("\n\na)\n\n");
	printf("Data items is origine order\n");
	for (i = 0; i < size; i++) {
		printf("%4d", b[i]);
	}

	for (pass = 1; pass < size; pass++){
		for (i = 0; i < size -pass; i++){
			if (b[i]>b[i + 1]){
				tmp = b[i];
				b[i] = b[i + 1];
				b[i + 1] = tmp;
			}
			counter1++;
		}
	}
	printf("\nData items in ascending order\n");

	for (i = 0; i < size; i++){
		printf("%4d", b[i]);
	}
	printf("\n");

//------------------------------------------------b
	printf("\n\nb)\n\n");
	printf("Data items is origine order\n");
	for (i = 0; i < size; i++) {
		printf("%4d", c[i]);
	}
	
	for (pass = 1; pass < size; pass++) {
		flag = 0;
		for (i = 0; i < size - 1; i++) {
			if (c[i] > c[i + 1]) {
				tmp = c[i];
				c[i] = c[i + 1];
				c[i + 1] = tmp;
			}
			else flag++;

			counter2++; 
		}
		if (flag == size - 1) break; 
	}


	printf("\nData items in ascending order\n");

	for (i = 0; i < size; i++){
		printf("%4d", c[i]);
	}
	printf("\n\n");
	

	printf("origin's times : %d \na)'s times : %d \nb)'s times : %d\n\n", counter0, counter1, counter2);

	system("pause");
	return 0;
}
