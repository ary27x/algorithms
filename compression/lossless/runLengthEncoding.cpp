#include <iostream>
using namespace std;
// this is one of the easiest compression algorithms
// if we have a sample data aaaaabbbcdeeeeeeef
//		            012345678
//			         i
// the compression algorithm should return a5b3c1d1e7f1

string rLE (string data)
{
string buffer = "";
int length = data.size();
int i;
int counter;
char item;
for (i = 0 ; i < length ; i++)
{
counter = 1;
item = data[i];
while ((i != length - 1) && (data[i+1] == item))
{
counter++;
i++;
}
buffer.push_back(item);
buffer += to_string(counter);
}
return buffer;
}


int main()
{
cout << "Please Enter A String : ";
string data;
getline (cin , data);
int oSize = data.size();
cout << endl << "This is the original string : " << data << endl;
cout << "This is the original length of the string : " << oSize << endl << endl;

string compressedData = rLE (data);
int cSize = compressedData.size();
cout << "This is the compressed string from the  RLE function : " << compressedData << endl;
cout << "This is the length of the compressed string : " << cSize << endl;


if (cSize >= oSize)
{
cout << endl << "This algorithm works best in the case of statistical redundancy" << endl;
cout << "Try to add more and long repeating characters for better compression " << endl;
}
else
{
int diff = oSize - cSize;
float percentage = (float) diff / oSize * 100;
cout << "Compression Percentage : " << percentage << endl;
}


return 0;
}