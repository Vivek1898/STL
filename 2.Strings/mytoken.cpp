#include<iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
char *mystrtok(char *s,char delim){
//str and single char act as a delimeter

//first call
  static char *input=NULL;
  if(s!=NULL){
    input=s;
  }

  //Base .. after the finall token
if(input==NULL){
  return NULL;
}

//Extract token and store them in array
  char *output=new char[strlen(input)+1];
  int i=0;
  for(;input[i]!='\0';i++){
    if(input[i]!=delim){
      output[i]=input[i];

    }else{
      output[i]='\0';
      input=input+i+1;
      return output;

    }

  }

  output[i]='\0';
  input=NULL;
  return output;

}


int main(){
	init_code();
	

  char s[180]="Today is a rainy day";
  //Create new array copies first token and return base adress of that array
 
char *p=mystrtok(s,',');

cout<<p<<endl;
//For all tokens
//remove duplicate by using Null

while(p!=NULL)
{
  p=mystrtok(NULL,',');

cout<<p<<endl;
}


}