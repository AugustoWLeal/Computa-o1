#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, z, MediaAritimetica, MediaPonderada, MediaGeometrica, MediaHarmonica;
	char d;
	printf("Digite 3 numeros: ");
	scanf("%f %f %f",&x,&y,&z);
	printf("Digite:\n");
	printf("A para Media aritimetica\n");
	printf("P para media ponderada\n");
	printf("G para media geometrica\n");
	printf("H para media harmonica\n");
	scanf("%c",&d);
	scanf("%c",&d);
	if (d=='a' || d=='A')
	{	MediaAritimetica=(x+y+z)/3;
		printf("MediaAritimetica = %f \n",MediaAritimetica);
	}
	else if (d=='p' || d=='P')
	{	MediaPonderada=(x+2*y+3*z)/6;
		printf("MediaPonderada = %f \n",MediaPonderada);
	}
	else if (d=='g' || d=='G')
	{	MediaGeometrica=pow(x*y*z, 1.0/3);
		printf("MediaGeometrica = %f \n",MediaGeometrica);
	}
	else if (d=='h' || d=='H')
	{	MediaHarmonica=3/(1/x+1/y+1/z);
		printf("MediaHarmonica = %f ",MediaHarmonica);
	}
	return 0;
}
