//
//  main.cpp
//  JCFc8
//
//  Created by Joey on 8/10/16.
//  Copyright © 2016 Joey. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    //fibonacci : 1,1,2,3,5,8,13,21,34
    //each number obtained by adding last 2 together
    //ie. 0+1=1   1+1=2    1+2=3    2+3=5
    
    
    long  num1 = 0;
    long  num2 = 1;
    long  sum = num1 + num2;
    int fib = 0;//,91
    
    cout<<"fibonacci sequence"<<endl;
    cout<<"enter the number of times to calculate (1-90):\t";
    cin>>fib;
    
	cout<<"trial\tnumber"<<endl;
    cout<<"0:\t\t"<<sum<<"\n";
    
    for(int i = 0; i < fib; i++)
    {
        cout<<i+1<<":\t\t"<<sum<<"\n";
        
        num1 = num2;
        num2 = sum;
        
        sum = num1+num2;
        
    }
    
    return 0;
}
