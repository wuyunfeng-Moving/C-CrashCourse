#include "stdio.h"
#include "stdint.h"

uint8_t card_clor[]={'S','H','D','C'};

uint8_t card_num[]={'1','2','3','4','5','6','7','8','9','A','J','Q','K'};


void main(void)
{
 uint8_t num;//用户输入的排数
 uint8_t temp_index;
 uint16_t clor_start_index;//颜色的起始位
 uint16_t num_start_index;//数字的起始位

 while(1)
 {
 printf("please input a num of poker:\n");
 printf("the min is 1 and the max is 56:\n");

 scanf("%d",&num);

 while((num<1)||(num>56))
 {
     printf("num is err,please input the right num:(1~56)\n");
     scanf("%d",&num);
 }


 printf("your card are:\n");

 for(temp_index=0;temp_index<num;temp_index++)
 {
   clor_start_index = rand();
   putchar(card_clor[clor_start_index%4]);
   
   num_start_index = rand();
   num_start_index %= 13;
   if(num_start_index == 9)
   {
    putchar('1');
    putchar('0');
   }
   else
   {
   putchar(card_num[num_start_index%13]);
   }
   putchar(' ');
 }

 printf("\n");
 }
}
