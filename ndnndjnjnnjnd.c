#include <main.h>

void main()
{

   while(TRUE)
   {
      output_high(pin_b0);
      delay_ms(500);
      
      output_low(pin_b0);
      delay_ms(600);
      
      output_high(pin_b1);
      delay_ms(500);
      
      output_low(pin_b1);
      delay_ms(650);
      
      output_high(pin_b2);
      delay_ms(500);
      
      output_low(pin_b2);
      delay_ms(650);
   }
}
