
/* three is place in memory for special characters so we can add turkish characters
void karakter(){
    
    lcd_komut(0x40); veri_yolla(10);
    lcd_komut(0x41); veri_yolla(0);
    lcd_komut(0x42); veri_yolla(31);
    lcd_komut(0x43); veri_yolla(17);
    lcd_komut(0x44); veri_yolla(17);
    lcd_komut(0x45); veri_yolla(17);
    lcd_komut(0x46); veri_yolla(31);
    lcd_komut(0x47); veri_yolla(0);
    
    lcd_komut(0x48); veri_yolla(10);
    lcd_komut(0x49); veri_yolla(0);
    lcd_komut(0x4A); veri_yolla(17);
    lcd_komut(0x4B); veri_yolla(17);
    lcd_komut(0x4C); veri_yolla(17);
    lcd_komut(0x4D); veri_yolla(17);
    lcd_komut(0x4E); veri_yolla(31);
    lcd_komut(0x4F); veri_yolla(0);
    
    lcd_komut(BirinciSatir);
    
    veri_yolla(1);
    veri_yolla(0);
    
} */   

#include "LCD_lib.h"
#define _XTAL_FREQ 4000000
#define sut1 RD2
#define sut2 RD1
#define sut3 RD0

//char tus;

void main(void) {
    
  
    TRISB=0;
    TRISC=0;
    lcd_hazirla();
    lcd_yaz("Mekatronik");
    lcd_gotoxy(2,1);
    lcd_yaz("Muhendisligi");
    
    while(1){
        
       /*PORTD=8;
        if(sut1){tus="1";}
        if(sut2){tus="2";}
        if(sut3){tus="3";}
        
        PORTD=16;
        if(sut1)tus="4";
        if(sut2)tus="5";
        if(sut3)tus="6";
        
        PORTD=32;
        if(sut1)tus="7";
        if(sut2)tus="8";
        if(sut3)tus="9";
        
        PORTD=64;
        if(sut1)tus="*";
        if(sut2)tus="0";
        if(sut3)tus="#";*/
        
        
        //lcd_yaz(tus);
        
        
    }
    
}

