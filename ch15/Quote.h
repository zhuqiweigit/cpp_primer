#ifndef QUOTE_H
#define QUOTE_H
#include <string>
class Quote{
private:
    std::string bookNo;
protected:
    double price;
public:
    Quote() = default;
    Quote(const std::string& bookNo, const double price):bookNo(bookNo), price(price){}
    std::string isbn() const {
        return bookNo;
    }
    virtual double net_price(std::size_t n) const{
        return n * price;
    }
    virtual ~Quote() = default;
    virtual void debug(std::ostream &os)const {
        os << "bookNo " << bookNo << " price" << price;
    }

};

class Bulk_quote : public Quote{
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &bookNo, double p, std::size_t qty, double discount): Quote(bookNo, p), min_qty(qty), discount(discount){}

    virtual double net_price(std::size_t n) const{
        if(n > min_qty){
            return n * (1 - discount) * price;
        }else{
            return n * price;
        }
    }
    virtual void debug(std::ostream &os)const {
        Quote::debug(os);
        os << " min_qty " << min_qty << " discount " << discount;
    }
};

class My_quote : public Bulk_quote{
private:
    std::size_t max_qty = 0;
public:
    My_quote() = default;
    My_quote(const std::string &bookNo, double p, std::size_t qty, double discount, std::size_t max_qty):Bulk_quote(bookNo, p, qty, discount), max_qty(max_qty){}

    virtual double net_price(std::size_t n) const{
        if(n < max_qty)
            return Bulk_quote::net_price(n);
        else{
            return (n - max_qty) * price + Bulk_quote::net_price(max_qty);
        }
    }

    virtual void debug(std::ostream &os) const{
        Bulk_quote::debug(os);
        os << " max_qty" << max_qty;
    }
};

#endif