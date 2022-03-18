//In this mathod we will reverse the string but we will swap the 1st element with the last element and then increase i and decrease j


#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string :"<<endl;
    getline(cin,str);//Input a complete line
    int i=0;//1st element
    int j=str.length()-1;//Last element
    while(j>i)
    {
        swap(str[i],str[j]);//Swapping the elements
        j--;
        i++;
    }

    cout<<"The reversed string is :"<<str;

    return 0;
}
