case ILI9481:
	UTFT_LCD_Write_COM(0x11);
	delay(20);
	UTFT_LCD_Write_COM(0xD0);
	UTFT_LCD_Write_DATA_VL(0x07);
	UTFT_LCD_Write_DATA_VL(0x42);
	UTFT_LCD_Write_DATA_VL(0x18);

	UTFT_LCD_Write_COM(0xD1);
	UTFT_LCD_Write_DATA_VL(0x00);
	UTFT_LCD_Write_DATA_VL(0x07);
	UTFT_LCD_Write_DATA_VL(0x10);

	UTFT_LCD_Write_COM(0xD2);
	UTFT_LCD_Write_DATA_VL(0x01);
	UTFT_LCD_Write_DATA_VL(0x02);

	UTFT_LCD_Write_COM(0xC0);
	UTFT_LCD_Write_DATA_VL(0x10);
	UTFT_LCD_Write_DATA_VL(0x3B);
	UTFT_LCD_Write_DATA_VL(0x00);
	UTFT_LCD_Write_DATA_VL(0x02);
	UTFT_LCD_Write_DATA_VL(0x11);

	UTFT_LCD_Write_COM(0xC5);
	UTFT_LCD_Write_DATA_VL(0x03);

	UTFT_LCD_Write_COM(0xC8);
	UTFT_LCD_Write_DATA_VL(0x00);
	UTFT_LCD_Write_DATA_VL(0x32);
	UTFT_LCD_Write_DATA_VL(0x36);
	UTFT_LCD_Write_DATA_VL(0x45);
	UTFT_LCD_Write_DATA_VL(0x06);
	UTFT_LCD_Write_DATA_VL(0x16);
	UTFT_LCD_Write_DATA_VL(0x37);
	UTFT_LCD_Write_DATA_VL(0x75);
	UTFT_LCD_Write_DATA_VL(0x77);
	UTFT_LCD_Write_DATA_VL(0x54);
	UTFT_LCD_Write_DATA_VL(0x0C);
	UTFT_LCD_Write_DATA_VL(0x00);

	UTFT_LCD_Write_COM(0x36);
	UTFT_LCD_Write_DATA_VL(0x0A);


	UTFT_LCD_Write_COM(0x3A);
	UTFT_LCD_Write_DATA_VL(0x55);

	UTFT_LCD_Write_COM(0x2A);
	UTFT_LCD_Write_DATA_VL(0x00);
	UTFT_LCD_Write_DATA_VL(0x00);
	UTFT_LCD_Write_DATA_VL(0x01);
	UTFT_LCD_Write_DATA_VL(0x3F);

	UTFT_LCD_Write_COM(0x2B);
	UTFT_LCD_Write_DATA_VL(0x00);
	UTFT_LCD_Write_DATA_VL(0x00);
	UTFT_LCD_Write_DATA_VL(0x01);
	UTFT_LCD_Write_DATA_VL(0xE0);
	delay(120);
	UTFT_LCD_Write_COM(0x29);
	break;
