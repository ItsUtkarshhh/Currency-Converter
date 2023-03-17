#include<iostream>
#include<conio.h>
using namespace std;

float dollar, british_pounds, rupees, yen, euro;

void DollarConverter() {
    int choice;
    cout<<"Press 1 for Dollar to Rupees"<<endl;
    cout<<"Press 2 for Dollar to Euro"<<endl;
    cout<<"Press 3 for Dollar to British Pounds"<<endl;
    cout<<"Press 4 for Dollar to Yen"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice) {
        case 1 :
        cout<<"Enter Money : ";
        cin>>dollar;
        rupees = dollar*82.873997;
        cout<<" $ "<<dollar<<" equals : "<<" Rs "<<rupees;
        break;

        case 2 :
        cout<<"Enter Money : ";
        cin>>dollar;
        euro = dollar*0.94013392;
        cout<<dollar<<" $ equals : "<<euro<<" Euros ";
        break;

        case 3 :
        cout<<"Enter Money : ";
        cin>>dollar;
        british_pounds = dollar*0.83238661;
        cout<<dollar<<" $ equals : "<<british_pounds<<" Bps ";
        break;

        case 4 :
        cout<<"Enter Money : ";
        cin>>dollar;
        yen = dollar*133.42911;
        cout<<dollar<<" $ equals : "<<yen<<" Yen ";
        break;
}
}

void RupeesConverter() {
    int choice;
    cout<<"Press 1 for Rupees to Dollar"<<endl;
    cout<<"Press 2 for Rupees to British Pounds"<<endl;
    cout<<"Press 3 for Rupees to Euro"<<endl;
    cout<<"Press 4 for Rupees to Yen"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice) {
        case 1 :
        cout<<"Enter Money : ";
        cin>>rupees;
        dollar = rupees*0.0120663;
        cout<<rupees<<" Rs equals : "<<dollar<<" $ ";
        break;

        case 2 :
        cout<<"Enter Money : ";
        cin>>rupees;
        british_pounds = rupees*0.010044002;
        cout<<rupees<<" Rs equals : "<<british_pounds<<" Bps ";
        break;

        case 3 :
        cout<<"Enter Money : ";
        cin>>rupees;
        euro = rupees*0.011344136;
        cout<<rupees<<" Rs equals : "<<euro<<" euros ";
        break;

        case 4 :
        cout<<"Enter Money : ";
        cin>>rupees;
        yen = rupees*1.6100238;
        cout<<rupees<<" Rs equals : "<<yen<<" Yen ";
        break;
    }
}

void EuroConverter() {
    int choice;
    cout<<"Press 1 for Euro to Dollar"<<endl;
    cout<<"Press 2 for Euro to British Pounds"<<endl;
    cout<<"Press 3 for Euro to Rupees"<<endl;
    cout<<"Press 4 for Euro to Yen"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice) {
        case 1 :
        cout<<"Enter Money : ";
        cin>>euro;
        dollar = euro*1.0636782;
        cout<<euro<<" euros equals : "<<dollar<<" $ ";
        break;

        case 2 :
        cout<<"Enter Money : ";
        cin>>euro;
        british_pounds = euro*0.88539153;
        cout<<euro<<" euros equals : "<<british_pounds<<" Bps ";
        break;

        case 3 :
        cout<<"Enter Money : ";
        cin>>euro;
        rupees = euro*88.171761;
        cout<<euro<<" euros equals : "<<rupees<<" Rs ";
        break;

        case 4 :
        cout<<"Enter Money : ";
        cin>>euro;
        yen = euro*141.92564;
        cout<<euro<<" euros equals : "<<yen<<" Yen ";
        break;
    }
}

void YenConverter() {
    int choice;
    cout<<"Press 1 for Yen to Dollar"<<endl;
    cout<<"Press 2 for Yen to British Pounds"<<endl;
    cout<<"Press 3 for Yen to Rupees"<<endl;
    cout<<"Press 4 for Yen to Euro"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice) {
        case 1 :
        cout<<"Enter Money : ";
        cin>>yen;
        dollar = yen*0.0074946164;
        cout<<yen<<" Yen equals : "<<dollar<<" $ ";
        break;

        case 2 :
        cout<<"Enter Money : ";
        cin>>yen;
        british_pounds = yen*0.0062384183;
        cout<<yen<<" Yen equals : "<<british_pounds<<" Bps ";
        break;

        case 3 :
        cout<<"Enter Money : ";
        cin>>yen;
        rupees = yen*0.62110882;
        cout<<yen<<" Yen equals : "<<rupees<<" Rs ";
        break;

        case 4 :
        cout<<"Enter Money : ";
        cin>>yen;
        euro = yen*0.0070459431;
        cout<<yen<<" Yen equals : "<<euro<<" euros ";
        break;
    }
}

void BritishPoundsConverter() {
    int choice;
    cout<<"Press 1 for British Pounds to Dollar"<<endl;
    cout<<"Press 2 for British Pounds to Yen"<<endl;
    cout<<"Press 3 for British Pounds to Rupees"<<endl;
    cout<<"Press 4 for British Pounds to Euro"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice) {
        case 1 :
        cout<<"Enter Money : ";
        cin>>british_pounds;
        dollar = british_pounds*1.2013648;
        cout<<british_pounds<<" Bps equals : "<<dollar<<" $ ";
        break;

        case 2 :
        cout<<"Enter Money : ";
        cin>>british_pounds;
        yen = british_pounds*160.29704;
        cout<<british_pounds<<" Bps equals : "<<yen<<" Yen ";
        break;

        case 3 :
        cout<<"Enter Money : ";
        cin>>british_pounds;
        rupees = british_pounds*99.561906;
        cout<<british_pounds<<" Bps equals : "<<rupees<<" Rs ";
        break;

        case 4 :
        cout<<"Enter Money : ";
        cin>>british_pounds;
        euro = british_pounds*1.1294438;
        cout<<british_pounds<<" Bps equals : "<<euro<<" euro ";
        break;
    }
}

int main() {
    int Choose_Converter;
    cout<<"Press 1 for Rupees Converter"<<endl;
    cout<<"Press 2 for Dollar Converter"<<endl;
    cout<<"Press 3 for Yen Converter"<<endl;
    cout<<"Press 4 for Euro Converter"<<endl;
    cout<<"Press 5 for British Pounds Converter"<<endl;
    cout<<"Choose your Converter : ";
    cin>>Choose_Converter;
    
    switch(Choose_Converter) {
        case 1 :
        RupeesConverter();
        break;

        case 2 :
        DollarConverter();
        break;

        case 3 :
        YenConverter();
        break;

        case 4 :
        EuroConverter();
        break;

        case 5 :
        BritishPoundsConverter();
        break;

        default :
        cout<<"Invalid Input";
        exit(0);
    }

    getch();
}