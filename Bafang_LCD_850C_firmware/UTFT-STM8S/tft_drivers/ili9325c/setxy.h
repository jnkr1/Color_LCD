case ILI9325C:
	UTFT_LCD_Write_COM_DATA(0x20,x1);
	UTFT_LCD_Write_COM_DATA(0x21,y1);
	UTFT_LCD_Write_COM_DATA(0x50,x1);
	UTFT_LCD_Write_COM_DATA(0x52,y1);
	UTFT_LCD_Write_COM_DATA(0x51,x2);
	UTFT_LCD_Write_COM_DATA(0x53,y2);
	UTFT_LCD_Write_COM(0x22); 
	break;
