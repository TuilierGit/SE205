int main(){
	int x=0,y=500000,z=0;
	x=0;
	while(x<1000000){
		if(x<500000)
			x++;
		else{
			x++;
			y++;
		}
	}
	while(y>0){
		x--;
		z++;
		y=y-2;
	}
//@ assert z%2==0;
//@ assert x%2==0;
	return 0;
}