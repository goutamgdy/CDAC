#include <iostream>
#include <string>

using namespace std;

class Product
{
    private:
        char* product_name;
        int product_code;
        float unit_price;
    public:
        Product();
        Product(const char*, int ,float);
        Product(Product &);
        void Display();
        ~Product();
};

Product :: Product(){
    product_name = new char[3];
    strcpy(product_name, "NA");
    product_code = 0;
    unit_price = 0;
}


Product :: Product(const char* nm, int code ,float price){
    product_name = new char[strlen(nm) + 1];
    strcpy(product_name,nm);
    product_code = code;
    unit_price = price;
}


Product :: Product(Product &dumb){
    this->product_code = dumb.product_code;
    this->unit_price = dumb.unit_price;
    this->product_name = new char[strlen(dumb.product_name) + 1];
    strcpy(this->product_name, dumb.product_name);
}


void Product :: Display(){
    cout<<"\n\n\t"<<"Name: "<<product_name<<" Code: "<<product_code<<" Price: "<<unit_price<<endl;
}
Product :: ~Product(){
    delete[] product_name;
}

int main(){
    Product p1;
    Product p2("Phone", 100, 2000);
    Product p3(p2);
    p3.Display();
}