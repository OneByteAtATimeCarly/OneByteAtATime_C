//Parsing a string for integer errors without isdigit() and cctype - 2004 C. S. Germany

//---------------------------------------------------------------------------------------------------------------------------

#include <iostream>

//---------------------------------------------------------------------------------------------------------------------------

void main(void)
{
   //Take three numbers as a multi-dimensional array of strings
   char FavNumber[3][10];
   int Num[3] = {0, 0, 0};  //initialize to NULL
   int x = 0;
   int count;
 
   printf("Enter your three favorite numbers: \n\n");
for(count = 0; count<3; count++)
{
   
   //scanf("%d%d%d", &a, &b, &c);
   printf("Enter favorite number %d: ", count+1); //add 1 for fence post
   scanf("%s", FavNumber[count]);
   //Need to convert the ASCII value character array to integer values
    x = 0; //reset x to 0 for each loop
    while(  (FavNumber[count][x] - 48) < 10 && (FavNumber[count][x] -
48) > 0  )       
{
    Num[count] = 10 * Num[count] + (FavNumber[count][x]
- 48);
        x++;
}
 
    if(!(FavNumber[count][x] - 48) < 10 && (FavNumber[count][x] - 48) >
0)
{   //offset for fencepost - x was incremented 1 past
    printf("\n\nHey, not fair! That was not a plain old number!\n\n");
        printf("I will set this garbledygunk number to 0 (NULL)!\n\n");
        Num[count] = 0;
}
} //close the for loop   
 
   
for(count = 0; count<3; count++)
{
   printf("\nFavorite number %d as a string values is: %s .",
(count+1),FavNumber[count]);
   printf("\nFavorite number %d as an integer value is: %d \n",
(count+1), Num[count]);
} //close for loop
} //close main()

//---------------------------------------------------------------------------------------------------------------------------

