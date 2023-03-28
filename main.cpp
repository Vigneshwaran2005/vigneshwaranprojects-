#include <iostream>
using namespace std;

float egg();
float potato();
float fish();
float mutton();
float cookies();
float chocalates();
float coffeepowder();
float orange();
float curryleaves();
float soyabeans();
//Introduction of the program
int main()
{
    cout<<"\nvigneshwaran✌️";
    cout<<"\nSri Amaraavathi College of Arts and science!!";
    int choice;
    float totalamount,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    char dec;
    cout<<"\n\twelcome to TONY STARK supermarket";
    start:
    cout<<"\n1.egg🥚\n2.potato🥔\n3.fish🐟\n4.mutton🥩\n5.cookies🍪\n6.chocalates🍫\n7.coffeepowder☕️\n8.orange🍊\n9.curryleaves🌿\n10.soyabeans🌱";
    cout<<"\nNOTE:if you want items quantity in grams enter in float,Example->400g=0.4";
    cout<<"\nenter your choice:";cin>>choice;
      switch(choice){
          case 1:
          a1=egg();
          break;
          case 2:
          a2=potato();
          break;
          case 3:
          a3=fish();
          break;
          case 4:
          a4=mutton();
          break;
          case 5:
          a5=cookies();
          break;
          case 6:
          a6=chocalates();
          break;
          case 7:
          a7=coffeepowder();
          break;
          case 8:
          a8=orange();
          break;
          case 9:
          a9=curryleaves();
          break;
          case 10:
          a10=soyabeans();
          break;
          default:
            exit(0);
      }
      
      totalamount=a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
      cout<<"\nthe total cost is:"<<totalamount;
      cout<<"\nif you finished the shopping press y,want to continue press n:";cin>>dec;
      if(dec=='y')
      {
          cout<<"\nThank you!for shopped in TONY STARK supermarket!!";
          exit(0);
      }
      else{
      goto start;
      }
    return 0;
}

// price of egg
float egg(){
    cout<<"\n 🥚 egg per kg = ₹85";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of egg is:"<<quantity*85;
    return quantity*85;
}
//price of potato
float potato(){
    cout<<"\n 🥔 potato per kg = ₹45";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of potato is:"<<quantity*45;
    return quantity*45;
}
//price of fish
float fish(){
    cout<<"\n 🐟 fish per kg = ₹350";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of fish is:"<<quantity*350;
    return quantity*350;
}
//price of mutton
float mutton(){
    cout<<"\n 🥩 mutton per kg = ₹700";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of mutton is:"<<quantity*700;
    return quantity*700;
}
//price of cookies
float cookies(){
    cout<<"\n 🍪 cookies per kg = ₹599";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of cookies is:"<<quantity*599;
    return quantity*599;
}
//price of chocalates
float chocalates(){
    cout<<"\n 🍫 chocalates per kg = ₹999";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of chocalates is:"<<quantity*999;
    return quantity*999;
}
//price of coffeepowder
float coffeepowder(){
    cout<<"\n ☕️ coffeepowder per kg = ₹1600";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of coffeepowder is:"<<quantity*1600;
    return quantity*1600;
}
//price of orange
float orange(){
    cout<<"\n 🍊 orange per kg = ₹110";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of orange is:"<<quantity*110;
    return quantity*110;
}
//price of curryleaves
float curryleaves(){
    cout<<"\n 🌿 curryleaves perkg = ₹450";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of curryleave is:"<<quantity*450;
    return quantity*450;
}
//price of soyabeans
float soyabeans(){
    cout<<"\n 🌱 soyabeans per kg = ₹180";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost is:"<<quantity*180;
    return quantity*180;
}






