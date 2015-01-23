#include<stdio.h> 

int func (int a, int b)
{
    printf("\n a = %d\n",a);
    printf("\n b = %d\n",b); 

    return 0;
} 

int func2 (int a, int b)
{
	printf("\n a = %d in func2\n", a);
	printf("\n b = %d in func2\n", b);

	return 0;
}

int main(void)
{
    int(*fptr)(int,int); // Function pointer 

    fptr = func; // Assign address to function pointer 

    func(2,3);
    fptr(2,3); 

	fptr = &func2;
	fptr(4,5);

    return 0;
}
