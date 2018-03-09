#include <stdio.h>
#include <math.h>

int main(void)
{  
    int    line_count,              
    sine_count,          
           no_of_lines,    
           initial_step_size;       
    double current_step_size;  
    
    printf("\nEnter the initial step-size in degrees: ");
    scanf("%d", &initial_step_size);
    printf("\nEnter the number of lines to be displayed in the graph: ");
    scanf("%d", &no_of_lines);
    
    current_step_size = initial_step_size * 3.14 / 180;
    
    for (line_count = 0; line_count < no_of_lines; line_count++)
    {
     for (sine_count = -90; sine_count <= 90; sine_count++)
     {
                    if (sin(current_step_size) == sin(sine_count * 3.14 / 180))
      {
       printf("*");
       break;
      }
      else
       printf(" ");
     }  
    
     current_step_size += initial_step_size * 3.14 / 180;  
    }
   
    return 0;   
}
