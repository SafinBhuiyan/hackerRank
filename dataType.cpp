#include<iostream>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif

     	int a;
     	long long int b;
     	char c;
     	float d;
     	double e;

     	cin>>a>>b>>c>>d>>e;
     	printf("%d\n",a);
     	printf("%lli\n",b);
     	printf("%c\n",c);
     	printf("%f\n",d);
     	printf("%lf",e);

	return 0;
}