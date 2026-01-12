#include <vector>

class memo {
    private:
    
    std::vector<int> fib_ans;
    
    public:

    memo();

    void set_fib_answers(int n);

    int get_fib_ans(int n); 
};

memo::memo() {
    this->fib_ans.at(0) = 0;
    this->fib_ans.at(1) = 1;
}

void memo::set_fib_answers(int n) {
    for (int i = 2; i < n; i++) {
        this->fib_ans.push_back(fib_ans.at(i - 1) + fib_ans.at(i - 2));
    }
}

int memo::get_fib_ans(int n) {
    return this->fib_ans.at(n);
}


class fib_solver {
    private:

    memo memo;

    public:

    void run_fib_solver();

};



int main() {
    fib_solver fib_solver;
    fib_solver.run_fib_solver();
}