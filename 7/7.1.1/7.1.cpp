#include<iostream>
#include<string>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;

struct Sales_data {
    // ISBN
    string bookNo;
    // 销售数量
    unsigned unites_sold = 0;
    // 销售收入
    double revenue = 0.0;
};

int main() {
    Sales_data total;
    double total_price = 0.0;
    if (cin >> total.bookNo >> total.unites_sold >> total_price) {
        total.revenue = total_price * total.unites_sold;
        Sales_data trans;
        double trans_price = 0.0;
        while (cin >> trans.bookNo >> trans.unites_sold >> trans_price) {
            trans.revenue = trans_price * trans.unites_sold;
            if (total.bookNo == trans.bookNo) {
                total.unites_sold += trans.unites_sold;
                total.revenue += trans.revenue;
            } else {
                cout << total.bookNo << " " << total.unites_sold << " " << total.revenue << endl;
                total.bookNo = trans.bookNo;
                total.unites_sold = trans.unites_sold;
                total.revenue = trans.revenue;
            }
        }
        cout << total.bookNo << " " << total.unites_sold << " " << total.revenue << endl;
    } else {
        cerr << "No data!" << endl;
    }
    return 0;
}