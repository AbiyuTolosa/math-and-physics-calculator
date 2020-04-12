#include <iostream>
#include <cmath>
using namespace std;
class physics{
  public:
      int speed(){
        double distance;
        double time;
        double speed;
        cout<<"Enter the distance:";
        cin>>distance;
        cout<<"Enter the time:";
        cin>>time;
        speed=distance/time;
        cout<<"speed="<<speed;
      }
      int force(){
        double mass;
        double acceleration;
        double force;
        cout<<"Enter the mass:";
        cin>>mass;
        cout<<"Enter the acceleration:";
        cin>>acceleration;
        force=mass*acceleration;
        cout<<"force="<<force;
      }
      int work(){
        double work;
        double force;
        double displacement;
        cout<<"Enter the force:";
        cin>>force;
        cout<<"Enter the displacement:";
        cin>>displacement;
        work = force * displacement;
        cout<<"Work="<<work;
      }
      int power(){
        double work;
        double power;
        double time;
        cout<<"Enter the work:";
        cin>>work;
        cout<<"Enter the time:";
        cin>>time;
        power = work/time;
        cout<<"power="<<power;
      }
      int SM(){
        double load, effort, diseffort, disload, wo, wi, VR, AMA, efficiency;
        cout<<"Enter the Load:";
        cin>>load;
        cout<<"Enter the Effort:";
        cin>>effort;
        cout<<"Enter the distance of load:";
        cin>>disload;
        cout<<"Enter the distance of effort:";
        cin>>diseffort;
        wo = load * disload;
        wi = effort * diseffort;
        AMA = load/effort;
        VR = diseffort/disload;
        efficiency = (wo/wi) * 100;
        cout<<"WO="<<wo<<"  WI="<<wi<<"  AMA="<<AMA<<"  VR="<<VR<<"  efficiency="<<efficiency<<"%"<<endl;
      }
      int current(){
       double current, charge, time;
       cout<<"Enter the charge:";
       cin>>charge;
       cout<<"Enter the time:";
       cin>>time;
       current = charge/time;
       cout<<"current="<<current;
      }
      int resistance(){
       double resistance, voltage, current;
       cout<<"Enter the voltage:";
       cin>>voltage;
       cout<<"Enter the current:";
       cin>>current;
       resistance = voltage/current;
       cout<<"Resistance="<<resistance;
      }
      int KE(){
       double kineticE, mass, speed;
       cout<<"Enter the Mass:";
       cin>>mass;
       cout<<"Enter the speed:";
       cin>>speed;
       kineticE = 0.5 * mass*(speed*speed);
       cout<<"Kinetic Energy="<<kineticE;
      }
      int PE(){
       double potentialE, mass, gravitiy=10.0, height;
       cout<<"Enter the mass:";
       cin>>mass;
       cout<<"Enter the height:";
       cin>>height;
       potentialE = mass * gravitiy * height;
       cout<<"Potential Energy="<<potentialE;
      }
      int pressure(){
          char option;
          double pressure1,pressure2, force, area, density, gravitiy=10, height;
          cout<<"for which one do you want to calculate?fluid or solid f/s2:";
          cin>>option;
          if(option=='f'){
            cout<<"Enter the density:";
            cin>>density;
            cout<<"Enter the height:";
            cin>>height;
            pressure1 = density * gravitiy * height;
            cout<<"pressure="<<pressure1;
          }else if(option=='s'){
            cout<<"Enter the force:";
            cin>>force;
            cout<<"Enter the area:";
            cin>>area;
            pressure2 = force/area;
            cout<<"pressure="<<pressure2;
          }
      }
};
class math{
  public:
     int aofpoly(){
        int side, angleofpolygon;
       cout<<"Enter the side of a polygon"<<endl;
       cin>>side;
        angleofpolygon=(side-2)*180;
        cout<<"all angle of polygon="<<angleofpolygon<<endl;
        cout<<"each angle of polygon="<<angleofpolygon/side<<endl;
      }
    int phythagorean(){
      float adj, opp, hyp;
      char quest;
      cout<<"Which one do you want to calculate adj or hyp or opp"<<endl;
      cin>>quest;
      if(quest=='a'){
        cout<<"Enter the opp:";
        cin>>opp;
        cout<<"Enter the hyp:";
        cin>>hyp;
        adj = sqrt((hyp*hyp)-(opp*opp));
        cout<<"adj="<<adj;
      }else if(quest=='h'){
       cout<<"Enter the opp:";
       cin>>opp;
       cout<<"Enter the adj:";
       cin>>adj;
       hyp = sqrt((adj*adj)+(opp*opp));
       cout<<"hyp="<<hyp;
      }else if(quest=='o'){
        cout<<"Enter the adj:";
        cin>>adj;
        cout<<"Enter the hyp:";
        cin>>hyp;
        cout<<"opp="<<opp;
      }
    }
};

int main()
{
 int a;
 char b;
 cout<<"which calculator do you want math or physics m/p"<<endl;
 cin>>b;
 if(b=='p'){
    cout<<"Enter 1 to calculate speed"<<endl;
    cout<<"Enter 2 to calculate force"<<endl;
    cout<<"Enter 3 to calculate work"<<endl;
    cout<<"Enter 4 to calculate power"<<endl;
    cout<<"Enter 5 to calculate simple machine"<<endl;
    cout<<"Enter 6 to calculate current"<<endl;
    cout<<"Enter 7 to calculate resistance"<<endl;
    cout<<"Enter 8 to calculate kinetic Energy"<<endl;
    cout<<"Enter 9 to calculate potential Energy"<<endl;
    cout<<"Enter 10 to calculate pressure"<<endl;
    cin>>a;
    if(a==1){
        physics po;
        po.speed();
    }
    if(a==2){
        physics po;
        po.force();
    }
    if(a==3){
        physics po;
        po.work();
    }
    if(a==4){
        physics po;
        po.power();
    }
    if(a==5){
        physics po;
        po.SM();
    }
    if(a==6){
        physics po;
        po.current();
    }
    if(a==7){
        physics po;
        po.resistance();
    }
    if(a==8){
        physics po;
        po.KE();
    }
    if(a==9){
        physics po;
        po.PE();
    }
    if(a==10){
        physics po;
        po.pressure();
    }
 }else if(b=='m'){
   cout<<"Enter 1 to calculate angle of polygon"<<endl;
   cout<<"Enter 2 to calculate phythagorean theorem"<<endl;
   cin>>a;
    if(a==1){
        math mo;
        mo.aofpoly();
    }else if(a==2){
      math mo;
      mo.phythagorean();
    }
 }
}
