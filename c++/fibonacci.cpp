#include <vector>

class memo {
    private:
    
    std::vector<int> fib_ans;
    
    public:

    memo();

    void set_fib_answers(int n);
};

memo::memo() {
    this->fib_ans.at(0) = 0;
    this->fib_ans.at(1) = 1;
}

void memo::set_fib_answers(int n) {
    this->fib_ans.push_back(fib_ans.at(n - 1) + fib_ans.at(n - 2));
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