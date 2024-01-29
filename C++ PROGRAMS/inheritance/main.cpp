#include <iostream>

using namespace std;



class detailsofmobiles{
    public:
    string  mobilename,camera,display,storage,memory,price,charger;
    int Welcome()
    {

    cout << "        *****Welcome to redmi mobile store*****\n"<<endl;

    }
int note13pro()
{
    cout << " \n              Name: Redmi note13 pro(5G)\n\n"<<endl;

    cout <<"  #Memory: Inbuilt 8GB ram and 128GB  Storage\n"<<endl;
    cout << "  #Processor: 7s Gen 2 Mobile Platform 5G| Octa core| 2.4GHz\n"<< endl;
    cout <<"  #Camera: 200MP(osis)+8MP+2MP\n"<< endl;
    cout << "  #Display: 1.5k Amoled Display\n "<<endl;
     cout << "  #Colours available : Classic Black\n"<<endl;
    cout << "  #Price: Rs. 10800/-\n"<<endl;
   }
 int redmi12()

             {
                cout << " \n              Name: Redmi 12 pro(5G)\n\n"<<endl;

    cout <<"  #Memory: Inbuilt 6GB ram and 128GB  Storage\n"<<endl;
    cout << "  #Processor: 4 Gen 2 Mobile Platform 5G| Octa core| 2.4GHz\n"<< endl;
    cout <<"  #Camera: 50MP(osis)+8MP+2MP\n"<< endl;
    cout << "  #Display: 1.5k Amoled Display\n "<<endl;
     cout << "  #Colours available : Classic Black,silver,pastel blue\n"<<endl;
    cout << "  #Price: Rs. 16800/-\n"<<endl;

             }
};
   class redmi{
    public:
    void redmia3()
    {


    cout << "\n              Name: RedmiA2(4G)\n\n"<<endl;

    cout <<"  #Memory:Inbuilt 4GB ram and 64GB  Storage\n"<<endl;
    cout << "  #Processor: High performance Media Tek Helio G36\n"<< endl;
    cout <<"  #Camera: 8MP Dual camera with Portrait mode|5MP Front camera\n"<< endl;
    cout << "  #Display: Large 16.5 cm HD+ display with Scratch resistant glass\n "<<endl;
     cout << "  #Colours available : Sea Green, Aqua Blue, Classic Black\n"<<endl;
    cout << "  #Price: Rs. 6800/-\n"<<endl;
   } };

class Thankyou {
public:
    void thanku()
{
   cout << "Thank you for visiting our store"<< endl;

} };
class redmiA2 : public detailsofmobiles,public redmi,public Thankyou{};
//class redmimote13 : public detailsofmobiles,public Thankyou{};
/*camera
    {
      string camera;
    }

};*/



int main()
{
      redmiA2 mi;
      mi.Welcome();
     string mobilename;
    cout << "Enter Your mobile name you want to buy(redmi_A2, redmi_note13_pro, redmi_12_pro)\n"<<endl;

    cin>>mobilename;




if(mobilename=="redmi_A2")
{

 mi.redmia3();
    }

else if(mobilename=="redmi_note13_pro")
{
    mi.note13pro();
}
else if(mobilename=="redmi_12_pro")
{
    mi.redmi12();
}


else{cout << "The entered details mismatches\n"<<endl;}

mi.thanku();

    return 0;
}
