#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
  public:
  int length,breadth, height;
  Box(const Box &p1) 
  {
        length = p1.length; 
        breadth = p1.breadth; 
        height = p1.height;
    }  
    Box(int l, int b, int h){
        length = l;
        breadth = b;
        height = h;
    }
    Box(){
        length = 0;
        breadth = 0;
        height = 0;
    }
    
    int getLength(){
        return length;
    }
    
    int getBreadth(){
        return breadth;
    }
    
    int getHeight(){
        return height;
    }
    
    long long CalculateVolume(){
        return (long long)length*breadth*height;
    }
    
    friend bool operator < ( Box&A,Box& B){
        if( (A.length < B.length ) || ((A.breadth < B.breadth) && 
        (A.length  == B.length )) || ((A.height < B.height) && 
        (A.length  == B.length ) && (A.breadth == B.breadth)) )
        {
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.length << " " << B.breadth << " " << B.height;
        return output;
    }
};
