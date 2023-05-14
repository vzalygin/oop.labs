#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

class Product {
private:
    char * name;
    int manufacture_date;
    int life;
public:
    Product(char * name, int manufacture_date, int life)
        : name(name), manufacture_date(manufacture_date), life(life) {}
    Product() {}

    void print() {
        cout << "Product; name: " << name << "; manufacture_date: " << manufacture_date << "; exp_date: " << life << ";";
    }

    char * get_name() { return name; }
    int get_manufacture_date() { return manufacture_date; }
    int get_life() { return life;}

    int get_exp_date() { return manufacture_date + life; }
};

class Fridge {
private:
    Product * products;
    int count;

    void remove_product(int index) {
        Product * new_products = new Product[count-1];
        int j = 0;
        for (int i = 0; i < index; ++i, ++j)
            new_products[j] = products[i];
        for (int i = index+1; i < count; ++i, ++j)
            new_products[j] = products[i];
        free(products);
        products = new_products;
        count--;
    }
public:
    Fridge(Product * products = nullptr, int count = 0)
        : products(products), count(count) {}

    void print() {
        cout << "Fridge; number of the products: " << count << "; Products: " << endl;
        for (int i = 0; i < count; ++i) {
            products[i].print();
            cout << endl;
        }
        cout << ";" << endl;
    }

    void push_product(Product & product) {
        products = static_cast<Product *>(realloc(products, sizeof(Product)*(count+1)));
        products[count] = product;
        count++;
    }

    int get_products_number() { return count; }

    Product * get_the_most_perishable_product() {
        if (count != 0) {
            Product * res = &products[0];
            for (int i = 1; i < count; ++i)
                if (res->get_exp_date() > products[i].get_exp_date())
                    res = &products[i];

            return res;
        } else {
            return nullptr;
        }
    }

    void remove_expired_products(int current_date) {
        for (int i = 0; i < count; ++i) {
            if (products[i].get_exp_date() < current_date)
                remove_product(i);
        }
    }

    ~Fridge() {
        free(products);
    }
};

int main()
{
    Product p1("Milk", 1, 7), p2("Egg", 1, 14), p3("Potato", 1, 60);
    Fridge fridge(nullptr, 0);
    fridge.push_product(p2);
    fridge.push_product(p1);
    fridge.push_product(p3);

    fridge.print();

    cout << "a number of the products is " << fridge.get_products_number() << endl;
    cout << "the most perishable product is";
    fridge.get_the_most_perishable_product()->print();
    cout << endl;

    fridge.remove_expired_products(10);
    cout << "the list of non-expired products(day 10): " << endl;
    fridge.print();
    cout << endl;

    return 0;
}
