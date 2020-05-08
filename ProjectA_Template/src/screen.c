#include "screen.h"

void puts(uint8_t row, uint8_t col, uint8_t fgcolor, uint8_t bgcolor, const char *message)
{
   int r=row;
    int c= col;

    uint16_t a=bgcolor;
    uint16_t b=fgcolor;
    a=a<<12;
    b=b<<8;
    uint16_t pos=0;
    uint16_t color= a | b;
    int v= sizeof(message);
    uint16_t *p= (uint16_t*)0xb800;

    for (int i = 0; i <=v; i++)
    {   
        pos=(r*80)+(c+i);
        if(pos<2400){
            *(p + pos)= color|message[i];
        }
        
    }
}

void clear_screen(uint8_t bgcolor)
{
    for (int i = 0; i < 80; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            puts(j,i,bgcolor,bgcolor,"p");
        }
        
    }
    
}
