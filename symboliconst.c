# include <stdio.h>
# define LOWER 0
# define UPPER 300
# define STEP 20
int main()
{
  float faren,celsius;
  printf("  CONVERSION OF TEMPERATURE\n");                                                                 
  printf("-----------------------------\n");                                                               
  printf("|   FARENHEIT  |  CELSIUS  |\n");                                                                
  printf("-----------------------------\n");     
  for(faren=LOWER ; faren <=UPPER ; faren = faren + STEP)
  {
    celsius = ( (5.0/9.0) * (faren - 32.0) );                                                             
    printf("\t%3.0f\t| %6.1f  |\n", faren,celsius);     
  }
}
