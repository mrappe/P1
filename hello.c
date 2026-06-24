#include <stdio.h>
int print_message(void);
int intarray[10];
int (*print_mess)();
char chararr[50] = "This is a literal string that is initalized";
int main(void)

	{

        int i;
	    int number = 5;
	    int *array_element_ptr;
	    puts("enter a number");
	    scanf("%d",&number);

		for (i=number;i<=number +10;i++)
			{
				intarray[i] = i;
				printf("Hello World! %d\n\n",i);
			}
                for (i=number;i<=number +10;i++)
                        {
                                intarray[i] = i;
                                array_element_ptr = &intarray[i];
                                puts("puts here\n");
                                printf("intarray[%d] = %d\t\a",i,intarray[i]);
                                printf("the address of value using the & value of the array element is:\t%lu\n",(unsigned long)&intarray[i]);
                                printf("the address of the value using the pointer variable assigned to the value is:\t%lu\n",(unsigned long)array_element_ptr);
                                if(i < number + 10)
                                {
                                    array_element_ptr++;
                                    printf("the address of the next value using the pointer variable assigned to the value is:\t%lu\n\n\n",(unsigned long)array_element_ptr);
                                }
                                else
                                {
                                    printf("++++++ The last value in the array is done: ++++++++++++\n\n");
                                    *array_element_ptr;
                                    print_mess = print_message;
                                    print_mess();
                                    for (int x = 0;x<=50;x++)
                                    {
                                        printf("%c",chararr[x]);
                                    }
                                    printf("\n\n");

                                }
                        }
		return 0;
	}

	int print_message(void)
        {
 				printf("+++++++++ now in the print function +++++++ \n\n");
 				return 0;
        }
