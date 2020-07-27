int suma (int x, int y)
{
	int sum;
	sum=x+y;
	return sum;
}
int resta (int x, int y)
{
	int rest;
	rest=x-y;
	return rest;
}
int multiplicacion (int x, int y)
{
	int multi;
	multi= x*y;
	return multi;
}
int division (int x, int y)
{
	float divi;
	divi=x/y;
	if(y==0)
	{
		printf("No se pudo efectuar la division: ");
	}
	return divi;
}
