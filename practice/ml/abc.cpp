// To reverse the words inth file 
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
void rev_word(char *s)
{
	int start=0,end=0,l=strlen(s),i,j,k;
	char temp;
	for (i=0;i<=l;i++) 
	{
		if(s[i]==' '|| s[i]=='\0')
		{
			end= i-1;  
			for (j=start,k=end;j<k;j++,k--) 
			{
				temp = s[j];
				s[j] = s[k];
				s[k] = temp;
			}
			start = i + 1;
		}
	}
}
int main(int argc,char **argv)
{
	fstream fio(argv[1], ios::in);  // to read 
	int nl = 100; // number of lines 
	int  ll= 100; // longest line
	int  tl=0; // total lines 
	char **s = new char*[nl];   // to alloacte dma for 2d char array
	for (int i=0;i<nl;i++)  // dma for 1d array in the  2d array 
	{
		s[i]=new char[ll];
	}
	while (fio.getline(s[tl],ll))  // to read from file 
	{
		rev_word(s[tl]);     // send each word to revese_word function
		tl++;
	}
	fio.close();  // to open a file 1st need to close 
	fio.open(argv[1], ios::out | ios::trunc);  // open file to write 
	for (int i=0;i<tl;i++) // write word by word
	fio << s[i] << endl;
}

