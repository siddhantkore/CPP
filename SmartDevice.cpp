#include<iostream>
using namespace std;
class SmartDevice{
	private:
		string deviceName;
		string deviceType;
		bool On;
	public:
		SmartDevice(string deviceName, string deviceType,bool On){
			this->deviceName = deviceName;
			this->deviceType = deviceType;
			this->On = On;
		}
		void displayDetails(){
			cout<<"Name:"<<deviceName<<endl;
			cout<<"Type:"<<deviceType<<endl;
			cout<<"Power Status:"<<On<<endl;
		} 
		void togglePower(){
			if(On==true){
				On = false;
				//return "Off";
			}
			else{
				On = true;
				//return "On";
			}
		}
};
int main(){
//	SmartDevice s1("Smart Light","Light",true);
//	s1.displayDetails();
//	s1.togglePower();
//	cout<<"After Toggle"<<endl;
//	s1.displayDetails();
	SmartDevice s1("Smart Light","Light",false);
	s1.displayDetails();
	s1.togglePower();
	s1.displayDetails();
}
