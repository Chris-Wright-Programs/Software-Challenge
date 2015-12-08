#include <iostream>
#include <string>
#include <sstream>

using namespace std;
//Declaring functions
float area(float w,float l);
float paint_vol(float p,float w,float h,float l);
float room_vol(float w,float h,float l);
/*Setting global constant for paint volume calculations.
It is the volume of paint needed to cover 1 m^2 taken from a product on the Dulux website
*/
const float paint_constant = 1.0/16.0;

//Function for calculating floor area
float area(float w,float l)
{
    float a = w * l;
    return a;
}
//Function for calculating the volume of paint to cover the walls
float paint_vol(float w,float h,float l)
{
    float vol = 2 * paint_constant * h * (w + l);
    return vol;
}
//Function for calculating the volume of the room
float room_vol(float w,float h,float l)
{
    float vol = w * h * l;
    return vol;
}

int main()
{
    // Declaring variables for the dimensions of the room
    float height = -1.0, width = -1.0, length = -1.0;
    string a,b,c;
    //Taking the inputs of the dimensions of the room using while loops and strings to ensure that the input is valid
    cout << "Please enter the dimensions of the room in metres" << endl;
    cout << "Length:";
    while(getline(cin,a))
    {
        if (stringstream(a) >> length && length > 0) break;
        else cout << "Invalid Input" << endl;
        cout << "Length:";
    }

    cout << "Width:";
    while(getline(cin,b))
    {
        if (stringstream(b) >> width && width > 0) break;
        else cout << "Invalid Input" << endl;
        cout << "Width:";
    }

    cout << "Height:";
    while(getline(cin,c))
    {
        if (stringstream(c) >> height && height > 0) break;
        else cout << "Invalid Input" << endl;
        cout << "Height:";
    }

    //Outputting the information calculated in separate functions
    cout << "The floor area is " << area(width,length) << " m^2" << endl;
    cout << "The volume of paint needed to cover the walls is " << paint_vol(width,height,length) << " litres" << endl;
    cout << "The volume of the room is " << room_vol(width,height,length) << " m^3" << endl;

    return 0;
}

