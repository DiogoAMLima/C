int pot(int base,int expoente)
{
	int pot1,i;
	pot1=1;
	for(i=1;i<=expoente;i++)
	pot1*=base;
	return pot1;

}
