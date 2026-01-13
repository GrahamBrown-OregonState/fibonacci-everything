#include <vector>
#include <iostream>

class memo {
    private:
    
    std::vector<int> fib_ans = {0, 1};
    
    public:

    void set_fib_answers(int n);

    int get_fib_ans(int n); 
};


void memo::set_fib_answers(int n) {
    for (int i = fib_ans.size(); i <= n; i++) {
        fib_ans.push_back(fib_ans[i - 1] + fib_ans[i - 2]);
    }
}

int memo::get_fib_ans(int n) {
    this->set_fib_answers(n);
    return this->fib_ans.at(n);
}


class fib_solver {
    private:

    memo fib_memo;

    public:

    void run_fib_solver();

};

void fib_solver::run_fib_solver() {
    std::cout << "Enter num of fibonacci numbers you want: " << std::endl;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << this->fib_memo.get_fib_ans(i) << " ";
    }
    std::cout << std::endl;
}



int main() {
    fib_solver fib_solver;
    fib_solver.run_fib_solver();
}