int main()
{
	int x=0,y=50000,z=0;
	x=0;
	while(x<1000000){
		if(x<50000)
			x++;
		else{
			x++;
			y++;
		}
	}
	while(y>z){
		y--;
		x--;
	}
//@ assert x==z;
	return 0;
}