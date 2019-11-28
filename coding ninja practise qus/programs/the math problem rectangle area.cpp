#include<iostream>
#include<vector>

using namespace std;
int main(){
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;
	int Lx1, Rx2, By1, Ty2; 
	int areaR1,areaR2, area;
	int inter_area = 0;
	
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	
	Lx1 = max(x1, x3);
	Rx2 = min(x2, x4);
	By1 = max(y1, y3);
	Ty2 = min(y2, y4);
	
	areaR1 = (x2-x1)*(y2-y1);
	areaR2 = (x4-x3)*(y4-y3);
	if(Lx1<Rx2 && By1<Ty2)
		inter_area = (Rx2-Lx1)*(Ty2-By1);
	area = areaR1+areaR2-inter_area;
	cout<<area;00000000000000000000000
	
}
