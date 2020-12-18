#include <iostream>
using namespace std;

class IObject
{
    public:
        int mMaxPassengers;
        float mMaxSpeed;
        float mMaxWeight;
        int getMaxPassengers();
        float getMaxSpeed();
        float getMaxWeight();
        bool isLandVehicle();
};

class Vehicle : IObject
{
    public:
        int getMaxPassengers(int mMaxPassengers_V){
             mMaxPassengers = mMaxPassengers_V;
             return mMaxPassengers;
        }

        float getMaxSpeed(float mMaxSpeed_V){
            mMaxSpeed = mMaxSpeed_V;
            return mMaxSpeed;
        };

        float getMaxWeight(float mMaxWeight_V){
            mMaxWeight = mMaxWeight_V;
            return mMaxWeight_V;
        };

        Vehicle(int a, float b, float c, int d){
            mMaxPassengers = getMaxPassengers(a);
            mMaxSpeed = getMaxSpeed(b);
            mMaxWeight = getMaxWeight(c);
        }

};

class Car : public Vehicle
{
    public:
        Car(int a, float b, float c, int d = 1) : Vehicle(a,b,c,d){}
      virtual string isLandVehicle(int d){
           if(d){
               return "True";
           }
           else{
               return "False";
           }
       }     
};

class Plane : public Vehicle
{
    public:
        Plane(int a, float b, float c, int d = 0) : Vehicle(a,b,c,d){}
      virtual string isLandVehicle(int d){
           if(d){
               return "True";
           }
           else{
               return "False";
           }
       }  
       
};