class ProductOfNumbers {
    vector<int> products;
public:
    ProductOfNumbers() {
        products = {1};
    }
    
    void add(int num) {
        if (num == 0) {
            products = {1};
        } else {
            products.push_back(products.back() * num);
        }
    }
    
    int getProduct(int k) {
        int n = products.size();
        if (k >= n) return 0;
        return products[n - 1] / products[n - 1 - k];
    }
};