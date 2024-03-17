#include<iostream>
using namespace std;
int main(){
int i,m;
int crh[7],tcr = 0;
float gp = 0.0,cgpa;
cout << "Enter Number of Semester : " << endl;
cin >> m;
for (int x = 1;x <= m;x++)
{
cout << "Enter Total Number of Subjects of " <<x <<" Semester :"<< endl;
cin >> i;
float c[7], gr[7],gpa[x];
float AP = 4.0, A = 3.70, BP = 3.40, B = 3.00, CP = 2.00, C = 1.50, F = 0.00;
for (int j = 1; j <= i; j++){
cout << " Enter a Number of Subject of : " << j << endl;
cin >> c[j];
cout << "Enter Credit Hour of Subject No. : " << j << endl;
cin >> crh[j];
if (c[j] >= 84.50 && c[j] <= 100){
gr[j] = AP;
}else if (c[j] < 84.49 && c[j] >= 79.50)
{
gr[j] = A;
}else if (c[j] < 79.49 && c[j] >= 74.50){
gr[j] = BP;
}else if (c[j] < 74.49 && c[j] >= 69.50)
{
gr[j] = B;
}else if (c[j] < 64.49 && c[j] >= 59.50)
{
gr[j] = CP;
}else if (c[j] < 59.49 && c[j] >= 54.50)
{
gr[j] = C;
}else
{
gr[j] = F;
}
gp = crh[j] * gr[j] + gp;
tcr = crh[j] + tcr;
}
gpa[x] = gp / tcr;
gp = gp + gpa[x] * crh[x];
tcr = tcr + crh[x];
}
cgpa = gp / tcr;
cout << "Your GPA is : " << cgpa << endl;
}
