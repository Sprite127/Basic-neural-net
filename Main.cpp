#include <iostream>
#include <math.h>
#include <string.h>  
using namespace std;

int main (){
int x;
int y;
int a;
int b;

	
cout << "Is there a square in the top left?\n1 for Yes/-1 for No\n";
cin >> x;
cout << "Is there a square in the bottom right?\n1 for Yes/-1 for No\n";
cin >> y;
cout << "Is there a square in the bottom left?\n1 for Yes/-1 for No\n";
cin >> a;
cout << "Is there a square in the top right?\n1 for Yes/-1 for No\n";
cin >> b;

	
int x1 = -x;
int y1 = -y;
int a1 = -a;
int b1 = -b;

int hidden_1 = x1 + y1 + -1;
int hidden_2 = x + y + -1;
int hidden_3 = a1 + b1 + -1;
int hidden_4 = a + b + -1;

cout << "\n\n";

//first layer neurons
//Neuron 1 
	//setting output to 1 or 0
 	if(hidden_1 <= 0){
hidden_1 = 0;
}
else if(hidden_1 > 0){
	hidden_1 = 1;
}

//Neuron 2
	//setting output to 1 or 0
 	if(hidden_2 <= 0){
hidden_2 = 0;
}
else if(hidden_2 > 0){
	hidden_2 = 1;
}

//Neuron 3 
	//setting output to 1 or 0
 	if(hidden_3 <= 0){
hidden_3 = 0;
}
else if(hidden_3 > 0){
	hidden_3 = 1;
}

//Neuron 4
	//setting output to 1 or 0
 	if(hidden_4 <= 0){
hidden_4 = 0;
}
else if(hidden_4 > 0){
	hidden_4 = 1;
}

int hidden_2_1 = hidden_2 + hidden_3 + -1;
int hidden_2_2 = hidden_1 + hidden_4 + -1;
	
//hidden layer neuron_2_1
	//setting output to 1 or 0
 	if(hidden_2_1 <= 0){
hidden_2_1 = 0;
}
else if(hidden_2_1 > 0){
	hidden_2_1 = 1;
}
	
//hidden layer neuron_2_2
	//setting output to 1 or 0
 	if(hidden_2_2 <= 0){
hidden_2_2 = 0;
}
else if(hidden_2_2 > 0){
	hidden_2_2 = 1;
}
	
//output
if(hidden_2_1 == 1 || hidden_2_2 == 1){
cout << "Checker Patern Found!";
}
else{
cout << "No Checker Patern Found!";
}

return 0;
}
