#include<iostream>
using namespace std;
struct stack 
{
	int info;
	stack *nextnode;
};
stack *newnode,*bottom=NULL,*top=NULL,*temp;
int cnt=0,ch,choice;
//****************
void getnode();
void push();
void pop();
void traverse();
//**************************
int main()
{
	cout<<"MY NAME IS DEEPANSH JAIN"<<endl;
	   cout<<"\n\noperations on stack\n";
   do
   {
   	cout<<"\n1.push\t2.pop\tEnter your choice\t";
   	cin>>ch;
if(ch==1){getnode();push();traverse();}
    else if(ch==2){pop();traverse();}
    else{cout<<"\nInvalid operation used\n";}
    cout<<"\npress 1 to continue ";
    cin>>choice;
}
while(choice==1);
cout<<"Thank you for valuable time !!";
return 0;
}
//*******************
void getnode()
 {
 	newnode=new stack;
 	cout<<"enter element for node";
 	cin>>newnode->info;
 	newnode->nextnode = NULL;
 }
 //*******************
void push()
{
  cout<<"\nadding element";
  if(newnode==NULL)
  cout<<"\nunderflow condition";
  else if(top==NULL)
  {
cout<<"\nempty stack,creating stack by inserting very first element";
  	++cnt;
  	bottom = newnode;
  	top=newnode;
	  }	
	  else {
	  	++cnt;
	  	top->nextnode=newnode;
	  	top=newnode;
	  }
}
//******************************
void pop()
{  
   cout<<"\ndeleting elements\n";
   cnt--;
   if(top==NULL)
   cout<<"\nunderflow condition,can not delete element from empty stack\n******************\n";
   else if(cnt==0)
   {cout<<"element get deleted is "<<top->info;
   top=NULL;
   bottom=NULL;
   }
   else 
   {
cout<<"element get deleted is"<<top->info;
   	temp=bottom;
	while(temp->nextnode!=top) temp=temp->nextnode;
	temp->nextnode=NULL;
	top=temp;
   }
}
//***************
void traverse()
{
	cout<<"\n**********\n";
	cout<<"number of elements = "<<cnt<<"\n";
	if(bottom==NULL)
	cout<<"empty list\n";
	else{
		temp = bottom;
		for(int i =1;i<=cnt;i++)
		{cout<<temp->info<<" ";
		temp=temp->nextnode;
		}
		cout<<"\n*************\n";
	}
}

