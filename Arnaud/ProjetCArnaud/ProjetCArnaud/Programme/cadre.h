void cadre(int longueur,int larg,int x, int y)
{
    
	int i,j;
	gotoxy(x,y); printf("%c",201);
	for(i=0;i<longueur;i++) //20
	{
		printf("%c",205);
	}
	printf("%c",187);
	for(j=0;j<larg;j++) //5
	{
		gotoxy(x,++y);printf("%c",186);//incrémentation de y avant usage
		for(i=0;i<longueur;i++)
		{
			printf(" ");
		}
		printf("%c",186);
	}
	gotoxy(x,++y); printf("%c",200);
	for(i=0;i<longueur;i++)
	{
		printf("%c",205);
	}
	printf("%c",188);
}
