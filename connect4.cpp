#include <iostream> 
using namespace std;using I=int;I M[6][7]=
{},H[7]={5,5,5,5,5,5,5},c=1,x,y,z;I e(I l,
I n){for(I k=0;k<9;++k){if((y+l*k<0||y+l*k
>5||x+n*k<0||x+n*k>6)||M[y+l*k][x+n*k]!=c)
{return k;}}return 0;}void p(){for(I i=0;i
<6;++i){for(I j=0;j<7;++j)cout<<(M[i][j]>0
?"●":(M[i][j]<0)?"○":".");cout<<'\n';}cout
<<"0123456\n";cout<<'\n';}I main(){while(1
){p();cin>>x;y=H[x];M[y][x]=c;if(e(0,1)+e(
0,-1)>4||e(1,1)+e(-1,-1)>4||e(1,0)+e(-1,0)
>4||e(1,-1)+e(-1,1)>4){cout<<(c>0?"White":
"Black")<<" wins\n";p();return 0;}--H[x];c
*=-1;++z;if(z>41){cout<<"Tie";return 0;}}}