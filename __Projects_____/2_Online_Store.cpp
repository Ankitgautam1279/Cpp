#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_map>
#include<unordered_set>

using namespace std;

struct Product{
    int productId;
    string name;
    string category;
};

struct Order{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t OrderDate;

};

int main(){
    vector<Product> Products = {
        {101, "Laptop", "electronics"},
        {102, "Phone", "electronics"},
        {103, "Cofee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk lamp", "Kitchen"}
    };

    deque<string> recentCustomers = {"c001", "c002", "c003"};
    recentCustomers.push_back("c004");
    recentCustomers.push_front("c005");

    list<Order> orderHistory;
    orderHistory.push_back({1,101,1,"c001",time(0)});
    orderHistory.push_back({2,102,3,"c002",time(0)});
    orderHistory.push_back({3,103,2,"c003",time(0)});

    set<string> categories;
    for(const auto &Product : Products){
        categories.insert(Product.category);
    }

    map<int, int> ProductStock = {
        {101, 10},
        {102, 20},
        {103, 30},
        {104, 15},
        {105, 7}
    };

    multimap<string, Order> customerOrders;
    for(const auto &Order :  orderHistory){
        customerOrders.insert({Order.customerId, Order});
    }

    unordered_map<string, string> customerDate = {
        {"c001", "Alice"},
        {"c002", "Hitesh"},
        {"c003", "Vidya"},
        {"c004", "harry"},
        {"c005", "akg"}
    };

    unordered_set<int> uniqueProductId;
    for(const auto &Product : Products){
        uniqueProductId.insert(Product.productId);
    }

    return 0;
}