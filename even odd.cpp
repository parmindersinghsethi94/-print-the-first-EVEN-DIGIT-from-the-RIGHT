#include <stdio.h>
#include <math.h>
#include <fstream>
#include <iostream>
#include <string>
int flag;
int main() {
	int no,p,len,temp,temp2,i,temp_cases,j,cases;
	bool a;
    
	char data[100],final[100];
	
	// open a file in write mode.
   ofstream outfile;
   outfile.open("input.txt");
   cout << "no of inputs" << endl;
   cin>>cases;
     // write inputted data into the file.
   outfile << "input\n"<<cases << endl;
   temp_cases=cases;
   //taking inputes
   for(j=0;j<temp_cases;j++){
	   cout << "Enter string: "; 
	   cin >> cases;
	   cin.ignore();
	    // write inputted data into the file.
	   outfile <<cases << endl;
   }
  
   // close the opened file.
   outfile.close();
   
   
    // open a file in read mode.
   ifstream infile; 
   infile.open("input.txt"); 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   // again read the data from the file and display it.
   infile >> temp_cases; 
   ofstream outNewfile;
   outNewfile.open("output.txt");
    outNewfile << "output\n"<<temp_cases << endl;
   for(j=0;j<temp_cases;j++){
      infile >> no; 
	   	flag=0; 
    len=(int)floor(log10((float)no)) + 1;
    useGoto:while((len>0)&&(flag==0)){
       temp=no%10;
       temp2=no/10;
       p=(temp & 1);
       p= p || ((flag=1)&&(printf("%d ",temp)));
       len--;
       no=temp2;
       goto useGoto;   
     }
     	// open a file in new output file in write mode.
   
     outNewfile << "Case#"<<j+1<<"="<<temp << endl;
   
   }


    
}
