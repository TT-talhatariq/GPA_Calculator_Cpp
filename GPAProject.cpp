#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int subject();
void state(int arr[], float rat[], int size);
void grd(int arr[], string tal[], int list);
void Grade(float gpa);
int main(){
	int input = subject();
	int *mark = new int[input];
	int *credit = new int[input];
	string *name = new string[input];
	float *ratio = new float[input];
	string *grade = new string[input];

	//Loop for Asking Data
	for (int x=0; x<input; x++){
			cin.ignore();
		cout<<"Enter the name of "<<x+1<<"th subject :";
		getline(cin, name[x]);
		cout<<"Enter the credit-hours :";
		cin>>credit[x];
		cout<<"Enter The Marks : ";
		cin>>mark[x];

	}
	 state(mark, ratio , input);
	int sum=0;
	for (int i=0; i<input; i++){
		sum = sum + credit[i];
	}
	float total =0;
		for (int i=0; i<input; i++){
		total = total + (ratio[i]*credit[i]);
	}
	grd(mark , grade , input);
	float	tar = total/sum;
	cout<<" *******************************"<<endl;
	cout<<"YOUR REPORT CARD IS HERE "<<endl<<endl;
	cout<<"SUBJECT NAME \t\t"<<"Credit Hours \t\t"<<"YOUR MARKS "<<"\t\t"<<"GRADE"<<endl<<endl;
	for (int i=0; i<input; i++){
		cout<<setw(10)<<left<<name[i]<<setw(10);
		cout<<"\t\t"<<credit[i];
		cout<<"\t\t"<<mark[i];
		cout<<"\t\t\t"<<grade[i]<<endl;
	}
	cout<<endl<<endl<<"\t\t\t\tYOUR GPA IS :"<<tar<<endl<<endl;
	cout<<"\t"<<"FEEDBACK:"<<endl<<endl;
	cout<<"\t";
	Grade(tar);
		cout<<endl<<endl;
		cout<<"\t\t\t\tTHANKS FOR YOUR CO-OPERATION"<<endl<<endl;
		
		cin.get();
		return 0;
	}



int subject(){
	cout<<"Enter the Number Of Subject : ";
	int sub;
	cin>>sub;
	return sub;
}

void state(int arr[], float rat[], int size){
for (int i=0; i<size; i++){

	if (arr[i]>=85){
		rat[i]=4.0;
	}
	else if(arr[i]<85 && arr[i]>=80){
   	rat[i]=3.7;
	}
	else if(arr[i]<80&&arr[i]>=75){
		rat[i]=3.3;
	}
	else if(arr[i]<75&&arr[i]>=70){
		rat[i]=3.0;

	}
	else if(arr[i]<70&&arr[i]>=65){
		rat[i]=2.7;
	}
	else if(arr[i]<65&&arr[i]>=61){
		rat[i]=2.3;

	}
	else if (arr[i]<61&&arr[i]>=58){
		rat[i]=2.0;
	}
	else if (arr[i]<58&&arr[i]>=55)
	{
		rat[i]=1.7;
	}
	else if(arr[i]<55&&arr[i]>=50){
		rat[i]=1.0;
	}
	else {
		rat[i]=0.0;
	}}}



void grd(int arr[], string tal[], int list){


	for (int i=0; i<list; i++){

	if (arr[i]>=85){
		tal[i]="A";
	}
	else if(arr[i]<85 && arr[i]>=80){
   	tal[i]="A-";
	}
	else if(arr[i]<80&&arr[i]>=75){
		tal[i]="B+";
	}
	else if(arr[i]<75&&arr[i]>=70){
		tal[i]="B";

	}
	else if(arr[i]<70&&arr[i]>=65){
		tal[i]="B-";
	}
	else if(arr[i]<65&&arr[i]>=61){
		tal[i]="C+";

	}
	else if (arr[i]<61&&arr[i]>=58){
		tal[i]="C";
	}
	else if (arr[i]<58&&arr[i]>=55)
	{
		tal[i]="C-";
	}
	else if(arr[i]<55&&arr[i]>=50){
		tal[i]="D";
	}
	else {
		tal[i]="F";

}}}


void Grade(float gpa){
	if (gpa==4){
		cout<<"Exceptional work done"<<endl;
	}
	else if(gpa<4&&gpa>=3){
		cout<<"Appriciate your efforts! Plz Keep it up"<<endl;
	}
	else if(gpa<3&&gpa>2){
		cout<<"Your Survival seems to diffficult. Plz Work Hard Next time. Thanks"<<endl;
	}
	else {
		cout<<"You are On Probabation. Think carefully about your Current Situation"<<endl;
	}
}
