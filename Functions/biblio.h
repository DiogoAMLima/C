int fat(int x)
{
	int i,fat1;
	i=x;
	fat1=1;
	while(i>1){
	fat1*=i;
	i-=1;		
	}
	return fat1;
}
